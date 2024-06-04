#include <iostream>
#include <chrono>

#include "fns.hpp"

int main() {

    //measure time taken for goodnight1()
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    std::cout << goodnight1("mew");

    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> time_span = end -start;

    std::cout << "TIme taken for goodnight1(): " << time_span.count() << " milliseconds.\n";

}