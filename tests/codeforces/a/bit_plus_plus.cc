#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/a/bit-plus-plus";

  // assert test
  System::assert(execute_file, "1\n++X", "1");
  System::assert(execute_file, "2\n++X\nX--", "0");
}