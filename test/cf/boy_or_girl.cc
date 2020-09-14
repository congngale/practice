#include <limits.h>
#include "gtest/gtest.h"

#include "cf/boy_or_girl.h"

using namespace std;

namespace {
  class BoyOrGirlTest : public testing::Test {
    protected:
      BoyOrGirl m_info;

      void setUp() {
        //do nothing for this test
      }
  };

  //print info
  TEST_F(BoyOrGirlTest, InfoTest) {
    //print info
    cout << "Start to test horse shoe question with code = " << m_info.code() 
      << ", url = " << m_info.url() << endl;
  }

  //code force test cases
  TEST_F(BoyOrGirlTest, CodeForceTest) {
    //test cases
    EXPECT_EQ(m_info.solve("wjmzbmr"), CHAT);
    EXPECT_EQ(m_info.solve("xiaodao"), IGNORE);
    EXPECT_EQ(m_info.solve("sevenkplus"), CHAT);
  }
}