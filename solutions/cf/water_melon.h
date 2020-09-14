#ifndef WATER_MELON_H
#define WATER_MELON_H

#include "base.h"

class WaterMelon : public Base {
  public:
    WaterMelon() {
      //init info
      m_contest = "4";
      m_problem = "A";
    };

    ~WaterMelon(){};

    std::string solve(int weight){
      //init result
      std::string ret = NO;

      //check condtion
      if (weight > 2 && weight % 2 == 0) ret = YES;

      return ret;
    };
};

#endif //WATER_MELON_H