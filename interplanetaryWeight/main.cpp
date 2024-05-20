#include <iostream>

int main() {
    int weight = 0;
    int planet = 0;

    std::cout << "What is your weight in the earth: ";
    std::cin >> weight;

    std::cout << "Choose a number from 1 to 7 to know you weight in a different planet: ";
    std::cin >> planet;

    switch (planet)
    {
    case 1:
        std::cout << "your weight in Mercury is: " << weight*0.38 << std::endl;
        break;
    case 2:
        std::cout << "your weight in Venus is: " << weight*0.91 << std::endl;
        break;
    case 3:
        std::cout << "your weight in Mars is: " << weight*0.38 << std::endl;
        break;
    case 4:
        std::cout << "your weight in Jupiter is: " << weight*2.34 << std::endl;
        break;
    case 5:
        std::cout << "your weight in Saturn is: " << weight*1.06 << std::endl;
        break;
    case 6:
        std::cout << "your weight in Uranus is: " << weight*0.92 << std::endl;
        break;
    case 7:
        std::cout << "your weight in Neptune is: " << weight*1.19 << std::endl;
        break;
    default:
        break;
    }
}