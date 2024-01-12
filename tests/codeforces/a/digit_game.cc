#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/a/digit-game";

  // assert test
  System::assert(execute_file,
                 "5\n"
                 "1\n"
                 "2\n"
                 "1\n"
                 "3\n"
                 "3\n"
                 "102\n"
                 "4\n"
                 "2069\n"
                 "7\n"
                 "0278965",
                 "2\n1\n1\n2\n1");
}