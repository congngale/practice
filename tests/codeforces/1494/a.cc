#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1494/1494-a";

  // assert test
  System::assert(execute_file,
                 R"(4
                    AABBAC
                    CACA
                    BBBBAC
                    ABCA)",
                 R"(YES
                    YES
                    NO
                    NO)");
}