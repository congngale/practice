#ifndef DOMINO_PILING_H
#define DOMINO_PILING_H

#include <vector>

#include "base.h"

class DoninoPiling : public Base {
  public:
    DoninoPiling() {
      //init info
      m_problem = "A";
      m_contest = "50";
    };

    ~DoninoPiling(){};

    int solve(int m, int n) {
      //return result
      return  m * n / 2;
    };
};

#endif //DOMINO_PILING_H