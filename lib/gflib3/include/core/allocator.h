#include <NintendoSDK/include/nn/types.h>
#include "gflib3/include/mem/memory_resource.h"

namespace gfl {

template <class T, size_t U>
struct Allocator {
    gfl::mem::MemoryResource* m_resource;
    const char* m_ownerFilePath;
    int m_ownerLineNumber;
};

}  // namespace gfl