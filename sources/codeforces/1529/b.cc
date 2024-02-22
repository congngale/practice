#include <algorithm>
#include <bitset>
#include <iostream>
#include <set>
#include <string>
#include <vector>

/*
 * code: 1529B
 * name: Sifid and Strange Subsequences
 * tags:
 * url: https://codeforces.com/contest/1529/problem/B
 */

int solve(std::vector<int> &input) {
  const int inf = 1e9 + 10;
  int max = inf;
  std::vector<int> negative;

  // build 2 std::vectors
  for (auto &n : input) {
    if (n > 0) {
      max = std::min(max, n);
    } else {
      negative.push_back(n);
    }
  }

  // get count
  int count = negative.size();

  if (max != inf) {
    bool select = true;

    if (!negative.empty()) {
      // sort
      sort(negative.begin(), negative.end());

      for (int i = 1; i < negative.size() && select; i++) {
        select = (abs(negative[i] - negative[i - 1]) >= max);
      }
    }

    if (select) {
      count++;
    }
  }

  return count;
}

int main() {
  // init
  int test;

  // read number of test case
  std::cin >> test;

  while (test--) {
    int a;

    std::cin >> a;

    std::vector<int> input(a);

    for (int i = 0; i < a; i++) {
      std::cin >> input[i];
    }

    std::cout << solve(input) << std::endl;
  }

  return 0;
}