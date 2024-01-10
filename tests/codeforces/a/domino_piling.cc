#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/a/domino-piling"};

  // assert test
  System::assert(execute_file, "2 4", "4");
  System::assert(execute_file, "3 3", "4");
}