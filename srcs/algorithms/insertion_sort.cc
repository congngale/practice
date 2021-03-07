#include <vector>
#include <iostream>

/*
Input: A sequence of n numbers {a1,a2,...,an}.
Output: A permutation (reordering) {a1',a2',...,an' i of the input sequence such
	that a1' <= a2' <= ... <= an'.
*/

using namespace std;

int linear_search(vector<int> &input, int v) {
	//init
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

void insert_sort_non_increase(vector<int> &input) {
	//init
	int j;

	//insert sort
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

void insert_sort_non_decrease(vector<int> &input) {
	//init
	int j;

	//insert sort
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
		for (auto &n : input) {
			cout << n << " ";
		}
		cout << endl;

		//insert sort
		insert_sort_non_increase(input);

		//print ouput
		cout << "Non increase order: ";
		for (auto &n : input) {
			cout << n << " ";
		}
		cout << endl;

		//insert sort
		insert_sort_non_decrease(input);

		//print ouput
		cout << "Non decrease order: ";
		for (auto &n : input) {
			cout << n << " ";
		}
		cout << endl;

		cout << "########################################" << endl;

		//next
		test--;
	}

	return 0;
}