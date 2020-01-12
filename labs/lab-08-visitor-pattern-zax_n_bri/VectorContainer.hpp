#ifndef __VECTOR_CONTAINER_HPP__
#define __VECTOR_CONTAINER_HPP__

#include <iostream>
#include <vector>
#include <stdexcept>

#include "sort.hpp"
#include "base.hpp"
#include "container.hpp"

using namespace std;

class Sort;
class Base;

class VectorContainer : public Container {
    protected:
        vector<Base*> v;

    public:
        /* Constructors */
        VectorContainer();
        VectorContainer(Sort* function);
        /* Non Virtual Functions */
        
        /* Pure Virtual Functions */
        // push the top pointer of the tree into container
        virtual void add_element(Base* element);
            // iterate through trees and output the expressions (use stringify())
        void print();
        // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
        void sort();
        /* Essentially the only functions needed to sort */
        //switch tree locations
        void swap(int i, int j);
        // get top ptr of tree at index i
        Base* at(int i);
        // return container size
        int size();
};

#endif //__VECTOR_CONTAINER_HPP__
