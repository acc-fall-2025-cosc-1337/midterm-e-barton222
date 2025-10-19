#include <iostream>
#include <string>
#include "question1.h"

std::string gpa_to_letter_grade(double gpa) {
    if (gpa >= 3.5 && gpa <= 4.0) return "A";
    else if (gpa >= 3.0) return "B";
    else if (gpa >= 2.0) return "C";
    else if (gpa >= 1.0) return "D";
    else return "F";
}

int main() {
    double gpa;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y') {
        std::cout << "Enter GPA (0.0 - 4.0): ";
        std::cin >> gpa;

        if (gpa < 0.0 || gpa > 4.0) {
            std::cout << "Invalid GPA. Please enter a value between 0.0 and 4.0.\n";
            continue;
        }

        std::string grade = gpa_to_letter_grade(gpa);
        std::cout << "Letter grade: " << grade << "\n";

        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> cont;
    }

    return 0;
}
