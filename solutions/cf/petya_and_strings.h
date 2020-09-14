#ifndef PETYA_AND_STRINGS_H
#define PETYA_AND_STRINGS_H

#include <string>

#include "base.h"

class PetyaAndStrings : public Base {
  public:
    PetyaAndStrings(){
      //init info
      m_problem = "A";
      m_contest = "112";
    };

    ~PetyaAndStrings(){};

    int solve(std::string a, std::string b) {
      //init result
      int i = 0;
      int ret = 0;

      //check every char
      while (ret == 0 && i < a.size()) {
        //get value
        char value_a = tolower(a[i]);
        char value_b = tolower(b[i]);

        //check value
        if (value_a > value_b) {
          ret = 1;
        } else if (value_b > value_a) {
          ret = -1;
        }

        //next
        i++;
      }

      return ret;
    }
  
};
#endif //PETYA_AND_STRINGS_H