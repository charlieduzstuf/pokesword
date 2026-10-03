#include <array>
#include "NintendoSDK/include/nn/diag.h"
#include "gflib3/include/mem/memory_resource.h"

namespace gfl::mem {

struct IMemoryManager {};

template <class T>
struct Manager : IMemoryManager<T> {
    struct ResourceElement {
        MemoryResource* poolImpl;
        MemoryResource* parent;
        void* address;
        size_t size;
    };

    ~Manager() {}  // TODO
    static MemoryManager<T> s_instance;
    static MemoryManager<T> s_managerList[];

    std::array<ResourceElement, 1> m_resources;

    size_t GetMemoryResourceCount() const { return m_resources.size; }
    MemoryResource* GetMemoryResource(size_t index) const { return m_resources.at(index).poolImpl; }
    MemoryResource* GetParentResource(u32 index) const { return m_resources.at(index).parent; }
};

}  // namespace gfl::mem
