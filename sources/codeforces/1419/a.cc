#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define RAZE 1
#define BREACH 2

using namespace std;

/*
 * code: 1419A
 * name: Digit Game
 * tags: games, implementation
 * url: https://codeforces.com/contest/1419/problem/A
 */
int main() {
  // init
  int t, n;
  string input;

  // read
  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> n;
    cin >> input;
    bool raze_odd = false;
    bool breach_even = false;

    for (int j = 0; j < n; j++) {
      if (j % 2 == 0) {
        raze_odd |= (input[j] - '0') % 2 > 0;
      } else {
        breach_even |= (input[j] - '0') % 2 == 0;
      }
    }

    if (n % 2 > 0) {
      if (raze_odd) {
        cout << RAZE << endl;
      } else {
        cout << BREACH << endl;
      }
    } else {
      if (breach_even) {
        cout << BREACH << endl;
      } else {
        cout << RAZE << endl;
      }
    }
  }

  return 0;
}