#include "first.h"
#include <iostream>
#include <string>

using namespace std;

void First::message(std::string name) {
    std::cout << "It is the first library." << std::endl;
    std::cout << "Hello, " << name << "!" << std::endl;
}
