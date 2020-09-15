#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;


namespace {
  class SevenNumberTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "seven_number";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  //custom test
  TEST_F(SevenNumberTest, CustomTest) {
    //testcases
    EXPECT_EQ(execute("0"), "0");
    EXPECT_EQ(execute("20"), "26");
    EXPECT_EQ(execute("-100"), "-202");
    EXPECT_EQ(execute("1007"), "2636");
  }
}