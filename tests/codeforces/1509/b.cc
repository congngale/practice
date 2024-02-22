#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1509/1509-b";

  // assert test
  System::assert(execute_file,
                 R"(5
                    3
                    TMT
                    3
                    MTT
                    6
                    TMTMTT
                    6
                    TMTTTT
                    6
                    TTMMTT)",
                 R"(YES
                    NO
                    YES
                    NO
                    YES)");
}