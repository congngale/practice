#include "system.h"

int main() {
  // init execute
  const std::string execute_file{
      "sources/codeforces/b/sifid-and-strange-subsequences"};

  // assert test
  System::assert(execute_file,
                 R"(6
                    4
                    -1 -2 0 0
                    7
                    -3 4 -2 0 -4 6 1
                    5
                    0 5 -3 2 -5
                    3
                    2 3 1
                    4
                    -3 0 2 0
                    6
                    -3 -2 -1 1 1 1
                    )",
                 R"(4
                    5
                    4
                    1
                    3
                    4)");
}