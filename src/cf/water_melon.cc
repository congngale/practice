#include "cf/water_melon.h"

using namespace std;

WaterMelon::WaterMelon() {
  //init data
  m_contest = WM_CONTEST;
  m_problem = WM_PROBLEM;
}

WaterMelon::~WaterMelon() {
  //empty detructor
}

string WaterMelon::solve(int weight) {
  //init result
  string ret = NO;

  //check condtion
  if (weight > 2 && weight % 2 == 0) ret = YES;

  return ret;
}