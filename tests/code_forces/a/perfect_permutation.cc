#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class PerfectPermutationTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "perfect_permutation";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(PerfectPermutationTest, Test1) {
    //test cases
    EXPECT_EQ(execute("1"), "-1");
  }

  TEST_F(PerfectPermutationTest, Test2) {
    //test cases
    EXPECT_EQ(execute("2"), "2 1");
  }

  TEST_F(PerfectPermutationTest, Test3) {
    //test cases
    EXPECT_EQ(execute("4"), "2 1 4 3");
  }
}