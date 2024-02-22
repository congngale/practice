#include <iostream>
#include <set>

using namespace std;

/*
 * code: 228A
 * name: Is your horseshoe on the other hoof?
 * tags: implementation
 * url: https://codeforces.com/contest/228/problem/A
 */
int main() {
  // init
  set<int> pool;
  int a, b, c, d;

  // read input
  cin >> a >> b >> c >> d;

  // insert to set
  pool.insert(a);
  pool.insert(b);
  pool.insert(c);
  pool.insert(d);

  // print output
  cout << 4 - pool.size() << endl;

  return 0;
}