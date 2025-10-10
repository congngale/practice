#include <algorithm>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
  uint64_t distance{0};
  uint64_t first, second;
  std::vector<uint64_t> left, right;

  for (size_t i = 0; i < 1000; i++) {
    std::cin >> first >> second;
    left.push_back(first);
    right.push_back(second);
  }

  // sort left & right
  std::sort(left.begin(), left.end());
  std::sort(right.begin(), right.end());

  for (size_t i = 0; i < 1000; i++) {
    distance += abs(left[i] - right[i]);
  }

  std::cout << "distance = " << distance << "\n";

  return 0;
}