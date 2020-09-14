#ifndef BIT_PLUS_PLUS_H
#define BIT_PLUS_PLUS_H

#include <string>
#include <vector>

#include "base.h"

class BitPlusPlus : public Base {
  public:
    BitPlusPlus() {
      //init info
      m_problem = "A";
      m_contest = "282";
    };

    ~BitPlusPlus(){};

    int solve(std::vector<std::string> input) {
      //init result
      int ret = 0;

      //loop all input
      for (auto &i : input) {
        //check up
        if (i.find("++") != std::string::npos) {
          //up
          ret++;
        } else if (i.find("--") != std::string::npos ) {
          //down
          ret--;
        }
      }

      return ret;
    };
};

#endif //BIT_PLUS_PLUS_H