#include <string>
#include <iostream>

using namespace std;

int main() {
  //init
  int number;
  string ret;

  //read number
  cin >> number;

  //store sign
  bool negative = number < 0;

  //check zero
  if (number == 0) ret = "0";

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

  //output
  cout << ret << endl;

  return 0;
}