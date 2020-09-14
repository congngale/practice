#include <limits.h>
#include "gtest/gtest.h"

#include "cf/next_round.h"

using namespace std;

namespace {
  class NextRoundTest : public testing::Test {
    protected:
      NextRound m_info;

      void setUp() {
        //do nothing for this test
      }
  };

  //print info
  TEST_F(NextRoundTest, InfoTest) {
    //print info
    cout << "Start to test next round question with code = " << m_info.code() 
      << ", url = " << m_info.url() << endl;
  }

  //code force test cases
  TEST_F(NextRoundTest, CodeForceTest) {
    //init input
    vector<int> input1 = {0, 0, 0, 0};
    vector<int> input2 = {10, 9, 8, 7, 7, 7, 5, 5};

    //test cases
    EXPECT_EQ(m_info.solve(input1, 2), 0);
    EXPECT_EQ(m_info.solve(input2, 5), 6);
  }
}