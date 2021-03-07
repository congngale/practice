#include <vector>
#include <iostream>

using namespace std;

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