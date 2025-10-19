#include <cassert>
#include "question4.h"

int main() {
    int t1 = 1570846218;
    assert(get_hours(t1) == 2);
    assert(get_minutes(t1) == 10);
    assert(get_seconds(t1) == 18);

    int t2 = 1570875018;
    assert(get_hours(t2) == 10);
    assert(get_minutes(t2) == 10);
    assert(get_seconds(t2) == 18);

    return 0;
}
