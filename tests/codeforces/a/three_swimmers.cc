#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/a/three-swimmers"};

  // assert test
  System::assert(execute_file,
                 "4\n"
                 "9 5 4 8\n"
                 "2 6 10 9\n"
                 "10 2 5 10\n"
                 "10 9 9 9",
                 "1\n4\n0\n8");
}
