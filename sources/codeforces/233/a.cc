#include <iostream>
#include <vector>

using namespace std;

/*
 * code: 233A
 * name: Perfect Permutation
 * tags: implementation, math
 * url: https://codeforces.com/contest/233/problem/A
 */
int main() {
  // init
  size_t input;
  vector<int> ret;

  // read input
  cin >> input;

  // build permutation
  for (size_t i = 1; i < input; i += 2) {
    // append 1
    ret.push_back(i + 1);
    ret.push_back(i);
  }

  // check empty && size
  if (ret.empty() || ret.size() < input) ret = {-1};

  // prin output
  for (size_t i = 0; i < ret.size(); i++) {
    cout << ret[i];

    if (i < ret.size() - 1) {
      cout << " ";
    } else {
      cout << endl;
    }
  }

  return 0;
}