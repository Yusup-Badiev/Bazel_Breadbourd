#include <glog/logging.h>

int main(int argc, char* argv[]) {
    google::InitGoogleLogging(argv[0]);

    int num_cookies = 32;
    LOG(INFO) << "FOUND " << num_cookies << " cookies";
}