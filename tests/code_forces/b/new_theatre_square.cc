#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class NewTheatreSquareTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "new_theatre_square";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(NewTheatreSquareTest, Test1) {
    //test cases
    EXPECT_EQ(execute("4\n1 1 10 1\n.\n1 2 10 1\n..\n2 1 10 1\n.\n.\n3 3 3 7\n"
      "..*\n*..\n.*."), "10\n1\n20\n18");
  }
}