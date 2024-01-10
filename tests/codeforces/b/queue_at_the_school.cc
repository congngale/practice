#include "system.h"

int main() {
  // init execute
  const std::string execute_file{"sources/codeforces/b/queue-at-the-school"};

  // assert test
  System::assert(execute_file, "4 1\nGGGB", "GGGB");
  System::assert(execute_file, "5 1\nBGGBG", "GBGGB");
  System::assert(execute_file, "5 2\nBGGBG", "GGBGB");
  System::assert(execute_file, "22 7\nGBGGBGGGGGBBBGGBGBGBBB",
                 "GGGGGGGGBGGBGGBBBBBBBB");
}