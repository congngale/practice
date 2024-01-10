#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/a/next-round"};

  // assert test
  System::assert(execute_file, "8 5\n10 9 8 7 7 7 5 5", "6");
  System::assert(execute_file, "8 5\n10 9 8 7 7 7 5 5", "6");
}