#include <iostream>
#include "question1.h"

int main()
{
    double gpa;
    char choice;

    do {
        std::cout << "Enter GPA (0–4): ";
        std::cin >> gpa;

        while (gpa < 0 || gpa > 4) {
            std::cout << "Invalid GPA. Enter again: ";
            std::cin >> gpa;
        }

        std::string grade = gpa_to_letter_grade(gpa);
        std::cout << "Letter Grade: " << grade << std::endl;

        std::cout << "Continue? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
