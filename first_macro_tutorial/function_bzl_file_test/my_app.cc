#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream>
#include <iostream>

inline bool exists_test3(const std::string& name) {
  struct stat buffer;   
  return (stat (name.c_str(), &buffer) == 0); 
}

int main() {
    std::cout << exists_test3("function_bzl_file_test/small_logo.png") << std::endl;
}