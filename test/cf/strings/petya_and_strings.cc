#include <limits.h>
#include "gtest/gtest.h"

#include "cf/strings/petya_and_strings.h"

using namespace std;

namespace {
  class PetyaAndStringsTest : public testing::Test {
    protected:
      PetyaAndStrings m_info;

      void setUp() {
        //do nothing for this test
      }
  };

  //print info
  TEST_F(PetyaAndStringsTest, InfoTest) {
    //print info
    cout << "Start to test petya and strings question with code = " << 
      m_info.code() << ", url = " << m_info.url() << endl;
  }

  //code force test cases
  TEST_F(PetyaAndStringsTest, CodeForceTest) {
    //test cases
    EXPECT_EQ(m_info.solve("abs", "Abz"), -1);
    EXPECT_EQ(m_info.solve("aaaa", "aaaA"), 0);
    EXPECT_EQ(m_info.solve("abcdefg", "AbCdEfF"), 1);
  }
}