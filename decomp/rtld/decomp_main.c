#include "recomp_runtime.h"
extern void _start(GuestContext* c);
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);
/* Local dispatch loop: the stock recomp_run is compiled
   out of the static-host runtime, so drive the module
   through its own lookup exactly as recomp_run would. */
static void decomp_run(GuestContext* c){
  uint64_t g=0;
  while(!c->halted){
    BlockFn f=RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
    if(++g>100000000ULL) break;
  }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef HAVE_SDL2
#include <SDL2/SDL.h>
#endif

#define GUEST_MEM_SIZE (256ULL * 1024 * 1024) /* 256 MB */

static const char* kGameTitle = "Pokemon Sword[0100ABF008968000][US][v0]";

#ifdef HAVE_SDL2
static SDL_Window*   g_sdl_window   = NULL;
static SDL_Renderer* g_sdl_renderer = NULL;
static SDL_Texture*  g_sdl_texture  = NULL;
static int g_fb_w = 1280, g_fb_h = 720;

/* Called from the SVC handler when the guest flushes a framebuffer.
   fb: CPU-accessible RGBA8 pixels, w x h. */
void recomp_sdl_blit(const void* fb, int w, int h) {
  if(!g_sdl_renderer) return;
  if(w!=g_fb_w || h!=g_fb_h || !g_sdl_texture) {
    if(g_sdl_texture) SDL_DestroyTexture(g_sdl_texture);
    g_sdl_texture = SDL_CreateTexture(g_sdl_renderer,
      SDL_PIXELFORMAT_RGBA32, SDL_TEXTUREACCESS_STREAMING, w, h);
    g_fb_w=w; g_fb_h=h;
  }
  SDL_UpdateTexture(g_sdl_texture, NULL, fb, w*4);
  SDL_RenderClear(g_sdl_renderer);
  SDL_RenderCopy(g_sdl_renderer, g_sdl_texture, NULL, NULL);
  SDL_RenderPresent(g_sdl_renderer);
}

static int sdl_pump_events(void) {
  SDL_Event e;
  while(SDL_PollEvent(&e)) {
    if(e.type==SDL_QUIT) return 0;
    if(e.type==SDL_KEYDOWN && e.key.keysym.sym==SDLK_ESCAPE) return 0;
  }
  return 1;
}
#endif /* HAVE_SDL2 */

int main(int argc, char** argv){
  printf("=== %s ===\n", kGameTitle);

#ifdef HAVE_SDL2
  if(SDL_Init(SDL_INIT_VIDEO) == 0) {
    g_sdl_window = SDL_CreateWindow(kGameTitle,
      SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_RESIZABLE);
    if(g_sdl_window)
      g_sdl_renderer = SDL_CreateRenderer(g_sdl_window, -1, SDL_RENDERER_ACCELERATED);
  } else {
    fprintf(stderr, "[recomp] SDL2 init failed: %s (running headless)\n", SDL_GetError());
  }
#endif

  uint8_t* mem = (uint8_t*)calloc(1, (size_t)GUEST_MEM_SIZE);
  if(!mem){ fprintf(stderr,"Failed to allocate guest memory\n"); return 1; }
  GuestContext c; memset(&c,0,sizeof c);
  c.mem=mem; c.mem_size=GUEST_MEM_SIZE;
  c.mem_base_vaddr=0x0ULL;
  c.heap_base=c.mem_base_vaddr+GUEST_MEM_SIZE/2;
  c.heap_cur=c.heap_base; c.heap_end=c.mem_base_vaddr+GUEST_MEM_SIZE;
  c.x[31]=c.mem_base_vaddr + GUEST_MEM_SIZE - 16; /* SP */
  c.pc=0x0ULL;

  recomp_save_init(&c, argv[0]);

  { char data_dir[512];
    snprintf(data_dir,sizeof data_dir,"%s",argv[0]);
    char* sl=strrchr(data_dir,'\\'); if(!sl) sl=strrchr(data_dir,'/'); if(sl) *(sl+1)=0; else data_dir[0]=0;
    strncat(data_dir,"data",sizeof(data_dir)-strlen(data_dir)-1);
    recomp_load_segments(&c,data_dir);
  }

  { uint64_t sz=0;
    if(recomp_save_exists(&c,"autosave.bin")){
      recomp_save_read(&c,"autosave.bin",c.mem,(uint64_t)GUEST_MEM_SIZE,&sz);
      printf("[recomp] Restored autosave (%llu bytes)\n",(unsigned long long)sz);
    }
  }

  printf("[recomp] Starting at pc=0x%llx\n",(unsigned long long)c.pc);
  /* Main loop: pump SDL events while the guest runs */
#ifdef HAVE_SDL2
  while(!c.halted) {
    if(!sdl_pump_events()) break;
    _start(&c); decomp_run(&c); /* runs until SVC or halt */
  }
#else
  _start(&c); decomp_run(&c);
#endif

  recomp_save_write(&c,"autosave.bin",c.mem,(uint64_t)GUEST_MEM_SIZE);
  printf("[recomp] halted at pc=0x%llx\n",(unsigned long long)c.pc);
#ifdef HAVE_SDL2
  if(g_sdl_texture)  SDL_DestroyTexture(g_sdl_texture);
  if(g_sdl_renderer) SDL_DestroyRenderer(g_sdl_renderer);
  if(g_sdl_window)   SDL_DestroyWindow(g_sdl_window);
  SDL_Quit();
#endif
  free(mem);
  return 0;
}
