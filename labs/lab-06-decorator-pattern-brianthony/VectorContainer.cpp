#include "VectorContainer.hpp"

using namespace std;

VectorContainer::VectorContainer() : Container() {}
VectorContainer::VectorContainer(Sort* fcn) : Container(fcn) {}

void VectorContainer::add_element(Base* element){
    this->v.push_back(element);
    return;
}
void VectorContainer::print() {
    for (int i = 0; i < v.size(); i++) {
       cout << this->v.at(i)->stringify() << endl;
    }
    return;
}
void VectorContainer::sort() {
    if (this->sort_function == nullptr) {
        throw invalid_argument("Sort function is not set.");
    }
    this->sort_function->sort(this); 
}

void VectorContainer::swap(int i, int j){
    std::swap(this->v.at(i), this->v.at(j));
    return;
}
Base* VectorContainer::at(int i) {
    return this->v.at(i);
}
int VectorContainer::size() {
    return this->v.size();
}
