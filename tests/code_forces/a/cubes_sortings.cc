#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class CubesSortingsTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "cubes_sortings";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  TEST_F(CubesSortingsTest, Test1) {
    //test cases
    EXPECT_EQ(execute("3\n"
      "5\n"
      "5 3 2 1 4\n"
      "6\n"
      "2 2 2 2 2 2\n"
      "2\n"
      "2 1"),
      "YES\nYES\nNO");
  }
}