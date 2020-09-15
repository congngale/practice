#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class NextRoundTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "next_round";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  //code force test cases
  TEST_F(NextRoundTest, CodeForceTest) {
    //test cases
    EXPECT_EQ(execute("4 2\n0 0 0 0"), "0");
    EXPECT_EQ(execute("8 5\n10 9 8 7 7 7 5 5"), "6");
  }
}