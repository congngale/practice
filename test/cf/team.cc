#include <limits.h>
#include "gtest/gtest.h"

#include "cf/team.h"

using namespace std;

namespace {
  class TeamTest : public testing::Test {
    protected:
      Team m_info;

      void setUp() {
        //do nothing for this test
      }
  };

  //print info
  TEST_F(TeamTest, InfoTest) {
    //print info
    cout << "Start to test team question with code = " << m_info.code() 
      << ", url = " << m_info.url() << endl;
  }

  //code force test cases
  TEST_F(TeamTest, CodeForceTest) {
    //init input
    vector<vector<int>> input1 = {{1, 0, 0}, {0, 1, 1}};
    vector<vector<int>> input2 = {{1, 1, 0}, {1, 1, 1}, {1, 0, 0}};

    //test cases
    EXPECT_EQ(m_info.solve(input1), 1);
    EXPECT_EQ(m_info.solve(input2), 2);
  }
}