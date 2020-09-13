#include <iostream>

#include "cf/water_melon.h"

using namespace std;

int main() {
  //init data
  int weight;
  WaterMelon water_melon;

  //print code
  cout << "Problem code = " << water_melon.code() << endl;

  //print url
  cout << "Problem url = " << water_melon.url() << endl;

  //get input
  cin >> weight;

  //get result
  cout << "Result = " << water_melon.solve(weight) << endl;

  return 0;
}
