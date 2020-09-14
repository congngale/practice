#include <limits.h>
#include "gtest/gtest.h"

#include "cf/perfect_permutation.h"

using namespace std;

namespace {
  class PerfectPermutationTest : public testing::Test {
    protected:
      PerfectPermutation m_info;

      void setUp() {
        //do nothing for this test
      }
  };

  //print info
  TEST_F(PerfectPermutationTest, InfoTest) {
    //print info
    cout << "Start to test perfect permutation question with code = " 
      << m_info.code() << ", url = " << m_info.url() << endl;
  }

  //code force test cases
  TEST_F(PerfectPermutationTest, CodeForceTest) {
    //init result
    vector<int> result1 = {-1};
    vector<int> result2 = {2, 1};
    vector<int> result3 = {2, 1, 4, 3};

    //test cases
    EXPECT_EQ(m_info.solve(1), result1);
    EXPECT_EQ(m_info.solve(2), result2);
    EXPECT_EQ(m_info.solve(4), result3);
  }
}