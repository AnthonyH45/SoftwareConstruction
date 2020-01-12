#include "visitor.hpp"

CountVisitor::CountVisitor() {
    this->ops = 0;
    this->rands = 0;
    this->mults = 0;
    this->divs = 0;
    this->add = 0;
    this->sub = 0;
    this->pow = 0;
    this->ceil = 0;
    this->floor = 0;
    this->abs = 0;
    this->trunc = 0;
    this->paren = 0;
}
void CountVisitor::visit_op() {
    this->ops++;
}
int CountVisitor::op_count() {
    return this->ops;
}
void CountVisitor::visit_rand() {
    this->rands++;
}
int CountVisitor::rand_count() {
    return this->rands;
}
void CountVisitor::visit_mult() {
    this->mults++;
}
int CountVisitor::mult_count() {
    return this->mults;
}
void CountVisitor::visit_div() {
    this->divs++;
}
int CountVisitor::div_count() {
    return this->divs;
}
void CountVisitor::visit_add() {
    this->add++;
}
int CountVisitor::add_count() {
    return this->add;
}
void CountVisitor::visit_sub() {
    this->sub++;
}
int CountVisitor::sub_count() {
    return this->sub;
}
void CountVisitor::visit_pow() {
    this->pow++;
}
int CountVisitor::pow_count() {
    return this->pow;
}

void CountVisitor::visit_ceil() {
    this->ceil++;
}
int CountVisitor::ceil_count() {
    return this->ceil;
}
void CountVisitor::visit_floor() {
     this->floor++;
}
int CountVisitor::floor_count() {
    return this->floor;
}
void CountVisitor::visit_abs() {
    this->abs++;
}
int CountVisitor::abs_count() {
    return this->abs;
}
void CountVisitor::visit_trunc() {
    this->trunc++;
}
int CountVisitor::trunc_count() {
    return this->trunc;
}
void CountVisitor::visit_paren() {
    this->paren++;
}
int CountVisitor::paren_count() {
    return this->paren;
}