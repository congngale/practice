#include <string>
#include <iostream>

using namespace std;

/*
 * code: 112A
 * name: Petya and Strings
 * tags: implementation, strings  
 * url: https://codeforces.com/contest/112/problem/A
*/
int main() {
  //init
  int i = 0;
  int ret = 0;
  std::string a,b;

  //read a
  cin >> a;

  //read b
  cin >> b;

  //check every char
  while (ret == 0 && i < a.size()) {
    //get value
    char value_a = tolower(a[i]);
    char value_b = tolower(b[i]);

    //check value
    if (value_a > value_b) {
      ret = 1;
    } else if (value_b > value_a) {
      ret = -1;
    }

    //next
    i++;
  }

  //print output
  cout << ret << endl;

  return 0;
}