#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
 * code: 1406B
 * name: Maximum Product
 * tags: brute force, dp, greedy, implementation, sortings
 * url: https://codeforces.com/contest/1406/problem/B
*/
int main() {
  //init
  int t, n;

  //read
  cin >> t;

  for (int i = 0; i < t; i++) {
    //read number
    cin >> n;
    vector<long long> data(n);
    long long max_value = INT_MIN;

    for (int j = 0; j < n; j++) {
      long long d;
      cin >> d;
      data[j] = d;
      max_value = max(d, max_value);
    }

    //sort
    sort(data.begin(), data.end(),[](int x, int y) {return (abs(x) > abs(y));});

    if (n == 5) {
      cout << data[0] * data[1] * data[2] * data[3] * data[4] << endl;
    } else if (max_value < 0) {
      cout << data[n - 1] * data[n - 2] * data[n - 3] * data[n - 4] * data[n - 5] << endl;
    } else {
      long long ret = data[0] * data[1] * data[2] * data[3] * data[4];

      for (int k = 5; k < n; k++) {
        for (int g = 0; g < 5; g++) {
          long long temp = data[k];
          for (int h = 0; h < 5; h++) {
            if (h != g) temp *= data[h];
          }
          ret = max(temp, ret);
        }
      }

      cout << ret << endl;
    }
  }

  return 0;
}