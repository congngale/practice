#ifndef BOY_OR_GIRL_H
#define BOY_OR_GIRL_H

#include <set>

#include "base.h"

#define IGNORE "IGNORE HIM!"
#define CHAT "CHAT WITH HER!"

class BoyOrGirl : public Base {
  public:
    BoyOrGirl() {
      //init info
      m_problem = "A";
      m_contest = "236";
    };

    ~BoyOrGirl(){};

    std::string solve(std::string input) {
      //init pool
      std::set<char> pool;
      std::string ret = IGNORE;

      //insert to set
      for (auto &s : input) {
        //insert data
        pool.insert(s);  
      }

      //check input
      if (pool.size() % 2 == 0) ret = CHAT;

      //return result
      return ret;
    };
    
};
#endif //BOY_OR_GIRL_H