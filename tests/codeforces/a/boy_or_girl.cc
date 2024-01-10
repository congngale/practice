#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/a/boy-or-girl"};

  // assert test
  System::assert(execute_file, "xiaodao", "IGNORE HIM!");
  System::assert(execute_file, "wjmzbmr", "CHAT WITH HER!");
  System::assert(execute_file, "sevenkplus", "CHAT WITH HER!");
}