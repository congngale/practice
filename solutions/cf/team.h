#ifndef TEAM_H
#define TEAM_H

#include <vector>

#include "base.h"

class Team : public Base {
  public:
    Team() {
      //init info
      m_problem = "A";
      m_contest = "231";
    };

    ~Team(){};

    int solve(std::vector<std::vector<int>> input) {
      //init result
      int ret = 0;

      //loop all input
      for (auto &i : input) {
        //check sum
        if ((i[0] + i[1] + i[2]) >= 2) ret++;
      }

      return ret;
    };
};

#endif //TEAM_H