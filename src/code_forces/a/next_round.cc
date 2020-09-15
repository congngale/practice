#include <vector>
#include <iostream>

using namespace std;

/*
 * code: 158A
 * name: Next Round
 * tags: special problem, implementation
 * url: https://codeforces.com/contest/158/problem/A
*/
int main() {
  //init
  int n, k;
  int ret = 0;
  vector<int> input;

  //read n & k
  cin >> n >> k;

  //read input
  for (int i = 0; i < n; i++) {
    int data;
    cin >> data;
    input.push_back(data);
  }

  //get min
  int min = input[k - 1];

  //check every body
  for (auto &i : input) {
    //check valid
    if (i > 0 && i >= min) ret++;
  }

  //output
  cout << ret << endl;

  return 0;
}