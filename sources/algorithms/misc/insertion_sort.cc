#include <iostream>
#include <vector>

/*
Input: A sequence of n numbers {a1,a2,...,an}.
Output: A permutation (reordering) {a1',a2',...,an' i of the input sequence such
        that a1' <= a2' <= ... <= an'.
*/

int linear_search(std::vector<int> &input, int v) {
  // init
  int i = 0;
  int index = 0;

  while (i < input.size() && index != 0) {
    if (input[i] == v) {
      index = i;
    }

    i = i + 1;
  }

  return index;
}

void insert_sort_non_increase(std::vector<int> &input) {
  // init
  int j;

  // insert sort
  for (j = 1; j < input.size(); j++) {
    int i = j - 1;
    int key = input[j];

    while (i >= 0 && input[i] < key) {
      input[i + 1] = input[i];
      i = i - 1;
    }

    input[i + 1] = key;
  }
}

void insert_sort_non_decrease(std::vector<int> &input) {
  // init
  int j;

  // insert sort
  for (j = 1; j < input.size(); j++) {
    int i = j - 1;
    int key = input[j];

    while (i >= 0 && input[i] > key) {
      input[i + 1] = input[i];
      i = i - 1;
    }

    input[i + 1] = key;
  }
}

int main() {
  // init
  int test;

  // get test
  std::cin >> test;

  while (test > 0) {
    // init
    int size, number;
    std::vector<int> input;

    // get size
    std::cin >> size;

    while (size > 0) {
      // get number
      std::cin >> number;

      // append number
      input.push_back(number);

      size--;
    }
    // print ouput
    std::cout << "Input: ";
    for (auto &n : input) {
      std::cout << n << " ";
    }
    std::cout << std::endl;

    // insert sort
    insert_sort_non_increase(input);

    // print ouput
    std::cout << "Non increase order: ";
    for (auto &n : input) {
      std::cout << n << " ";
    }
    std::cout << std::endl;

    // insert sort
    insert_sort_non_decrease(input);

    // print ouput
    std::cout << "Non decrease order: ";
    for (auto &n : input) {
      std::cout << n << " ";
    }
    std::cout << std::endl;

    std::cout << "########################################" << std::endl;

    // next
    test--;
  }

  return 0;
}