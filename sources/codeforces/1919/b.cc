#include <iostream>
#include <string>
#include <vector>

/*
 * code: 1919B
 * name: Plus-Minus Split
 * tags: greddy
 * url: https://codeforces.com/problemset/problem/1919/B
 */

int main() {
  // init
  int n;

  // read n
  std::cin >> n;

  while (n > 0) {
    // init data
    size_t size;
    std::cin >> size;

    // get data
    int sum = 0;
    for (size_t i = 0; i < size; i++) {
      char d;
      std::cin >> d;
      sum += (d == '+' ? 1 : -1);
    }
    std::cout << abs(sum) << std::endl;

    n--;
  }

  return 0;
}