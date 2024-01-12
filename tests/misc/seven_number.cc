#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/misc/seven-number";

  // assert test
  System::assert(execute_file, "0", "0");
  System::assert(execute_file, "20", "26");
  System::assert(execute_file, "-100", "-202");
  System::assert(execute_file, "1007", "2636");
}