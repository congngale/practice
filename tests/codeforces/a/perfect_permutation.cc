#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/a/perfect-permutation";

  // assert test
  System::assert(execute_file, "1", "-1");
  System::assert(execute_file, "2", "2 1");
  System::assert(execute_file, "4", "2 1 4 3");
}