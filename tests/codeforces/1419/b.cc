#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1419/1419-b";

  // assert test
  System::assert(execute_file,
                 R"(4
                    1
                    8
                    6
                    1000000000000000000)",
                 R"(1
                    2
                    1
                    30)");
}