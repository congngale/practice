#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1420/1420-b";

  // assert test
  System::assert(execute_file,
                 R"(5
                    5
                    1 4 3 7 10
                    3
                    1 1 1
                    4
                    6 2 5 3
                    2
                    2 4
                    1
                    1)",
                 R"(1
                    3
                    2
                    0
                    0)");
}