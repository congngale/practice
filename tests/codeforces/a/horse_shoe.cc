#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/a/horse-shoe";

  // assert test
  System::assert(execute_file, "1 7 3 3", "1");
  System::assert(execute_file, "7 7 7 7", "3");
}