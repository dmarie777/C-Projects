#include <iostream>

int main() {
    int pin = 0;
    int tries = 0;
       
    std::cout << "Welcome\n";

    while (pin != 123 && tries < 3)
    {
        std::cout << "Enter the pin number of three digits\n";
        std::cin >> pin;
        tries++;
    }
    if (pin == 123) {
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n"; 
    }
}