#include <bitset>
#include <iostream>
#include <string>

int main() {
  // init
  unsigned long number;

  // read number
  std::cin >> number;

  std::string binary = bitset<32>(number).to_string(); // to binary

  int i;
  std::string reverse;

  for (i = binary.size() - 1; i >= 0; i--) {
    reverse.push_back(binary[i]);
  }

  unsigned long ret = bitset<32>(reverse).to_ulong();
  std::cout << ret << std::endl;

  return 0;
}