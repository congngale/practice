#include <algorithm>
#include <climits>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

/*
 * code: 1493A
 * name: Anti Knapsack
 * tags:
 * url: http://codeforces.com/contest/1493/problem/A
 */

int main() {
  // init
  long long t;

  // read number of test case
  cin >> t;

  while (t > 0) {
    int n, k;
    set<int> ret;

    cin >> n >> k;

    while (n > 0) {
      if (k < n || (k > n && ret.find(k - n) == ret.end())) {
        ret.insert(n);
      }

      // next
      n--;
    }

    cout << ret.size() << endl;

    if (ret.size() > 0) {
      for (auto &d : ret) {
        if (d != 0) {
          cout << d << " ";
        }
      }
      cout << endl;
    }

    // next
    t--;
  }

  return 0;
}