#include <iostream>
#include <string>
#include <vector>

int brute_force_search(std::string a, std::string p) {
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

int knuth_morris_pratt_search(std::string a, std::string p) {
  int i = 0;
  int j = -1;
  int ret = 0;
  int m = p.size();
  int n = a.size();
  std::vector<int> next;

  // init next

  return ret;
}

int main() {
  // init
  int test;

  // get test
  std::cin >> test;

  while (test > 0) {
    // init
    int ret;
    std::string p, a;

    // get input
    std::cin >> p;
    std::cin >> a;

    // print ouput
    std::cout << "Input a: " << a << std::endl;
    std::cout << "Input p: " << p << std::endl;

    // brute force search
    ret = brute_force_search(a, p);

    std::cout << "Brute force search: " << ret << std::endl;

    // next
    test--;
  }

  return 0;
}