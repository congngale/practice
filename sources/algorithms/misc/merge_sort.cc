#include <climits>
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

void merge(std::vector<int> &input, int p, int q, int r) {
  // init
  int i, j, k;
  std::vector<int> left;
  std::vector<int> right;

  for (i = p; i <= q; i++) {
    left.push_back(input[i]);
  }

  for (j = q + 1; j <= r; j++) {
    right.push_back(input[j]);
  }

  // use for comparing odd
  left.push_back(INT_MAX);
  right.push_back(INT_MAX);

  // reset
  i = 0;
  j = 0;

  for (k = p; k <= r; k++) {
    if (left[i] <= right[j]) {
      input[k] = left[i];
      i = i + 1;
    } else {
      input[k] = right[j];
      j = j + 1;
    }
  }
}

void merge_sort(std::vector<int> &input, int p, int r) {
  if (p < r) {
    int q = (p + r) / 2;

    merge_sort(input, p, q);

    merge_sort(input, q + 1, r);

    merge(input, p, q, r);
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

    // merge sort
    merge_sort(input, 0, input.size() - 1);

    // print ouput
    std::cout << "Sorted input: ";
    print_vector(input);

    std::cout << "########################################" << std::endl;

    // next
    test--;
  }

  return 0;
}