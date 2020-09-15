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

  //custom test
  TEST_F(WaterMelonTest, CustomTest) {
    //test fail
    EXPECT_EQ(execute("0"), NO);
    EXPECT_EQ(execute("1"), NO);
    EXPECT_EQ(execute("2"), NO);
    EXPECT_EQ(execute("3"), NO);

    //test success
    EXPECT_EQ(execute("4"), YES);
    EXPECT_EQ(execute("6"), YES);
    EXPECT_EQ(execute("50"), YES);
    EXPECT_EQ(execute("60"), YES);
  }

  //code force test cases
  TEST_F(WaterMelonTest, CodeForceTest) {
    //test success
    EXPECT_EQ(execute("8"), YES);
    EXPECT_EQ(execute("5"), NO);
    EXPECT_EQ(execute("4"), YES);
    EXPECT_EQ(execute("3"), NO);
    EXPECT_EQ(execute("2"), NO);
    EXPECT_EQ(execute("1"), NO);
    EXPECT_EQ(execute("7"), NO);
    EXPECT_EQ(execute("6"), YES);
    EXPECT_EQ(execute("10"), YES);
    EXPECT_EQ(execute("9"), NO);
    EXPECT_EQ(execute("53"), NO);
    EXPECT_EQ(execute("77"), NO);
    EXPECT_EQ(execute("32"), YES);
    EXPECT_EQ(execute("44"), YES);
    EXPECT_EQ(execute("98"), YES);
    EXPECT_EQ(execute("99"), NO);
    EXPECT_EQ(execute("90"), YES);
    EXPECT_EQ(execute("67"), NO);
    EXPECT_EQ(execute("100"), YES);
    EXPECT_EQ(execute("88"), YES);
  }
}