#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class SubSetMexTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "subset_mex";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(SubSetMexTest, Test1) {
    //test cases
    EXPECT_EQ(execute("4\n6\n0 2 1 5 0 1\n3\n0 1 2\n4\n0 2 0 1\n6\n1 2 3 4 5 6"),
      "5\n3\n4\n0");
  }
}