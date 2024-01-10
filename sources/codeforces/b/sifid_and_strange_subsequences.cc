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

int solve(std::vector<long long> &input) {
  std::vector<long long> positive;
  std::vector<long long> negative;

  // build 2 std::vectors
  for (auto &n : input) {
    if (n > 0) {
      positive.push_back(n);
    } else {
      negative.push_back(n);
    }
  }

  // sort
  sort(positive.begin(), positive.end());

  // get count
  int count = negative.size();

  if (!positive.empty()) {
    bool select = true;
    auto max = positive.front();

    if (!negative.empty()) {
      for (int i = 0; i < (negative.size() - 1) && select; i++) {
        for (int j = i + 1; j < negative.size() && select; j++) {
          // check select
          select = abs(negative[i] - negative[j]) >= max;
        }
      }
    }

    if (select)
      count++;
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

    std::vector<long long> input(a);

    for (int i = 0; i < a; i++) {
      std::cin >> input[i];
    }

    std::cout << solve(input) << std::endl;
  }

  return 0;
}