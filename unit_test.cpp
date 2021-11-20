#include "gtest/gtest.h"

//#include "op_test.hpp"		//all test are being run in unit_test.cpp,
//#include "add_test.hpp"		//so just need to include them in here
//#include "sub_test.hpp"
//#include "mult_test.hpp"
//#include "div_test.hpp"
//#include "rand_test.hpp"
//#include "pow_test.hpp"


#include "factory.hpp"

#include "factory_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
