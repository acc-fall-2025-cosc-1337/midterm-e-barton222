#include <iostream>
#include "question4.h"

int main()
{
    int seconds_since_1970 = 1570846218;

    std::cout << "Hours: " << get_hours(seconds_since_1970) << std::endl;
    std::cout << "Minutes: " << get_minutes(seconds_since_1970) << std::endl;
    std::cout << "Seconds: " << get_seconds(seconds_since_1970) << std::endl;

    return 0;
}
