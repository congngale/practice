#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <vector>

void sort(std::vector<int> &input) {
  // perform insertion sort
  for (int i = 1; i < input.size(); i++) {
    // sub index
    int j = i - 1;

    // get current value
    int value = input[i];

    // check index & value
    while ((j >= 0) && (input[j] > value)) {
      // swap value
      input[j + 1] = input[j];

      // update index
      j = j - 1;
    }

    // set value
    input[j + 1] = value;
  }
}

void insertion_sort(std::vector<int> input) {
  // get start time
  const auto start = std::chrono::steady_clock::now();

  // sort input
  sort(input);

  // get duration
  const auto duration = std::chrono::duration_cast<std::chrono::microseconds>(
      std::chrono::steady_clock::now() - start);

  std::cout << "insertion sort execute time: " << duration.count() << "mcs \n";
}

void std_sort(std::vector<int> input) {
  // get start time
  const auto start = std::chrono::steady_clock::now();

  // sort input
  std::sort(input.begin(), input.end());

  // get duration
  const auto duration = std::chrono::duration_cast<std::chrono::microseconds>(
      std::chrono::steady_clock::now() - start);

  std::cout << "std::sort execute time: " << duration.count() << "mcs \n";
}

int main() {
  // init input
  std::vector<int> input;

  // fill input
  for (auto i = 0; i < 1000; i++) {
    input.push_back(1000 - i);
  }

  // std sort
  std_sort(input);

  // insertion sort
  insertion_sort(input);

  if (input.size() < 100) {
    std::cout << "sort output: ";
    for (const auto &i : input) {
      std::cout << i << ", ";
    }
    std::cout << "\n";
  }

  return 0;
}