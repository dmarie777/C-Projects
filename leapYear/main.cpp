#include <iostream>

int main() {
  std::cout << "Give me a year, please \n";
  int x{};
  std::cin >> x;
  if (x > 999 && x < 10000) {
    //it must be divisiobe by 4 
    //if it is divisioble by 100, it must be divisible by 400 as well
    if ((x % 4 == 0 && x % 100 != 0 ) || x % 400 ==0 ) {
      std::cout << x <<" falls on a leap year \n";
    } else {
      std::cout << "is not a leap year \n";
    } 
  } else {
    std::cout <<"Invalid entry\n";
  }
}