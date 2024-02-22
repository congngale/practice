#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
 * code: 71A
 * name: Way too Long Word
 * tags: strings
 * url: https://codeforces.com/contest/71/problem/A
 */
int main() {
  // init
  int n;
  vector<string> input;

  // read n
  cin >> n;

  // read all data
  for (int i = 0; i < n; i++) {
    // init data
    string data;

    // read data
    cin >> data;

    // append data
    input.push_back(data);
  }

  // loop all input
  for (auto &s : input) {
    // check length
    if (s.size() <= 10) {
      // print out
      cout << s << endl;
    } else {  // calculate result
      // print out
      cout << s.replace(1, s.size() - 2, std::to_string(s.size() - 2)) << endl;
    }
  }

  return 0;
}