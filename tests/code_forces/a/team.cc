#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class TeamTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "team";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(TeamTest, Test1) {
    //test cases
    EXPECT_EQ(execute("2\n1 0 0\n0 1 1"), "1");
  }

  TEST_F(TeamTest, Test2) {
    //test cases
    EXPECT_EQ(execute("3\n1 1 0\n1 1 1\n1 0 0"), "2");
  }
}