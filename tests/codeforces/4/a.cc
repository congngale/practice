#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/4/4-a";

  // assert test
  System::assert(execute_file, "0", "NO");
  System::assert(execute_file, "1", "NO");
  System::assert(execute_file, "2", "NO");
  System::assert(execute_file, "3", "NO");
  System::assert(execute_file, "4", "YES");
}
