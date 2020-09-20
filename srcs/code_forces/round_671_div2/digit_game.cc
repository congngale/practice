#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
 
#define RAZE 1
#define BREACH 2
 
using namespace std;
 
/*
 * code: 1419A
 * name: Digit Game
 * tags: games, implementation
 * url: https://codeforces.com/contest/1419/problem/A
*/
int main() {
  //init
  int t, n;
  string input;
 
  //read
  cin >> t;
 
  for (int i = 0; i < t; i++) {
    cin >> n;  
    cin >> input;
    int index = 0;
    bool raze_odd = false;
    bool breach_even = false;

    while (index < input.size()) {
      raze_odd |= (input[index] - '0') % 2 > 0;
      index++;

      if (index < input.size()) {
        breach_even |= (input[index] - '0') % 2 == 0;
        index++;
      }
    }

    if (n % 2 > 0) {
      if (raze_odd) {
        cout << RAZE << endl;
      } else {
        cout << BREACH << endl;
      }
    } else {
      if (breach_even) {
        cout << BREACH << endl;
      } else {
        cout << RAZE << endl;
      }
    }
  }
 
  return 0;
}