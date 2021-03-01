#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class ThreeSwimmersTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "three_swimmers";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(ThreeSwimmersTest, Test1) {
    //test fail
    EXPECT_EQ(execute("4\n"
      "9 5 4 8\n"
      "2 6 10 9\n"
      "10 2 5 10\n"
      "10 9 9 9"),
      "1\n4\n0\n8");
  }
}