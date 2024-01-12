#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/a/petya-and-strings";

  // assert test
  System::assert(execute_file, "abs\nAbz", "-1");
  System::assert(execute_file, "aaaa\naaaA", "0");
  System::assert(execute_file, "abcdefg\nAbCdEfF", "1");
}
