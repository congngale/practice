#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/d/sage-birthday-easy"};

  // assert test
  System::assert(execute_file, "5\n1 2 3 4 5", "2\n3 1 4 2 5");
}