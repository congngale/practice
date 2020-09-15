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

  //code force test cases
  TEST_F(QueueAtTheSchoolTest, CodeForceTest) {
    //test cases
    EXPECT_EQ(execute("4 1\nGGGB"), "GGGB");
    EXPECT_EQ(execute("5 1\nBGGBG"), "GBGGB");
    EXPECT_EQ(execute("5 2\nBGGBG"), "GGBGB");
  }
}