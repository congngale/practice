#ifndef BASE_H
#define BASE_H

#include <string>

#define NO "NO"
#define YES "YES"

class Base {
  public:
    Base(){};
    ~Base(){};

    std::string url() {
      //build url
      return "https://codeforces.com/contest/" + m_contest + 
        "/problem/" + m_problem;
    };

    std::string code() { 
      //build problem code
      return m_contest + m_problem;
    };
  
  protected:
    std::string m_contest;
    std::string m_problem;
};
#endif //BASE_H