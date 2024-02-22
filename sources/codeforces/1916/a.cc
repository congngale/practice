#include <iostream>
#include <string>
#include <vector>

/*
 * code: 1916A
 * name: 2023
 * tags: constructive algorithm, implementation, math, number theory
 * url: https://codeforces.com/problemset/problem/1916/A
 */

int main() {
  // init
  int n;

  // read n
  std::cin >> n;

  while (n > 0) {
    // init data
    int size, remove;
    std::cin >> size >> remove;

    int data;
    std::int64_t total = 1;
    for (int index = 0; index < size; index++) {
      std::cin >> data;
      total *= data;
    }

    if (2023 % total == 0) {
      total = (2023 / total);
      std::cout << "YES" << std::endl;
      std::cout << total << " ";
      for (int i = 1; i < remove; i++) {
        total = (total / total);
        std::cout << total << " ";
      }
      std::cout << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }

    n--;
  }

  return 0;
}