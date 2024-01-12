#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/b/stairs";

  // assert test
  System::assert(execute_file,
                 "4\n"
                 "1\n"
                 "8\n"
                 "6\n"
                 "1000000000000000000",
                 "1\n2\n1\n30");
}