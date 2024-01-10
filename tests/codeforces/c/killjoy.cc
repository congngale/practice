#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/c/killjoy"};

  // assert test
  System::assert(execute_file,
                 "3\n"
                 "2 69\n"
                 "68 70\n"
                 "6 4\n"
                 "4 4 4 4 4 4\n"
                 "9 38\n"
                 "-21 83 50 -59 -77 15 -71 -78 20",
                 "1\n0\n2");
}