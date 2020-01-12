#ifndef __COUNT_VISITOR_HPP__
#define __COUNT_VISITOR_HPP__

class CountVisitor {
    private:
        int ops = 0;
        int rands = 0;
        int mults = 0;
        int divs = 0;
        int add = 0;
        int sub = 0;
        int pow = 0;
        
        int ceil = 0;
        int floor = 0;
        int abs = 0;
        int trunc = 0;
        int paren = 0;

    public:
        CountVisitor();

        void visit_op();
        int op_count();
        void visit_rand();
        int rand_count();
        void visit_mult();
        int mult_count();
        void visit_div();
        int div_count();
        void visit_add();
        int add_count();
        void visit_sub();
        int sub_count();
        void visit_pow();
        int pow_count();
        void visit_ceil();
        int ceil_count();
        void visit_floor();
        int floor_count();
        void visit_abs();
        int abs_count();
        void visit_trunc();
        int trunc_count();
        void visit_paren();
        int paren_count();
};

#endif //__COUNT_VISITOR_HPP__
