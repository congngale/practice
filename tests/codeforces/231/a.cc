#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/231/231-a";

  // assert test
  System::assert(execute_file, "2\n1 0 0\n0 1 1", "1");
  System::assert(execute_file, "3\n1 1 0\n1 1 1\n1 0 0", "2");
}