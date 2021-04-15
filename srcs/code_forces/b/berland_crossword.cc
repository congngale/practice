#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>

#define NO "NO"
#define YES "YES"

using namespace std;

/*
 * code: 1494B
 * name: Berland Crossword
 * tags:
 * url: http://codeforces.com/contest/1494/problem/B
*/

bool check(int n, int U, int R, int D, int L, int mask) {
  if (mask & 1) {
    U--;
    R--;
  }
  if (mask & 2) {
    U--;
    L--;
  }
  if (mask & 4) {
    D--;
    R--;
  }
  if (mask & 8) {
    D--;
    L--;
  }

  return 0 <= min(min(U, R), min(D, L)) && max(max(U, R), max(D, L)) <= n - 2;
}

int main() {
  //init
  long long t;

  //read number of test case
  cin >> t;

  while (t > 0) {
    int i;
    bool ret = false;
    int n, u, r, d, l;

    cin >> n >> u >> r >> d >> l;

    for (i = 0; i < 16 && !ret; i++) {
      ret = check(n, u, r, d, l, i);
    }

    if (ret) {
      cout << YES << endl;
    } else {
      cout << NO << endl;
    }

    //next
    t--;
  }

  return 0;
}