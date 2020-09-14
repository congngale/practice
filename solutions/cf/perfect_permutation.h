#ifndef PERFECT_PERMUTATION_H
#define PERFECT_PERMUTATION_H

#include <vector>

#include "base.h"

class PerfectPermutation : public Base {
  public:
    PerfectPermutation() {
      //init info
      m_problem = "A";
      m_contest = "233";
    };

    ~PerfectPermutation(){};

    std::vector<int> solve(int input) {
      //init result
      std::vector<int> ret;

      //build permutation
      for (int i = 1; i < input; i += 2) {
        //append 1
        ret.push_back(i + 1);
        ret.push_back(i);
      }
      
      //check empty && size
      if (ret.empty() || ret.size() < input) ret = {-1};

      //return result
      return ret;
    };
    
};
#endif //PERFECT_PERMUTATION_H