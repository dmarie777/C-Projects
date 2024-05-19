#include <iostream>
#include <stdlib.h>
#include <ctime>

int main(){
    //Create a number that is 0 or 1
    srand(time(NULL));
    int coin = rand() % 2;

    if(coin == 0) {
        std::cout << "Head\n";
    } else {
        std::cout << "Tail\n";
    }
}