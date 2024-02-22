#include <algorithm>
#include <climits>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

/*
 * code: 1493B
 * name: Planet Lapiteletti
 * tags: brute force
 * url: http://codeforces.com/contest/1493/problem/B
 */

int board[10] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};

bool valid_reverse(string time, int h, int m) {
  bool ret = false;
  int h1 = board[time[4] - '0'];
  int h2 = board[time[3] - '0'];
  int m1 = board[time[1] - '0'];
  int m2 = board[time[0] - '0'];

  if (h1 != -1 && h2 != -1 && m1 != -1 && m2 != -1) {
    int hour = h1 * 10 + h2;
    int minute = m1 * 10 + m2;

    ret = hour < h && minute < m;
  }

  return ret;
}

string get_time(int hour, int minute) {
  string ret;

  if (hour < 10) {
    ret += "0";
  }

  ret += to_string(hour) + ":";

  if (minute < 10) {
    ret += "0";
  }

  ret += to_string(minute);

  return ret;
}

int main() {
  // init
  long long t;

  // read number of test case
  cin >> t;

  while (t > 0) {
    int h, m;
    string time;

    cin >> h >> m;
    cin >> time;

    int hour = (time[0] - '0') * 10 + (time[1] - '0');
    int minute = (time[3] - '0') * 10 + (time[4] - '0');

    while (!valid_reverse(time, h, m)) {
      // next
      minute++;

      if (minute == m) {
        hour++;
        minute = 0;
      }

      if (hour == h) {
        hour = 0;
      }

      // update time
      time = get_time(hour, minute);
    }

    cout << time << endl;

    // next
    t--;
  }

  return 0;
}