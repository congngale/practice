#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class DoninoPilingTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "domino_piling";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  //code force test cases
  TEST_F(DoninoPilingTest, CodeForceTest) {
    //test cases
    EXPECT_EQ(execute("2 4"), "4");
    EXPECT_EQ(execute("3 3"), "4");
  }
}