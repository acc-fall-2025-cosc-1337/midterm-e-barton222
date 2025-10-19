#include <cassert>
#include <string>
#include "question1.h"

int main() {
    assert(gpa_to_letter_grade(4.0) == "A");
    assert(gpa_to_letter_grade(3.5) == "A");
    assert(gpa_to_letter_grade(3.49) == "B");
    assert(gpa_to_letter_grade(3.0) == "B");
    assert(gpa_to_letter_grade(2.99) == "C");
    assert(gpa_to_letter_grade(2.0) == "C");
    assert(gpa_to_letter_grade(1.99) == "D");
    assert(gpa_to_letter_grade(1.0) == "D");
    assert(gpa_to_letter_grade(0.99) == "F");
    assert(gpa_to_letter_grade(0.0) == "F");

    return 0;
}
