#include <iostream>
#include "question2.h"

double get_fahrenheit(double celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

int main() {
    double celsius;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y') {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> celsius;

        double fahrenheit = get_fahrenheit(celsius);
        std::cout << "Fahrenheit: " << fahrenheit << "\n";

        std::cout << "Do you want to convert another? (y/n): ";
        std::cin >> cont;
    }

    return 0;
}
