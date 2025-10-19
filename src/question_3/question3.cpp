// fib.cpp
#include <iostream>
#include "question3.h"

int get_fib_number(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, result;

    for (int i = 2; i <= n; ++i) {
        result = a + b;
        a = b;
        b = result;
    }

    return b;
}

int main() {
    int n;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y') {
        std::cout << "Enter a number (1-15): ";
        std::cin >> n;

        if (n < 1 || n > 15) {
            std::cout << "Invalid input. Must be 1-15.\n";
            continue;
        }

        std::cout << "Fibonacci number: " << get_fib_number(n) << "\n";

        std::cout << "Do you want to try again? (y/n): ";
        std::cin >> cont;
    }

    return 0;
}
