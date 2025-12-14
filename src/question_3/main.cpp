#include <iostream>
#include "question3.h"

int main()
{
    int number;
    char choice;

    do {
        std::cout << "Enter number (1–15): ";
        std::cin >> number;

        while (number < 1 || number > 15) {
            std::cout << "Invalid number. Enter again: ";
            std::cin >> number;
        }

        int result = get_fib_number(number);
        std::cout << "Fibonacci number: " << result << std::endl;

        std::cout << "Continue? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
