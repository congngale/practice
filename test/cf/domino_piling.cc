#include <limits.h>
#include "gtest/gtest.h"

#include "cf/domino_piling.h"

using namespace std;

namespace {
  class DoninoPilingTest : public testing::Test {
    protected:
      DoninoPiling m_info;

      void setUp() {
        //do nothing for this test
      }
  };

  //print info
  TEST_F(DoninoPilingTest, InfoTest) {
    //print info
    cout << "Start to test domino piling question with code = " << m_info.code()
      << ", url = " << m_info.url() << endl;
  }

  //code force test cases
  TEST_F(DoninoPilingTest, CodeForceTest) {
    //test cases
    EXPECT_EQ(m_info.solve(2, 4), 4);
    EXPECT_EQ(m_info.solve(3, 3), 4);
  }
}