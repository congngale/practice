#include <limits.h>
#include "gtest/gtest.h"

#include "cf/horse_shoe.h"

using namespace std;

namespace {
  class HorseShoeTest : public testing::Test {
    protected:
      HorseShoe m_info;

      void setUp() {
        //do nothing for this test
      }
  };

  //print info
  TEST_F(HorseShoeTest, InfoTest) {
    //print info
    cout << "Start to test horse shoe question with code = " << m_info.code() 
      << ", url = " << m_info.url() << endl;
  }

  //code force test cases
  TEST_F(HorseShoeTest, CodeForceTest) {
    //test cases
    EXPECT_EQ(m_info.solve(1, 7, 3, 3), 1);
    EXPECT_EQ(m_info.solve(7, 7, 7, 7), 3);
  }
}