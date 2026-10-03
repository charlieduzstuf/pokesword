#include <NintendoSDK/include/nn/types.h>
#include "gflib3/include/core/engine/memory_object.h"

namespace gfl::mem {

// using MemoryResourceBase nn::MemoryResource

struct MemoryResourceBase {};

struct MemoryResource : MemoryResourceBase, engine::IReflectionObject {
    const char* m_resourceName;
};

template <class T>
struct MemoryResourceDeleter {
    MemoryResource* m_resource;
    size_t m_size;
    size_t m_alignment;

    virtual T operator()(const T&) {}
};

}  // namespace gfl::mem
