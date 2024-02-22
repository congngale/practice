#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

/*
 * code: 1419D2
 * name: Sage's Birthday (hard version)
 * tags: binary search, greedy, implementation, sortings, brute force, two pointers
 * url: https://codeforces.com/contest/1419/problem/D2
 */
int main() {
  // init
  int n;
  int ret = 0;
  string output;
  vector<int> input;
  bool found = false;

  // read
  cin >> n;

  for (int i = 0; i < n; i++) {
    int data;
    cin >> data;
    input.push_back(data);
    output += to_string(data) + " ";
  }

  // sort
  sort(input.begin(), input.end());

  // check size
  if (n > 2) {
    // check size
    if (n % 2 == 0) n--;

    // pick middle
    int pick = n / 2;

    // until find
    while (!found && pick > 0) {
      // check value
      if (input[pick - 1] <= input[pick]) {
        // found
        found = true;
        int index = 0;
        output.clear();

        // loop all input
        for (size_t i = 0; i < input.size() - pick; i++) {
          output += to_string(input[i + pick]) + " ";
          if (index < pick && i + pick + 1 < input.size()) {
            if (input[i + pick] > input[index] &&
                input[i + pick + 1] > input[index]) {
              output += to_string(input[index]) + " ";
              ret++;
              index++;
            }
          }
        }

        // append to end
        while (index < pick) {
          output += to_string(input[index]) + " ";
          index++;
        }
      }

      pick--;
    }
  }

  cout << ret << endl;
  cout << output << endl;

  return 0;
}