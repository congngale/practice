#include <iostream>
#include <string>
#include <vector>

/*
 * code: 1920A
 * name: Satisfying Constraints
 * tags: brute force, greedy, math
 * url: https://codeforces.com/problemset/problem/1920/A
 */

int main() {
  // init
  int t;

  // read t
  std::cin >> t;

  while (t > 0) {
    // init data
    int n;
    std::cin >> n;

    std::int64_t min = 0;
    std::int64_t max = 1e9;
    std::vector<int64_t> block_number;
    for (int i = 0; i < n; i++) {
      int a;
      std::int64_t x;
      std::cin >> a >> x;

      switch (a) {
        case 1:  // greater or equal
          min = std::max(min, x);
          break;

        case 2:  // less than or equal
          max = std::min(max, x);
          break;

        case 3:  // not equal
          block_number.push_back(x);
          break;

        default:
          break;
      }
    }

    std::int64_t sum = 0;
    for (const auto &number : block_number) {
      if (number >= min && number <= max) {
        sum++;
      }
    }

    std::cout << std::max(max - min + 1 - sum, std::int64_t(0)) << "\n";

    t--;
  }

  return 0;
}