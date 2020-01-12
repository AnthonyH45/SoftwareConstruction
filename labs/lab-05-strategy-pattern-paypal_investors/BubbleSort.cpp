#include "container.hpp"
#include "sort.hpp"

#include "BubbleSort.hpp"

void BubbleSort::sort(Container* container) {
    if (container->size() > 1) {
        for (int i = 0; i < container->size(); ++i) {
            for (int j = i+1; j < container->size(); ++j) {
                if (container->at(i)->evaluate() > container->at(j)->evaluate()) {
                    container->swap(i, j);
                }
            }
        }
    }
}
