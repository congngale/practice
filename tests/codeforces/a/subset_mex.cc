#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/a/subset-mex";

  // assert test
  System::assert(execute_file,
                 "4\n6\n0 2 1 5 0 1\n3\n0 1 2\n4\n0 2 0 1\n6\n1 2 3 4 5 6",
                 "5\n3\n4\n0");
}