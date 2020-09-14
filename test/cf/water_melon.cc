#include <limits.h>
#include "gtest/gtest.h"

#include "cf/water_melon.h"

using namespace std;

namespace {
  class WaterMelonTest : public testing::Test {
    protected:
      WaterMelon m_water_melon;

      void setUp() {
        //do nothing for this test
      }
  };

  //print info
  TEST_F(WaterMelonTest, InfoTest) {
    //print info
    cout << "Start to test problem water melon with code = " <<
      m_water_melon.code() << ", url = " << m_water_melon.url() << endl;
  }

  //custom test
  TEST_F(WaterMelonTest, CustomTest) {
    //test fail
    EXPECT_EQ(m_water_melon.solve(0), NO);
    EXPECT_EQ(m_water_melon.solve(1), NO);
    EXPECT_EQ(m_water_melon.solve(2), NO);
    EXPECT_EQ(m_water_melon.solve(3), NO);

    //test success
    EXPECT_EQ(m_water_melon.solve(4), YES);
    EXPECT_EQ(m_water_melon.solve(6), YES);
    EXPECT_EQ(m_water_melon.solve(50), YES);
    EXPECT_EQ(m_water_melon.solve(60), YES);
  }

  //code force test cases
  TEST_F(WaterMelonTest, CodeForceTest) {
    //test success
    EXPECT_EQ(m_water_melon.solve(8), YES);
    EXPECT_EQ(m_water_melon.solve(5), NO);
    EXPECT_EQ(m_water_melon.solve(4), YES);
    EXPECT_EQ(m_water_melon.solve(3), NO);
    EXPECT_EQ(m_water_melon.solve(2), NO);
    EXPECT_EQ(m_water_melon.solve(1), NO);
    EXPECT_EQ(m_water_melon.solve(7), NO);
    EXPECT_EQ(m_water_melon.solve(6), YES);
    EXPECT_EQ(m_water_melon.solve(10), YES);
    EXPECT_EQ(m_water_melon.solve(9), NO);
    EXPECT_EQ(m_water_melon.solve(53), NO);
    EXPECT_EQ(m_water_melon.solve(77), NO);
    EXPECT_EQ(m_water_melon.solve(32), YES);
    EXPECT_EQ(m_water_melon.solve(44), YES);
    EXPECT_EQ(m_water_melon.solve(98), YES);
    EXPECT_EQ(m_water_melon.solve(99), NO);
    EXPECT_EQ(m_water_melon.solve(90), YES);
    EXPECT_EQ(m_water_melon.solve(67), NO);
    EXPECT_EQ(m_water_melon.solve(100), YES);
    EXPECT_EQ(m_water_melon.solve(88), YES);
  }
}