#include <climits>
#include <iostream>
#include <algorithm>

#define NO "NO"
#define YES "YES"

using namespace std;

/*
 * code: 1494A
 * name: ABC String
 * tags: bitmasks brute force implementation
 * url: http://codeforces.com/contest/1494/problem/A
*/

int main() {
  //init
  long long t;

  //read number of test case
  cin >> t;

  while (t > 0) {
    int i;
    string input;
    int move = -1;

    cin >> input;

    //check open and close
    if (input.front() != input.back()) {
      int board[3] = {0, 0, 0};
      char open = input.front();
      char close = input.back();

      //init board
      for (i = 0; i < input.size(); i++) {
        if (input[i] == open) {
          input[i] = '(';
          board[0] = board[0] + 1;
        } else if (input[i] == close) {
          input[i] = ')';
          board[1] = board[1] + 1;
        } else {
          board[2] = board[2] + 1;
        }
      }

      //check bound
      if (board[0] == board[1] + board[2]) {
        //reset
        move = 0;

        for (i = 0; i < input.size() && move >= 0; i++) {
          switch (input[i]) {
            case '(':
              move++;
              break;

            case ')':
              move--;
              break;

            default:
              move--;
              break;
          }
        }
      } else if (board[0] + board[2] == board[1]) {
        //reset
        move = 0;

        for (i = 0; i < input.size() && move >= 0; i++) {
          switch (input[i]) {
            case '(':
              move++;
              break;

            case ')':
              move--;
              break;

            default:
              move++;
              break;
          }
        }
      }
    }

    if (move == 0) {
      cout << YES << endl;
    } else {
      cout << NO << endl;
    }

    //next
    t--;
  }

  return 0;
}