#include <glog/logging.h>
#include "lib_a.h"

int main(int argc, char* argv[]) {
    google::InitGoogleLogging(argv[0]);

    LOG(INFO) << "Hello from the main module!";
    lib_a();
}