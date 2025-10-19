#include <cassert>
#include "question3.h"

int main() {
    assert(get_fib_number(1) == 1);
    assert(get_fib_number(2) == 1);
    assert(get_fib_number(3) == 2);
    assert(get_fib_number(5) == 5);
    assert(get_fib_number(7) == 13);
    assert(get_fib_number(10) == 55);
    assert(get_fib_number(12) == 144);
    assert(get_fib_number(15) == 610);
    return 0;
}
