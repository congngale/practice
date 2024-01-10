#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/a/team"};

  // assert test
  System::assert(execute_file, "2\n1 0 0\n0 1 1", "1");
  System::assert(execute_file, "3\n1 1 0\n1 1 1\n1 0 0", "2");
}