#include <cassert>
#include <cmath>
#include "question2.h"

bool almost_equal(double a, double b, double tolerance = 0.01) {
    return std::fabs(a - b) < tolerance;
}

int main() {
    assert(almost_equal(get_fahrenheit(37), 98.6));
    assert(almost_equal(get_fahrenheit(25), 77));
    assert(almost_equal(get_fahrenheit(0), 32));
    assert(almost_equal(get_fahrenheit(-40), -40));
    return 0;
}
