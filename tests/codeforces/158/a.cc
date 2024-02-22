#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/158/158-a";

  // assert test
  System::assert(execute_file, "8 5\n10 9 8 7 7 7 5 5", "6");
  System::assert(execute_file, "8 5\n10 9 8 7 7 7 5 5", "6");
}