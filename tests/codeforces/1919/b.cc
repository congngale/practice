#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1919/1919-b";

  // assert test
  System::assert(execute_file,
                 R"(5
                    1
                    +
                    5
                    -----
                    6
                    +-+-+-
                    10
                    --+++++++-
                    20
                    +---++++-+++++---++-
                    )",
                 R"(1
                    5
                    0
                    4
                    4
                    )");
}