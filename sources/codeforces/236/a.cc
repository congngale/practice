#include <iostream>
#include <set>
#include <string>

#define IGNORE "IGNORE HIM!"
#define CHAT "CHAT WITH HER!"

using namespace std;

/*
 * code: 236A
 * name: Boy or Girl
 * tags: brute force, implementation, strings
 * url: https://codeforces.com/contest/236/problem/A
 */
int main() {
  // init input
  string input;
  set<char> pool;
  string ret = IGNORE;

  // read input
  cin >> input;

  // insert to set
  for (auto &s : input) {
    // insert data
    pool.insert(s);
  }

  // check input
  if (pool.size() % 2 == 0) ret = CHAT;

  // print output
  cout << ret << endl;

  return 0;
}