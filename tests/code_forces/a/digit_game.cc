#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class DigitGameTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "digit_game";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(DigitGameTest, Test1) {
    //test cases
    EXPECT_EQ(execute("5\n"
      "1\n"
      "2\n"
      "1\n"
      "3\n"
      "3\n"
      "102\n"
      "4\n"
      "2069\n"
      "7\n"
      "0278965"),
      "2\n1\n1\n2\n1");
  }
}