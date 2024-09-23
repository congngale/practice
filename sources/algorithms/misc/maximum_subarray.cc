#include <iostream>

int main() {
  // init
  int test;

  // get test
  std::cin >> test;

  while (test > 0) {
    std::cout << "########################################" << std::endl;

    // next
    test--;
  }

  return 0;
}