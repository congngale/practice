#ifndef SEVEN_NUMBER_H
#define SEVEN_NUMBER_H

#include <string>

class SevenNumber {
  public:
    SevenNumber(){};
    ~SevenNumber(){};
  
    int solve(int number){
      //init negative
      std::string ret;
      bool negative = number < 0;

      //check zero
      if (number == 0) ret = "0";

      //check negative
      if (negative) number *= -1;

      //loop until end
      while (number > 0) {
        //append number
        ret = std::to_string(number % 7) + ret;

        //reduce number
        number -= number % 7;

        //check n
        if (number >= 7) number /= 7;
      }

      //check negative
      if (negative) ret = "-" + ret;

      return stoi(ret);
    };  
};
#endif //SEVEN_NUMBER_H