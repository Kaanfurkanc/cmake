#include <iostream>
#include <string>
#include "./library1/first.h"

using namespace std;

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;

    First first;
    first.message(name);
    
    return 0;
}