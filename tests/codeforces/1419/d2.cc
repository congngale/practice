#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1419/1419-d2";

  // assert test
  System::assert(execute_file, "10\n1 1 1 1 1 1 1 1 1 9",
                 "0\n1 1 1 1 1 9 1 1 1 1");
  System::assert(execute_file, "4\n1 1 2 4", "1\n1 2 1 4");
  System::assert(execute_file, "5\n1 2 2 4 5", "2\n2 1 4 2 5");
}