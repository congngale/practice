#include <limits.h>
#include "gtest/gtest.h"

#include "cf/bit_plus_plus.h"

using namespace std;

namespace {
  class BitPlusPlusTest : public testing::Test {
    protected:
      BitPlusPlus m_info;

      void setUp() {
        //do nothing for this test
      }
  };

  //print info
  TEST_F(BitPlusPlusTest, InfoTest) {
    //print info
    cout << "Start to test bit++ question with code = " << m_info.code()
      << ", url = " << m_info.url() << endl;
  }

  //code force test cases
  TEST_F(BitPlusPlusTest, CodeForceTest) {
    //test cases
    EXPECT_EQ(m_info.solve({"++X"}), 1);
    EXPECT_EQ(m_info.solve({"++X", "X--"}), 0);
  }
}