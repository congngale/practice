#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1493/1493-a";

  // assert test
  System::assert(execute_file,
                 R"(3
                    3 2
                    5 3
                    1 1)",
                 R"(2
                    3 1 
                    3
                    4 5 2 
                    0)");
}