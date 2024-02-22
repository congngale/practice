#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/266/266-b";

  // assert test
  System::assert(execute_file, "4 1\nGGGB", "GGGB");
  System::assert(execute_file, "5 1\nBGGBG", "GBGGB");
  System::assert(execute_file, "5 2\nBGGBG", "GGBGB");
  System::assert(execute_file, "22 7\nGBGGBGGGGGBBBGGBGBGBBB",
                 "GGGGGGGGBGGBGGBBBBBBBB");
}