#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    public:
        Op(double value) : Base() { //added some components, val and str
    val = value;			//declare value to ne returned in evaluate
    str = std::to_string(val);		//declare stringified value to be returned in stingify
    str.erase(str.find_last_not_of('0') + 1, std::string::npos);	//fixed compile error
    str.erase(str.find_last_not_of('.') + 1, std::string::npos);	//fixed compole error
 }
        virtual double evaluate() { return val; }      //change 0.0 to value
        virtual std::string stringify() { return str; } //change "" to a string

    protected:			//added these protected values
    double val;
    std::string str;

};



#endif
