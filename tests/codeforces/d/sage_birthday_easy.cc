#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/d/sage-birthday-easy";
  // assert test
  System::assert(execute_file, "5\n1 2 3 4 5", "2\n3 1 4 2 5");
}