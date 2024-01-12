#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/b/new-theatre-square";

  // assert test
  System::assert(execute_file,
                 "4\n1 1 10 1\n.\n1 2 10 1\n..\n2 1 10 1\n.\n.\n3 3 3 7\n"
                 "..*\n*..\n.*.",
                 "10\n1\n20\n18");
}