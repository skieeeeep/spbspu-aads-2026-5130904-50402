#include <algorithm>
#include <stdexcept>
#include <utility>

namespace emushintsev {
    template< class T >
    class BiList;
    
    template< class T >
    class BLIter {
        public:
        friend class BiList< T >;
        friend class BLCIter< T >;

        BLIter():
        curr_(nullptr) {}

        explicit BLIter(typename BiList< T > :: Node * node):
        curr_(node) {}

        bool operator == (const BLIter< T > & other) const noexcept {
            return curr_ == other.curr_;
        }

        bool operator != (const BLIter< T > & other) const noexcept {
            return !(*this == other);
        }
    }
}