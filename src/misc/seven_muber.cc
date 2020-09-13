#include "misc/seven_number.h"

#include <string>

using namespace std;

SevenNumber::SevenNumber() {
  //empty constructor
}

SevenNumber::~SevenNumber() {
  //empty destructor
}

int SevenNumber::solve(int number) {
  //init negative
  string ret;
  bool negative = number < 0;

  //check negative
  if (negative) number *= -1;

  //loop until end
  while (number > 0) {
    //append number
    ret = to_string(number % 7) + ret;

    //reduce number
    number -= number % 7;

    //check n
    if (number >= 7) number /= 7;
  }

  //check negative
  if (negative) ret = "-" + ret;

  return stoi(ret);
}