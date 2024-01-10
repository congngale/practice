#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
/*
 * code: 1419B
 * name: Stairs
 * tags: brute force, constructive algorithms, greedy, implementation, math, two pointers
 * url: https://codeforces.com/contest/1419/problem/B
*/
int main() {
  //init
  int t;
  int64_t input;
 
  //read
  cin >> t;
 
  for (int i = 0; i < t; i++) {
    int ret = 0;
    cin >> input;
    
    for (int64_t n = 1; (n * (n + 1) / 2) <= input; n = 2 * n + 1) {
      ret++;
      input -= n * (n + 1) / 2;
    }

    cout << ret << endl;
  }

  return 0;
}