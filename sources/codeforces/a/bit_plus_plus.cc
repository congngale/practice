#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
 * code: 282A
 * name: Bit++
 * tags: mplementation
 * url: https://codeforces.com/contest/282/problem/A
*/
int main() {
  //init
  int n;
  int ret = 0;
  vector<string> input;

  //read n
  cin >> n;

  //read input
  for (int i = 0; i < n; i++) {
    string data;
    cin >> data;
    input.push_back(data);
  }

  //loop all input
  for (auto &i : input) {
    //check up
    if (i.find("++") != std::string::npos) {
      //up
      ret++;
    } else if (i.find("--") != std::string::npos ) {
      //down
      ret--;
    }
  }

  //output
  cout << ret << endl;

  return 0;
}