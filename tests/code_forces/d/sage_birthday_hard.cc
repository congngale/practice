#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class SagaBirthDayHardTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "sage_birthday_hard";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(SagaBirthDayHardTest, Test1) {
    //test cases
    EXPECT_EQ(execute("10\n"
      "1 1 1 1 1 1 1 1 1 9"),
      "0\n"
      "1 1 1 1 1 9 1 1 1 1");
  }

  TEST_F(SagaBirthDayHardTest, Test2) {
    //test cases
    EXPECT_EQ(execute("4\n"
      "1 1 2 4"),
      "1\n"
      "1 2 1 4");
  }

  TEST_F(SagaBirthDayHardTest, Test3) {
    //test cases
    EXPECT_EQ(execute("5\n"
      "1 2 2 4 5"),
      "2\n"
      "2 1 4 2 5");
  }
}