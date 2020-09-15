#include <string>
#include <iostream>

using namespace std;

/*
 * code: 266B
 * name: Queue at the School
 * tags: constructive algorithm, graph matchings, implementation, shortest paths
 * url: https://codeforces.com/contest/266/problem/B
*/
int main() {
  //init
  int n, t;
  string queue;

  //read
  cin >> n >> t;

  //read queue
  cin >> queue;

  //loop t time
  for (int i = 0; i < t; i++) {
    //swap b to g
    for (int j = 0; j < n - 1; j++) {
      if (queue[j] == 'B' && queue[j + 1] == 'G') {
        //swap
        queue[j] = 'G';
        queue[j + 1] = 'B';

        //next
        j++;
      }
    }
  }

  cout << queue << endl;

  return 0;
}