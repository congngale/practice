#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class HorseShoeTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "horse_shoe";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(HorseShoeTest, Test1) {
    //test cases
    EXPECT_EQ(execute("1 7 3 3"), "1");
  }

  TEST_F(HorseShoeTest, Test2) {
    //test cases
    EXPECT_EQ(execute("7 7 7 7"), "3");
  }
}