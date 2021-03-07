#include <vector>
#include <iostream>

/*
Input: A sequence of n numbers {a1,a2,...,an}.
Output: A permutation (reordering) {a1',a2',...,an' i of the input sequence such
	that a1' <= a2' <= ... <= an'.
*/

using namespace std;

void print_vector(vector<int> data) {
	for (auto &d : data) {
		cout << d << " ";
	}
	cout << endl;
}

void merge(vector<int> &input, int p, int q, int r) {
	//init
	int i, j, k;
	vector<int> left;
	vector<int> right;

	for (i = p; i <= q; i++) {
		left.push_back(input[i]);
	}

	for (j = q + 1; j <= r; j++) {
		right.push_back(input[j]);
	}

	//use for comparing odd
	left.push_back(INT_MAX);
	right.push_back(INT_MAX);

	//reset
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

void merge_sort(vector<int> &input, int p , int r) {
	if (p < r) {
		int q = (p + r) / 2;

		merge_sort(input, p, q);

		merge_sort(input, q + 1, r);

		merge(input, p, q, r);
	}
}

int main() {
	//init
	int test;

	//get test
	cin >> test;

	while (test > 0) {
		//init
		int size, number;
		vector<int> input;

		//get size
		cin >> size;

		while (size > 0) {
			//get number
			cin >> number;

			//append number
			input.push_back(number);

			size--;
		}

		//print ouput
		cout << "Input: ";
		print_vector(input);

		//merge sort
		merge_sort(input, 0, input.size() - 1);

		//print ouput
		cout << "Sorted input: ";
		print_vector(input);

		cout << "########################################" << endl;

		//next
		test--;
	}

	return 0;
}