#include <iostream>
#include <fstream>
#include <cstdlib>
#include "../singd.h"

int main() {
    using namespace Spirit;
    nlohmann::json config;
    std::ifstream config_file("man.json", std::ios::in);
    config_file >> config;
    Watchdog watchdog(config);
    watchdog.start();
    std::system("pause");
}