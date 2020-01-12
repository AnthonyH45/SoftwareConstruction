#include "SelectionSort.hpp"

void SelectionSort::sort(Container* container) {
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
 /*if (container->size() > 1) {
        int min_index = 0;
        for (int i = 0; i < container->size(); ++i) {
            min_index = i;
            for (int j = i+1; j < container->size(); ++j) {
                if (container->at(j)->evaluate() < container->at(min_index)->evaluate()) {
                    min_index = j;
                }
                container->swap(min_index, j);
            }
        }
    }*/

