#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/a/cubes-sortings"};

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