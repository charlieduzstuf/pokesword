#include "gflib3/include/core/engine/object_handle.h"

namespace gfl::engine {

struct MemoryObject {
    mem::MemoryResource* m_resource;
    void* m_ptr;
    size_t m_size;
    size_t m_align;
    const char* m_filename;
    s32 m_line;
    const char* m_ownerName;
    s32 m_ownerLine;
};

struct IReflectionObject {
    template <class T> bool IsKindOf();
    template <class T> T* SafeCast();
};

struct IReferenceObject {};

class IObjectHandler : IReferenceObject {};

class IObject : IObjectHandler, IReflectionObject {};

template <class T>
class Object : MemoryObject , IObject , T {
    ObjectHandle<IReflectionObject> m_handle;
};

}  // namespace gfl::engine
