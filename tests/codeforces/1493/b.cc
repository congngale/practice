#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1493/1493-b";

  // assert test
  System::assert(execute_file,
                 R"(5
                    24 60
                    12:21
                    24 60
                    23:59
                    90 80
                    52:26
                    1 100
                    00:01
                    10 10
                    04:04)",
                 R"(12:21
                    00:00
                    52:28
                    00:00
                    00:00)");
}