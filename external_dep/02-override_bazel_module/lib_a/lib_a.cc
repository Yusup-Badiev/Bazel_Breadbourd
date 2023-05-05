#include <glog/logging.h>

void lib_a() {
    LOG(ERROR) << "Hello from module A!";
}