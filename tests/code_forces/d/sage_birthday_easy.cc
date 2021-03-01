#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class SagaBirthDayEasyTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "sage_birthday_easy";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(SagaBirthDayEasyTest, Test1) {
    //test cases
    EXPECT_EQ(execute("5\n"
      "1 2 3 4 5"),
      "2\n"
      "3 1 4 2 5");
  }
}