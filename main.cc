#include <iostream>

#include "cf/water_melon.h"
#include "misc/seven_number.h"

using namespace std;

int main() {
  //init data
  int input;
  WaterMelon water_melon;
  SevenNumber seven_number;

  //print code
  cout << "Problem code = " << water_melon.code() << endl;

  //print url
  cout << "Problem url = " << water_melon.url() << endl;

  cout << "Enter the weight of water melon: ";
  
  //get input
  cin >> input;

  //get result
  cout << "Result = " << water_melon.solve(input) << endl;

  cout << "Enter the number to convert to seven number: ";

  //get input
  cin >> input;

  //get result
  cout << "Convert to seven number = " << seven_number.solve(input) << endl;

  return 0;
}
