#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class StairsTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "stairs";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(StairsTest, Test1) {
    //test cases
    EXPECT_EQ(execute("4\n"
      "1\n"
      "8\n"
      "6\n"
      "1000000000000000000"),
      "1\n2\n1\n30");
  }
}