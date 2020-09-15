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

  //code force test cases
  TEST_F(BoyOrGirlTest, CodeForceTest) {
    //test cases
    EXPECT_EQ(execute("wjmzbmr"), CHAT);
    EXPECT_EQ(execute("xiaodao"), IGNORE);
    EXPECT_EQ(execute("sevenkplus"), CHAT);
  }
}