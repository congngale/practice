#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/a/horse-shoe"};

  // assert test
  System::assert(execute_file, "1 7 3 3", "1");
  System::assert(execute_file, "7 7 7 7", "3");
}