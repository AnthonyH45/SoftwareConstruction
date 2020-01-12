#ifndef __SELECTIONSORT_HPP__
#define __SELECTIONSORT_HPP__

#include "container.hpp"
#include "sort.hpp"

class Container;

class SelectionSort : public Sort {
    public:
        SelectionSort() : Sort() {};

        virtual void sort(Container* container);
};

#endif //__SORT_HPP__
