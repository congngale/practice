#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class BoyOrGirlTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "boy_or_girl";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(BoyOrGirlTest, Test1) {
    //test cases
    EXPECT_EQ(execute("wjmzbmr"), CHAT);
  }

  TEST_F(BoyOrGirlTest, Test2) {
    //test cases
    EXPECT_EQ(execute("xiaodao"), IGNORE);
  }

  TEST_F(BoyOrGirlTest, Test3) {
    //test cases
    EXPECT_EQ(execute("sevenkplus"), CHAT);
  }
}