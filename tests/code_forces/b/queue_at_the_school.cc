#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class QueueAtTheSchoolTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "queue_at_the_school";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(QueueAtTheSchoolTest, Test1) {
    //test cases
    EXPECT_EQ(execute("4 1\nGGGB"), "GGGB");
  }

  TEST_F(QueueAtTheSchoolTest, Test2) {
    //test cases
    EXPECT_EQ(execute("5 1\nBGGBG"), "GBGGB");
  }

  TEST_F(QueueAtTheSchoolTest, Test3) {
    //test cases
    EXPECT_EQ(execute("5 2\nBGGBG"), "GGBGB");
  }

  TEST_F(QueueAtTheSchoolTest, Test4) {
    //test cases
    EXPECT_EQ(execute("22 7\nGBGGBGGGGGBBBGGBGBGBBB"), "GGGGGGGGBGGBGGBBBBBBBB");
  }
}