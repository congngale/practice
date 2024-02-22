#include <iostream>
#include <vector>

using namespace std;

/*
 * code: 1406A
 * name: Subset Mex
 * tags: greedy, implementation, math
 * url: https://codeforces.com/contest/1406/problem/A
 */
int main() {
  // init
  int t, n;

  // read
  cin >> t;

  for (int i = 0; i < t; i++) {
    int ansa = 0;
    int ansb = 0;
    vector<vector<int>> input(2, vector<int>(101, 0));
    // read number
    cin >> n;
    for (int j = 0; j < n; j++) {
      int d;
      cin >> d;

      // handle here
      if (input[0][d] == 0) {
        input[0][d] = 1;
      } else {
        input[1][d] = 1;
      }
    }

    while (input[0][ansa] == 1) ++ansa;
    while (input[1][ansb] == 1) ++ansb;

    cout << ansa + ansb << endl;
  }

  return 0;
}