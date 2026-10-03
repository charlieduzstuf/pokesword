/* Pokemon Sword -- decompilation project entry point.
 *
 * Upstream pokesword targets the Switch and lets the game's own startup code
 * reach main(). Here the recovered code is built for the host and each NSO
 * module is exercised by its own decompiled_<module> executable (see
 * decomp/<module>/CMakeLists.txt), so this translation unit only carries the
 * shared project scaffolding.
 *
 * The real declarations live in prog/types.h and in the per-subsystem
 * headers under prog/<group>/<sub>/include/.
 */

#include "types.h"

// Keep the upstream symbol referenced so linkers and symbol dumps still see a
// project entry point.
extern "C" int pokesword_main() {
    return 0;
}

int main() {
    return pokesword_main();
}
