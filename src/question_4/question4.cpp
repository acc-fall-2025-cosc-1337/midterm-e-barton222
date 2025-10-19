// time_utils.cpp
#include <iostream>
#include "question4.h"

int get_hours(int seconds_since_1970) {
    return (seconds_since_1970 / 3600) % 24;
}

int get_minutes(int seconds_since_1970) {
    return (seconds_since_1970 / 60) % 60;
}

int get_seconds(int seconds_since_1970) {
    return seconds_since_1970 % 60;
}

int main() {
    int time_input1 = 1570846218;
    int time_input2 = 1570875018;

    std::cout << "Time 1: "
              << get_hours(time_input1) << ":"
              << get_minutes(time_input1) << ":"
              << get_seconds(time_input1) << "\n";

    std::cout << "Time 2: "
              << get_hours(time_input2) << ":"
              << get_minutes(time_input2) << ":"
              << get_seconds(time_input2) << "\n";

    return 0;
}
