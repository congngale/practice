#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class KilljoyTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "killjoy";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(KilljoyTest, Test1) {
    //test cases
    EXPECT_EQ(execute("3\n"
      "2 69\n"
      "68 70\n"
      "6 4\n"
      "4 4 4 4 4 4\n"
      "9 38\n"
      "-21 83 50 -59 -77 15 -71 -78 20"),
      "1\n0\n2");
  }
}