#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/a/way-too-long-word";

  // assert test
  System::assert(execute_file,
                 "4\nword\nlocalization\ninternationalization\n"
                 "pneumonoultramicroscopicsilicovolcanoconiosis",
                 "word\nl10n\ni18n\np43s");
  System::assert(execute_file,
                 "5\nabcdefgh\nabcdefghi\nabcdefghij\nabcdefghijk\n"
                 "abcdefghijklm",
                 "abcdefgh\nabcdefghi\nabcdefghij\na9k\na11m");
}