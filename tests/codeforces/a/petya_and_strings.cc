#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/a/petya-and-strings"};

  // assert test
  System::assert(execute_file, "abs\nAbz", "-1");
  System::assert(execute_file, "aaaa\naaaA", "0");
  System::assert(execute_file, "abcdefg\nAbCdEfF", "1");
}
