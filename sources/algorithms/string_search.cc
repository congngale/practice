#include <string>
#include <vector>
#include <iostream>

using namespace std;

int brute_force_search(string a, string p) {
	int i = 0;
	int j = 0;
	int ret = 0;
	int m = p.size();
	int n = a.size();

	do {
		if (a[i] == p[j]) {
			i++;
			j++;
		} else {
			i = i - j + 1;
			j = 0;
		}
	} while (j < m && i < n);

	if (j == m) ret = i - m;

	return ret;
}

int knuth_morris_pratt_search(string a, string p) {
	int i = 0;
	int j = -1;
	int ret = 0;
	vetor<int> next;
	int m = p.size();
	int n = a.size();

	//init next



	return ret;
}

int main() {
	//init
	int test;

	//get test
	cin >> test;

	while (test > 0) {
		//init
		int ret;
		string p, a;

		//get input
		cin >> p;
		cin >> a;

		//print ouput
		cout << "Input a: " << a << endl;
		cout << "Input p: " << p << endl;

		//brute force search
		ret = brute_force_search(a, p);

		cout << "Brute force search: " << ret << endl;

		//next
		test--;
	}

	return 0;
}