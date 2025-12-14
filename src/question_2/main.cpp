#include <iostream>
#include "question2.h"

int main()
{
    double celsius;
    char choice;

    do {
        std::cout << "Enter Celsius: ";
        std::cin >> celsius;

        std::cout << "Fahrenheit: " << get_fahrenheit(celsius) << std::endl;

        std::cout << "Continue? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
