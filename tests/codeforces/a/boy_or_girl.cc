#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/a/boy-or-girl";

  // assert test
  System::assert(execute_file, "xiaodao", "IGNORE HIM!");
  System::assert(execute_file, "wjmzbmr", "CHAT WITH HER!");
  System::assert(execute_file, "sevenkplus", "CHAT WITH HER!");
}