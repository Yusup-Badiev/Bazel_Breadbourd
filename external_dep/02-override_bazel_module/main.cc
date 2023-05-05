#include <glog/logging.h>
#include "lib_a.h"
#include <iostream>

int main(int argc, char* argv[]) {
    google::InitGoogleLogging(argv[0]);

    LOG(ERROR) << "Hello from the main module!";
    lib_a();
    std::cout << "hello" << std::endl;
}