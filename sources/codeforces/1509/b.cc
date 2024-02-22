#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define NO "NO"
#define YES "YES"
#define TMT "TMT"

using namespace std;

/*
 * code: 1509B
 * name: TMT Document
 * tags:
 * url: https://codeforces.com/contest/1509/problem/B
 */

bool solve(string &tmt, int &n) {
  int i;
  bool ret = true;
  vector<int> m, t;

  for (i = 0; i < n; i++) {
    switch (tmt[i]) {
      case 'T':
        t.push_back(i);
        break;

      case 'M':
        m.push_back(i);
        break;
    }
  }

  if (t.size() != (m.size() * 2)) {
    ret = false;
  }

  // check every t of m
  for (i = 0; i < m.size() && ret; i++) {
    // check boundary of m
    if (m[i] < t[i] || m[i] > t[i + m.size()]) {
      ret = false;
    }
  }

  return ret;
}

int main() {
  // init
  int t;

  // read number of test case
  cin >> t;

  while (t > 0) {
    int n;
    string tmt;

    cin >> n;
    cin >> tmt;

    if (solve(tmt, n)) {
      cout << YES << endl;
    } else {
      cout << NO << endl;
    }

    // next
    t--;
  }

  return 0;
}