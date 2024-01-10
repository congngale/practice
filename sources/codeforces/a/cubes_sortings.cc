#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
 
#define NO "NO"
#define YES "YES"
 
using namespace std;
 
/*
 * code: 1420A
 * name: Cubes Sorting
 * tags: math, sortings
 * url: https://codeforces.com/contest/1420/problem/A
*/
int main() {
  //init
  int t;
 
  //read
  cin >> t;
 
  while (t > 0) {
    int n;
    string ret = NO;
    int64_t last = 0;
    bool sort = false;

    cin >> n;

    for (int i = 0; i < n; i++) {
      int64_t data;
      cin >> data;
      if (i > 0) sort |= last <= data;
      last = data;
    }

    //check sort
    if (sort) ret = YES;

    cout << ret << endl;

    t--;
  }
 
  return 0;
}