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
#include "evaldecorator.hpp"

#include "abs.hpp"
#include "floor.hpp"
#include "ceil.hpp"


int main() {
    Op* negOne = new Op(-1);
    char a = 'a';
    EvalDecorator* toTest = new EvalDecorator(negOne, a);
    std::cout << "expecting abs(-1)=1, got : " << toTest->evaluate() << std::endl;

    Op* onePointNine = new Op(1.9);
    char f = 'f';
    EvalDecorator* toTest1 = new EvalDecorator(onePointNine, f);
    std::cout << "expecting floor(1.9)=1, got : " << toTest1->evaluate() << std::endl;

    Op* onePointOne = new Op(1.1);
    char c = 'c';
    EvalDecorator* toTest2 = new EvalDecorator(onePointOne, c);
    std::cout << "expecting ceil(1.1)=2, got : " << toTest2->evaluate() << std::endl;
    return 0;
}
