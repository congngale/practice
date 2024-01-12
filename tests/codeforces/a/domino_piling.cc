#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/a/domino-piling";

  // assert test
  System::assert(execute_file, "2 4", "4");
  System::assert(execute_file, "3 3", "4");
}