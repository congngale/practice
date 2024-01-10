#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/b/maximum-product"};

  // assert test
  System::assert(execute_file,
                 "4\n"
                 "5\n"
                 "-1 -2 -3 -4 -5\n"
                 "6\n"
                 "-1 -2 -3 1 2 -1\n"
                 "6\n"
                 "-1 0 0 0 -1 -1\n"
                 "6\n"
                 "-9 -7 -5 -3 -2 1",
                 "-120\n12\n0\n945");
}