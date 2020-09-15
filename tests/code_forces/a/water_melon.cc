#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class WaterMelonTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "water_melon";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(WaterMelonTest, Test1) {
    //test fail
    EXPECT_EQ(execute("0"), NO);
  }

  TEST_F(WaterMelonTest, Test2) {
    //test fail
    EXPECT_EQ(execute("1"), NO);
  }

  TEST_F(WaterMelonTest, Test3) {
    //test fail
    EXPECT_EQ(execute("2"), NO);
  }

  TEST_F(WaterMelonTest, Test4) {
    //test fail
    EXPECT_EQ(execute("3"), NO);
  }

  TEST_F(WaterMelonTest, Test5) {
    //test success
    EXPECT_EQ(execute("4"), YES);
  }

  TEST_F(WaterMelonTest, Test6) {
    //test success
    EXPECT_EQ(execute("6"), YES);
  }

  TEST_F(WaterMelonTest, Test7) {
    //test success
    EXPECT_EQ(execute("50"), YES);
  }

  TEST_F(WaterMelonTest, Test8) {
    //test success
    EXPECT_EQ(execute("60"), YES);
  }
}