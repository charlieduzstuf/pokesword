#include <vector>
#include <NintendoSDK/include/nn/types.h>
#include "gflib3/include/core/allocator.h"

namespace gfl::container {

// TODO: fix template
template <class T, size_t U> // -> 
class DynamicArray : Allocator<T, U>, std::vector<Allocator<T, U>> {

};

}  // namespace gfl::container