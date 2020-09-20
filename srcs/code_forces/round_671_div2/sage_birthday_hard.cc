#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
/*
 * code: 1419D
 * name: Sage's Birthday (hard version)
 * tags: binary search, greedy, implementation, sortings, brute force, two pointers
 * url: https://codeforces.com/contest/1419/problem/D
*/
int main() {
  //init
  int n;
  vector<int> input;
 
  //read
  cin >> n;
 
  for (int i = 0; i < n; i++) {
    int data;
    cin >> data;
    input.push_back(data);
  }
  
  //sort
  sort(input.begin(), input.end());

  return 0;
}