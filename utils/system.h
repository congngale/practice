#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <fstream>
#include <iostream>

#define BUFFER_SIZE 512
#define TEST_FILE "input.txt"

class System {
  public:
    static std::string execute_test(std::string execute_file, std::string test_case) {
      //write test case
      write_test(test_case);

      //build command
      std::string command = "./" + execute_file + " < " + TEST_FILE;

      //execute test
      std::string ret = read_command_output(command.c_str());

      //clean up
      clean_up();

      return ret;
    }

  private:
    //write test data
    static void write_test(std::string input) {
      //open file
      std::ofstream file(TEST_FILE);

      //check file is open
      if (file.is_open()) {
        //write data
        file << input;

        //close file
        file.close();
      }
    }

    //clean up
    static void clean_up(void) {
      //remove test file
      std::remove(TEST_FILE);
    }

    static std::string read_command_output(std::string command) {
      //init
      FILE *fp;
      std::string ret;      

      //create compess file
      fp = popen(command.c_str(), "r");

      //check
      if (fp) {
        //init buffer
        char buffer[BUFFER_SIZE] = {0};

        //read buffer
        size_t len = fread(buffer, 1, sizeof(buffer), fp);

        //read buffer
        while (len > 1) {
          //get buffer
          ret += std::string(buffer, len - 1);

          //check len, end of output
          if (len < BUFFER_SIZE) {
            //reset
            len = 0;

            //close file
            pclose(fp);
          } else {
            //continue read
            len = fread(buffer, 1, sizeof(buffer), fp);
          }
        }
      }

      return ret;
    }
};
#endif //SYSTEM_H