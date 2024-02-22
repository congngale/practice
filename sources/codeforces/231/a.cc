#include <iostream>

using namespace std;

/*
 * code: 231A
 * name: Team
 * tags: brute force, greedy
 * url: https://codeforces.com/contest/231/problem/A
 */
int main() {
  // init
  int ret = 0;
  int n, a, b, c;

  // read n
  cin >> n;

  // read input
  for (int i = 0; i < n; i++) {
    cin >> a >> b >> c;
    if ((a + b + c) >= 2) ret++;
  }

  // print output
  cout << ret << endl;

  return 0;
}