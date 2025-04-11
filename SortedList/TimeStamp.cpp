#include "timeStamp.h"
#include <iostream>

timeStamp::timeStamp() : seconds(0), minutes(0), hours(0) {}

timeStamp::timeStamp(int ss, int mm, int hh) : seconds(ss), minutes(mm), hours(hh) {}

void timeStamp::printTime() const {
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
}

bool timeStamp::operator>(const timeStamp& other) const {
    if (hours != other.hours)
        return hours > other.hours;
    if (minutes != other.minutes)
        return minutes > other.minutes;
    return seconds > other.seconds;
}

bool timeStamp::operator<(const timeStamp& other) const {
    if (hours != other.hours)
        return hours < other.hours;
    if (minutes != other.minutes)
        return minutes < other.minutes;
    return seconds < other.seconds;
}

bool timeStamp::operator==(const timeStamp& other) const {
    return (hours == other.hours) && (minutes == other.minutes) && (seconds == other.seconds);
}
