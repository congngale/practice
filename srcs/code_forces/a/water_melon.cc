#include <iostream>

#define NO "NO"
#define YES "YES"

using namespace std;

/*
 * code: 4A
 * name: Water Melon
 * tags: brute force, math
 * url: https://codeforces.com/contest/4/problem/A
*/
int main() {
  //init
  int weight;
  std::string ret = NO;

  //read weight
  cin >> weight;
  
  //check condtion
  if (weight > 2 && weight % 2 == 0) ret = YES;

  //output
  cout << ret << endl;

  return 0;
}