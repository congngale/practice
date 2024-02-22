#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

/*
 * code: 1492A
 * name: Three swimmers
 * tags: math
 * url: https://codeforces.com/contest/1492/problem/A
 */

int main() {
  // init
  long long t, p, a, b, c;

  // read number of test case
  cin >> t;

  while (t > 0) {
    long long ret = LLONG_MAX;

    // read value
    cin >> p >> a >> b >> c;

    // check diff time
    ret = min(ret, (a - p % a) % a);
    ret = min(ret, (b - p % b) % b);
    ret = min(ret, (c - p % c) % c);

    // result
    cout << ret << endl;

    // next
    t--;
  }

  return 0;
}