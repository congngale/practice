#include <iostream>
#include <string>

int main() {
  // init
  int number;
  std::string ret;

  // read number
  std::cin >> number;

  // store sign
  bool negative = number < 0;

  // check zero
  if (number == 0)
    ret = "0";

  // check negative
  if (negative)
    number *= -1;

  // loop until end
  while (number > 0) {
    // append number
    ret = std::to_string(number % 7) + ret;

    // reduce number
    number -= number % 7;

    // check n
    if (number >= 7)
      number /= 7;
  }

  // check negative
  if (negative)
    ret = "-" + ret;

  // output
  std::cout << ret << std::endl;

  return 0;
}