#include <limits.h>
#include "gtest/gtest.h"

#include "cf/way_too_long_word.h"

using namespace std;

namespace {
  class WayTooLongWordTest : public testing::Test {
    protected:
      WayTooLongWord m_info;

      void setUp() {
        //do nothing for this test
      }
  };

  //print info
  TEST_F(WayTooLongWordTest, InfoTest) {
    //print info
    cout << "Start to test way too long word with code = " << m_info.code() 
      << ", url = " << m_info.url() << endl;
  }

  //custom test
  TEST_F(WayTooLongWordTest, CustomTest) {
    //init data
    vector<string> result1 = {"word", "l10n", "i18n", "p43s"};
    vector<string> input1 = {"word", "localization", "internationalization", 
      "pneumonoultramicroscopicsilicovolcanoconiosis"};

    //test cases
    EXPECT_EQ(m_info.solve(input1), result1);
  }


  //code force test cases
  TEST_F(WayTooLongWordTest, CodeForceTest) {
    //init input & result
    vector<string> result = {"abcdefgh", "abcdefghi", "abcdefghij", "a9k",
    "a11m"};
    vector<string> input = {"abcdefgh", "abcdefghi", "abcdefghij", "abcdefghijk",
      "abcdefghijklm"};

    //test cases
    EXPECT_EQ(m_info.solve(input), result);
  }
}