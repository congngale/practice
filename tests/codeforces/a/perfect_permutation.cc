#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/a/perfect-permutation"};

  // assert test
  System::assert(execute_file, "1", "1");
  System::assert(execute_file, "2", "2 1");
  System::assert(execute_file, "4", "2 1 4 3");
}