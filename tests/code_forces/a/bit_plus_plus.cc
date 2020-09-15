#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class BitPlusPlusTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "bit_plus_plus";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  //code force test cases
  TEST_F(BitPlusPlusTest, CodeForceTest) {
    //test cases
    EXPECT_EQ(execute({"1\n++X"}), "1");
    EXPECT_EQ(execute({"2\n++X\nX--"}), "0");
  }
}