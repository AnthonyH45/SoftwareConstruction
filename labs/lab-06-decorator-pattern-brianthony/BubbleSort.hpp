#ifndef __BUBBLE_SORT_HPP__
#define __BUBBLE_SORT_HPP__

#include "container.hpp"
#include "sort.hpp"

class Container;

class BubbleSort : public Sort {
    public:
        BubbleSort() : Sort() {};
        virtual void sort(Container* container);
};

#endif //__BUBBLE_SORT_HPP__
