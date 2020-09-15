#include <limits.h>
#include "gtest/gtest.h"

#include "define.h"
#include "system.h"

using namespace std;

namespace {
  class WayTooLongWordTest : public testing::Test {
    protected:
      //set execute file
      string execute_file = "way_too_long_word";

      //execute test
      string execute(string test_case) {
        //execute test case
        return System::execute_test(PACKAGE_PATH + execute_file, test_case);
      }
  };

  //custom test
  TEST_F(WayTooLongWordTest, CustomTest) {
    //init data
    string output = "word\nl10n\ni18n\np43s";
    string input = "4\nword\nlocalization\ninternationalization\n"
      "pneumonoultramicroscopicsilicovolcanoconiosis";

    //test cases
    EXPECT_EQ(execute(input), output);
  }


  //code force test cases
  TEST_F(WayTooLongWordTest, CodeForceTest) {
    //init data
    string output = "abcdefgh\nabcdefghi\nabcdefghij\na9k\na11m";
    string input = "5\nabcdefgh\nabcdefghi\nabcdefghij\nabcdefghijk\n"
      "abcdefghijklm";
    
    //test cases
    EXPECT_EQ(execute(input), output);
  }
}