#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include <stack>
#include <iostream>
#include <sstream>
#include <string>

#include "base.hpp"
#include "op.hpp"
#include "Mult.hpp"
#include "Add.hpp"
#include "Sub.hpp"
#include "Div.hpp"
#include "Pow.hpp"

class Factory {
    public:
        Factory() {};
        int precedence(char c) {
            if (c == '*' || c == '/') {
                return 1;
            } else if (c == '+' || c == '-') {
                return 1;
            } else {
                return 0;
            }
            return 0;
        }

        Base* parse(char** input, int length) {
            // convert char** to string
            std::string toParse = "";
            for (int i = 1; i < length; ++i) {
                std::string toAdd(input[i]);
                toParse += toAdd + " ";
            }
            std::stringstream ss(toParse);

            // convert to postfix
            std::stack<char> operatorStack;
            std::string postfix;

            std::string i = "";
            while (ss >> i) {
                if (i == "+" || i == "-" || i == "*" || i == "/") {
                    while (!operatorStack.empty() && this->precedence(i.at(0)) <= this->precedence(operatorStack.top())) {
                        postfix += operatorStack.top();
                        postfix += " ";
                        operatorStack.pop();
                    }
                    operatorStack.push(i.at(0));
                } else postfix += i + " ";
            }

            while (!operatorStack.empty()) {
                postfix += operatorStack.top();
                postfix += " ";
                operatorStack.pop();
            }
    
            // postfix to base conversion
            std::stack<Base*> baseStack;
            std::string to_parse = "";
            for (auto i : postfix) {
                //std::cout << "i=" << i << "=" << std::endl;
                if (i == '*') {
                    Base* r = baseStack.top();
                    baseStack.pop();
                    Base* l = baseStack.top();
                    baseStack.pop();
                    baseStack.push(new Mult(l,r));
                } else if (i == '/') {
                    Base* r = baseStack.top();
                    baseStack.pop();
                    Base* l = baseStack.top();
                    baseStack.pop();
                    baseStack.push(new Div(l,r));
                } else if (i == '+') {
                    Base* r = baseStack.top();
                    baseStack.pop();
                    Base* l = baseStack.top();
                    baseStack.pop();
                    baseStack.push(new Add(l,r));
                } else if (i == '-') {
                    Base* r = baseStack.top();
                    baseStack.pop();
                    Base* l = baseStack.top();
                    baseStack.pop();
                    baseStack.push(new Sub(l,r));
                } else if (i == ' ') {
                    if (!to_parse.empty()) {
                        baseStack.push(new Op(stod(to_parse)));
                        to_parse = "";
                    }
                } else to_parse += i;
            }

            return baseStack.top();
        }
};

#endif //__BUBBLE_SORT_HPP__
