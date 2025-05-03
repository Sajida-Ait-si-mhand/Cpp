#include "Harl.hpp"
int main() {
    Harl harl;
    harl.complain("debug");  // will invoke the private warning() method
    return 0;
}
