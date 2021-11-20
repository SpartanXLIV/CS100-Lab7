#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "op.hpp"
#include <iostream>
#include <string>

class Add : public Base {
     public:
     Add( Base* left, Base* right) : Base(){
     lnum = left->evaluate();
     rnum = right->evaluate();
     lhs = left->stringify();		//left turned into string
     rhs = right->stringify();		//right turned into string
     }
     virtual double evaluate () {return (lnum + rnum);}
     virtual std::string stringify() {return lhs + " + " + rhs;}
     private:
     std::string lhs;
     std::string rhs;
     double lnum;
     double rnum;
};

#endif
