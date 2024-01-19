#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/a/satisfying-constraints";

  // assert test
  System::assert(execute_file,
                 R"(6
                  4
                  1 3
                  2 10
                  3 1
                  3 5
                  2
                  1 5
                  2 4
                  10
                  3 6
                  3 7
                  1 2
                  1 7
                  3 100
                  3 44
                  2 100
                  2 98
                  1 3
                  3 99
                  6
                  1 5
                  2 10
                  1 9
                  2 2
                  3 2
                  3 9
                  5
                  1 1
                  2 2
                  3 1
                  3 2
                  3 3
                  6
                  1 10000
                  2 900000000
                  3 500000000
                  1 100000000
                  3 10000
                  3 900000001
                  )",
                 R"(7
                  0
                  90
                  0
                  0
                  800000000
                  )",
                 true);
}