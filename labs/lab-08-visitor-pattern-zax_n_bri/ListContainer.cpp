#include <iterator>
#include "ListContainer.hpp"

using namespace std;

ListContainer::ListContainer() : Container() {}
ListContainer::ListContainer(Sort* fcn) : Container(fcn) {}

void ListContainer::add_element(Base* element) { this->l.push_back(element); return; }

void ListContainer::print() { 
    for (auto i : this->l) {
        cout << i->stringify() << endl;
    }
}
void ListContainer::sort() { 
    if (this->sort_function == nullptr) throw std::invalid_argument("Sort function is not set");
    else this->sort_function->sort(this); 
}
void ListContainer::swap(int i, int j) {
    if (i < 0 || j < 0 || i >= this->size() || j >= this->size()) return;

    std::list<Base*>::iterator from = this->l.begin();
    std::advance(from, i);
    std::list<Base*>::iterator to = this->l.begin();
    std::advance(to, j);
    
    std::iter_swap(from, to);
}

Base* ListContainer::at(int i) {
    if (i < 0) return nullptr;
    if (i >= this->l.size()) return nullptr;

    list<Base*>::iterator toReturn = this->l.begin();
    for (int k = 0; k < i; ++k) {
        toReturn++;
    }

    return *toReturn;
}

int ListContainer::size() { return this->l.size(); }

