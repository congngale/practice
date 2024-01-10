#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/a/bit-plus-plus"};

  // assert test
  System::assert(execute_file, "1\n++X", "1");
  System::assert(execute_file, "2\n++X\nX--", "0");
}