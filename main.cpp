#include <iostream>

#include "base.hpp"	//make sure to include ALL  the new headers!!
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"

#include "rand.hpp"		//new
#include "factory.hpp"		//new

using namespace std;

int main(int argv, char** argc) 		//update parameters
{
	
  Factory* factory1 = new Factory();

  Base* output = factory1->parse(argc, argv);

  if (output == nullptr)
  {
  	cout << "Got nullptr! INVALID INPUT" << endl;		//invalid input, a nullptr was returned
  }else
  {
        cout << "Output stringified: " << output->stringify() << endl;
        cout << "Output evaluated: " << output->evaluate() << endl;
  }
  //
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
//    Base* three = new Op(3);
//    Base* seven = new Op(7);
//    Base* four = new Op(4);
//    Base* two = new Op(2);
//    Base* mult = new Mult(seven, four);
//    Base* add = new Add(three, mult);
//    Base* minus = new Sub(add, two);

//    std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    return 0;
}
