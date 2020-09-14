#ifndef WAY_TOO_LONG_WORD
#define WAY_TOO_LONG_WORD

#include <vector>
#include <string>

#include "base.h"

class WayTooLongWord : public Base {
  public:
    WayTooLongWord() {
      //init info
      m_problem = "A";
      m_contest = "71";
    };
    ~WayTooLongWord(){};
  
    std::vector<std::string> solve(std::vector<std::string> input) {
      //init result
      std::vector<std::string> ret;

      //loop all input
      for (auto &s : input) {
        //check length
        if (s.size() <= 10) {
          //append to result
          ret.push_back(s);
        } else { //calculate result
          //build result
          ret.push_back(s.replace(1, s.size() - 2, std::to_string(s.size() - 2)));
        }
      }

      return ret;
    };
};

#endif //WAY_TOO_LONG_WORD