#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "Mult.hpp"
#include "Add.hpp"
#include "Sub.hpp"
#include "Div.hpp"
#include "Pow.hpp"
#include "opOne.hpp"
#include "opTwo.hpp"
#include "opThree.hpp"
#include "opFour.hpp"
#include "opFive.hpp"
#include "opSix.hpp"
#include "opSeven.hpp"

int main() {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    Base* mult = new Mult(seven, four);
    Base* add = new Add(three, mult);
    Base* minus = new Sub(add, two);

    std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    
    Base* thre = new Op(39.00);
    Base* sevn = new Op(78);
    Base* fur = new Op(4);
    Base* to = new Op(-90);
    Base* mlt = new Mult(sevn, fur);
    Base* ad = new Add(thre, mlt);
    Base* mius = new Sub(ad, to);

    std::cout << mius->stringify() << " = " << mius->evaluate() << std::endl;
    
    Base* thee = new OpSix();
    Base* sven = new OpFive();
    Base* fou = new OpFour();
    Base* tw = new OpThree();
    Base* mut = new Mult(sven, fou);
    Base* dd = new Add(thee, mut);
    Base* mnus = new Sub(dd, tw);
    Base* pows = new Pow(mnus, thee);

    std::cout << pows->stringify() << " = " << pows->evaluate() << std::endl;
    return 0;
}
