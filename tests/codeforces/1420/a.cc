#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1420/1420-a";

  // assert test
  System::assert(execute_file,
                 "3\n"
                 "5\n"
                 "5 3 2 1 4\n"
                 "6\n"
                 "2 2 2 2 2 2\n"
                 "2\n"
                 "2 1",
                 "YES\nYES\nNO");
}