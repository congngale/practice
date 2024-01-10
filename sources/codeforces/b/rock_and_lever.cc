#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
/*
 * code: 1420B
 * name: Rock and Lever
 * tags: math, bitmasks
 * url: https://codeforces.com/contest/1420/problem/B
*/
int main() {
  //init
  int t;
 
  //read
  cin >> t;
 
  while (t > 0) {
    int n;
    int ret = 0;
    vector<int> input;

    cin >> n;

    for (int i = 0; i < n; i++) {
      int data;
      cin >> data;
      for (auto &d: input) {
        if ((d & data) > (d ^ data)) ret++;
      }
      input.push_back(data);
    }

    cout << ret << endl;

    t--;
  }
 
  return 0;
}