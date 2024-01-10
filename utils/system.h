#ifndef SYSTEM_H
#define SYSTEM_H

#include <chrono>
#include <fstream>
#include <iostream>
#include <string>

// define constants
constexpr auto kInputTest = "./input.txt";
constexpr auto kOutputTest = "./output.txt";

class System {
public:
  static inline void
  assert(const std::string &name, const std::string &input,
         const std::string &expect,
         const std::string &test = std::string(__BASE_FILE__)) {
    // get start time
    auto start = std::chrono::steady_clock::now();

    // execute test
    auto output = execute_test(name, input);

    // clean up expect
    auto expect_data = clean_string(expect);

    // get duration
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
                        std::chrono::steady_clock::now() - start)
                        .count();

    // check output
    if (output.compare(0, expect_data.size(), expect_data) == 0) {
      std::cout << test << ": elapsed time = " << duration
                << "ms, result: \033[1;32mPASS\033[0m" << std::endl;
    } else {
      std::cout << test << ": elapsed time = " << duration
                << "ms, result: \033[1;31mFAIL\033[0m" << std::endl;
    }
  }

  static std::string execute_test(const std::string &execute_file,
                                  const std::string &test_case) {
    // init output
    std::string test_output;

    // open input
    std::ofstream input(kInputTest);

    if (input.is_open()) {
      // write input test
      input << test_case;
      input.close();

      // build command
      auto test_command =
          "./" + execute_file + " < " + kInputTest + " > " + kOutputTest;

      // execute test
      auto ret = system(test_command.c_str());

      if (ret == 0) {
        // open output
        std::ifstream output(kOutputTest);

        // read output
        if (output.is_open()) {
          // read all data
          test_output = std::string(std::istreambuf_iterator<char>(output),
                                    std::istreambuf_iterator<char>());
          output.close();
        }
      }
    }

    // clean up
    std::remove(kInputTest);
    std::remove(kOutputTest);

    return clean_string(test_output);
  }

  static std::string clean_string(const std::string &input) {
    std::string ret;

    for (const auto &c : input) {
      if (c != '\n' && c != ' ') {
        ret.push_back(c);
      }
    }

    return ret;
  }
};
#endif // SYSTEM_H