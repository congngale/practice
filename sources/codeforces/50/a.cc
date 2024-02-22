#include <iostream>
#include <vector>

using namespace std;

/*
 * code: 50A
 * name: Domino piling
 * tags: greedy, math
 * url: https://codeforces.com/contest/50/problem/A
 */
int main() {
  // init
  int n, m;

  // read n & m
  cin >> n >> m;

  // print output
  cout << m * n / 2 << endl;

  return 0;
}