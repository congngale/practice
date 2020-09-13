#ifndef WATER_MELON_H
#define WATER_MELON_H

#include "cf/base.h"

#define WM_CONTEST "4"
#define WM_PROBLEM "A"

class WaterMelon : public Base {
  public:
    WaterMelon();
    ~WaterMelon();

    std::string solve(int weight);
};

#endif //WATER_MELON_H