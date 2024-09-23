#include <iostream>
#include <vector>

/*
Input: A sequence of n numbers {a1,a2,...,an}.
Output: A permutation (reordering) {a1',a2',...,an' i of the input sequence such
        that a1' <= a2' <= ... <= an'.
*/

void print_vector(std::vector<int> data) {
  for (auto &d : data) {
    std::cout << d << " ";
  }
  std::cout << std::endl;
}

void bubble_sort(std::vector<int> &input) {
  // init
  int i, j;

  for (i = 0; i < input.size() - 1; i++) {
    for (j = input.size() - 1; j > i; j--) {
      if (input[i] < input[j - 1]) {
        int temp = input[j];
        input[j] = input[j - 1];
        input[j - 1] = temp;
      }
    }
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
    print_vector(input);

    // bubble sort
    bubble_sort(input);

    // print ouput
    std::cout << "Sorted input: ";
    print_vector(input);

    std::cout << "########################################" << std::endl;

    // next
    test--;
  }

  return 0;
}