#ifndef NEXT_ROUND_H
#define NEXT_ROUND_H

#include <vector>

#include "base.h"

class NextRound : public Base {
  public:
    NextRound() {
      //init info
      m_problem = "A";
      m_contest = "158";
    };

    ~NextRound(){};

    int solve(std::vector<int> input, int k) {
      //init result
      int ret = 0;
      int min = input[k - 1];

      //check every body
      for (auto &i : input) {
        //check valid
        if (i > 0 && i >= min) ret++;
      }

      return ret;
    }
    
};
#endif //NEXT_ROUND_H