#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class PetyaAndStringsTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "petya_and_strings";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(PetyaAndStringsTest, Test1) {
    //test cases
    EXPECT_EQ(execute("abs\nAbz"), "-1");
  }

  TEST_F(PetyaAndStringsTest, Test2) {
    //test cases
    EXPECT_EQ(execute("aaaa\naaaA"), "0");
  }

  TEST_F(PetyaAndStringsTest, Test3) {
    //test cases
    EXPECT_EQ(execute("abcdefg\nAbCdEfF"), "1");
  }
}