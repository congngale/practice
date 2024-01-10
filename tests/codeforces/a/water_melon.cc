#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/a/water-melon"};

  // assert test
  System::assert(execute_file, "0", "NO");
  System::assert(execute_file, "1", "NO");
  System::assert(execute_file, "2", "NO");
  System::assert(execute_file, "3", "NO");
  System::assert(execute_file, "4", "YES");
}
