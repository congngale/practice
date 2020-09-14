#ifndef HORSE_SHOE_H
#define HORSE_SHOE_H

#include <set>

#include "base.h"

class HorseShoe : public Base {
  public:
    HorseShoe() {
      //init info
      m_problem = "A";
      m_contest = "228";
    };

    ~HorseShoe(){};

    int solve(int a, int b, int c, int d) {
      //init pool
      std::set<int> pool;

      //insert to set
      pool.insert(a);
      pool.insert(b);
      pool.insert(c);
      pool.insert(d);

      //return result
      return 4 - pool.size();
    };
    
};
#endif //HORSE_SHOE_H