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

void bubble_sort(vector<int> &input) {
	//init
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

		//bubble sort
		bubble_sort(input);

		//print ouput
		cout << "Sorted input: ";
		print_vector(input);

		cout << "########################################" << endl;

		//next
		test--;
	}

	return 0;
}