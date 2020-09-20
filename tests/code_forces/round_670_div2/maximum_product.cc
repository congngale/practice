#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class MaximumProductTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "maximum_product";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(MaximumProductTest, Test1) {
    //test cases
    EXPECT_EQ(execute("4\n"
      "5\n"
      "-1 -2 -3 -4 -5\n"
      "6\n"
      "-1 -2 -3 1 2 -1\n"
      "6\n"
      "-1 0 0 0 -1 -1\n"
      "6\n"
      "-9 -7 -5 -3 -2 1"),
      "-120\n12\n0\n945");
  }
}