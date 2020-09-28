#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
/*
 * code: 1419D1
 * name: Sage's Birthday (easy version)
 * tags: binary search, greedy, implementation, sortings
 * url: https://codeforces.com/contest/1419/problem/D1
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
  
  if (n % 2 == 0) n -= 1;

  cout << n / 2 << endl;

  vector<int> pick;
  vector<int> remain;

  for (size_t i = 0; i < input.size(); i++) {
    if (pick.size() < n /2) {
      pick.push_back(input[i]);
    } else {
      remain.push_back(input[i]);
    }
  }

  for (size_t i = 0; i < remain.size(); i++) {
    cout << remain[i] << " ";

    if (i < pick.size()) {
      cout << pick[i] << " ";
    }
  }

  cout << endl;

  return 0;
}