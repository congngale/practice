#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1492/1492-b";

  // assert test
  System::assert(execute_file,
                 R"(4
                    4
                    1 2 3 4
                    5
                    1 5 2 4 3
                    6
                    4 2 5 3 6 1
                    1
                    1)",
                 R"(4 3 2 1
                    5 2 4 3 1
                    6 1 5 3 4 2
                    1)");
}
