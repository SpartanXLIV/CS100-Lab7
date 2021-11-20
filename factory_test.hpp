#ifndef _FACTORY_TEST_HPP
#define _FACTORY_TEST_HPP

using namespace std;

#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "div.hpp"
#include "factory.hpp"

TEST(FactoryTests, AddTwoInts) 
{
    char* test_val[4]; //set the size of input array
    test_val[0] = "./calculator"; test_val[1] = "2"; test_val[2] = "+" ; test_val[3] = "3";	//set it's values
    Factory* f = new Factory();								//declare a new factory
    Base* test = f->parse(test_val, 4);							//ceclare a new base with factory parameters
    string resultString = test->stringify();						//strigify
    double resultEval = test->evaluate();						//evauluate
    EXPECT_EQ("2 + 3", resultString);							//return string
    EXPECT_EQ(5, resultEval);								//return eval
}

TEST(FactoryTests, AddTwoDouble)
{
    char* test_val[4]; 
    test_val[0] = "./calcutor"; test_val[1] = "1.2"; test_val[2] = "+"; test_val[3] = "2.2";
    Factory* f = new Factory();
    Base* test = f->parse(test_val, 4);
    string resultString = test->stringify();
    double resultEval = test->evaluate();
    EXPECT_EQ("1.2 + 2.2", resultString);
    EXPECT_DOUBLE_EQ(3.4, resultEval);					//when working with doubles, use EXPECT_DOUBLE or EXPECT_NEAR
}

TEST(FactoryTests, DivideTwoInts) 
{
    char* test_val[4]; 
    test_val[0] = "./calculator"; test_val[1] = "20"; test_val[2] = "/" ; test_val[3] = "4";
    Factory* f = new Factory();
    Base* test = f->parse(test_val, 4);
    string resultString = test->stringify();
    double resultEval = test->evaluate();
    EXPECT_EQ("20 / 4", resultString);
    EXPECT_EQ(5, resultEval);
}

TEST(FactoryTests, MultipleOpAddition) 
{
    char* test_val[6]; 
    test_val[0] = "./calculator"; test_val[1] = "3"; test_val[2] = "+" ; test_val[3] = "2"; test_val[4] = "-"; test_val[5] = "5";
    Factory* f = new Factory();
    Base* test = f->parse(test_val, 6);
    string resultString = test->stringify();
    double resultEval = test->evaluate();
    EXPECT_EQ("3 + 2 - 5", resultString);
    EXPECT_EQ(0, resultEval);
}


TEST(FactoryTests, MultTwoDouble)
{
    char* test_val[4]; 
    test_val[0] = "./calculator"; test_val[1] = "3.5"; test_val[2] = "\*" ; test_val[3] = "2";
    Factory* f = new Factory();
    Base* test = f->parse(test_val, 4);
    string resultString = test->stringify();
    double resultEval = test->evaluate();
    EXPECT_EQ("3.5 * 2", resultString);
    EXPECT_DOUBLE_EQ(7, resultEval);
}

TEST(FactoryTests, ZeroPowThree)
{
   char* test_val[4]; 
   test_val[0] = "./calculator"; test_val[1] = "0"; test_val[2] = "\**" ; test_val[3] = "3";
   Factory* f = new Factory();
   Base* test = f->parse(test_val, 4);
   string resultString = test->stringify();
   double resultEval = test->evaluate();
   EXPECT_EQ("0 ** 3", resultString);
   EXPECT_EQ(0, resultEval);
}

#endif
