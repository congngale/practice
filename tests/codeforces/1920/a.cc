#include "system.h"

int main(int argc, char *argv[]) {
  // init execute
  const std::string execute_file = std::string(argv[1]) +
                                   "/build/sources/codeforces/1920/1920-a";
  const std::string input_path = std::string(argv[1]) + "/tests/codeforces/1920/input";
  const std::string output_path = std::string(argv[1]) + "/tests/codeforces/1920/output";

  // assert test
  System::assert_file(execute_file, input_path + "/a1.txt", output_path + "/a1.txt");
}