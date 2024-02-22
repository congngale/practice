#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1916/1916-a";

  // assert test
  System::assert(execute_file,
                 R"(7
                    2 2
                    5 2
                    3 1
                    7 17 7
                    4 2
                    1 289 1 1
                    3 1
                    7 17 17
                    1 1
                    289
                    1 1
                    2023
                    1 3
                    1
                    )",
                 R"(NO
                    NO
                    YES
                    7 1
                    YES
                    1
                    YES
                    7
                    YES
                    1
                    YES
                    2023 1 1
                    )");
}