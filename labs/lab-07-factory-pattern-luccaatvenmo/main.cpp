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

#include "factory.hpp"

/*
    some test cases:
        1 + 2
        2 + 1
        3 / 3
        4 / 9
        2 / 3 + 4 / 8 \* 9 - 10
*/

int main(int argc, char** argv) {
    if (argc <= 1) {
        std::cout << "Please enter `./calculator <expression>`" << std::endl;
        std::cout << "Example: `./calculator 9 / 3 - 1 + 2 \\* 3 `" << std::endl;
        return 0;
    }

    Factory* toCreate = new Factory();
    Base* root = toCreate->parse(argv, argc);
    std::cout << root->stringify() << std::endl;
}