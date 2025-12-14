#include "question4.h"

int get_hours(int seconds)
{
    return (seconds / 3600) % 24;
}

int get_minutes(int seconds)
{
    return (seconds / 60) % 60;
}

int get_seconds(int seconds)
{
    return seconds % 60;
}
