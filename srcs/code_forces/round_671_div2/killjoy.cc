#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
/*
 * code: 1419C
 * name: Killjoy
 * tags: greedy, implementation, math
 * url: https://codeforces.com/contest/1419/problem/C
*/
int main() {
  //init
  int t;
 
  //read
  cin >> t;
 
  while (t > 0) {
    int n, x;
    int64_t sum = 0;
    int infected_count = 0;

    cin >> n >> x;

    for (int i = 0; i < n; i++) {
      int data;
      cin >> data;
      sum += x - data;
      if (data == x) infected_count++;
    }

    if (infected_count == n) {
      cout << "0" << endl;
    } else if (infected_count > 0 || sum == 0) {
      cout << "1" << endl;
    } else {
      cout << "2" << endl;
    }

    t--;
  }

  return 0;
}