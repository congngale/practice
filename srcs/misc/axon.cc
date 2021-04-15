#include <bitset>
#include <string>
#include <iostream>

using namespace std;

int main() {
  //init
  unsigned long number;

  //read number
  cin >> number;

  string binary = bitset<32>(number).to_string(); //to binary

  int i;
  string reverse;

  for (i = binary.size() - 1; i >= 0; i--) {
  	reverse.push_back(binary[i]);
  }

  unsigned long ret = bitset<32>(reverse).to_ulong();
  cout<< ret << endl;

  return 0;
}