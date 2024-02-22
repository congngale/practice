#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1494/1494-b";

  // assert test
  System::assert(execute_file,
                 R"(4
                    5 2 5 3 1
                    3 0 0 0 0
                    4 4 1 4 0
                    2 1 1 1 1)",
                 R"(YES
                    YES
                    NO
                    YES)");
}