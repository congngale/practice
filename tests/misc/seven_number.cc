#include <limits.h>
#include "gtest/gtest.h"

#include "misc/seven_number.h"

using namespace std;

namespace {
  class SevenNumberTest : public testing::Test {
    protected:
      SevenNumber m_seven_number;

      void setUp() {
        //do nothing for this test
      }
  };

  //print info
  TEST_F(SevenNumberTest, InfoTest) {
    //print info
    cout << "Start to test seven number problem!" << endl;
  }

  //custom test
  TEST_F(SevenNumberTest, CustomTest) {
    //testcases
    EXPECT_EQ(m_seven_number.solve(0), 0);
    EXPECT_EQ(m_seven_number.solve(20), 26);
    EXPECT_EQ(m_seven_number.solve(-100), -202);
    EXPECT_EQ(m_seven_number.solve(1007), 2636);
  }
}