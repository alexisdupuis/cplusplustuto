#include "../include/Duration.h"
#include <iostream>
#include <string>

using namespace std;

Duration:: Duration(int startingHours, int startingMinutes, int startingSeconds) : hours(startingHours),
minutes(startingMinutes), seconds(startingSeconds) {}

Duration::~Duration() {}

int Duration::getHours() const {
  return hours;
}

int Duration::getMinutes() const {
  return minutes;
}

int Duration::getSeconds() const {
  return seconds;
}

void Duration::showDuration(ostream& flux) const {
  flux << hours << "h, " << minutes << "min, " << seconds << "s.";
}

bool Duration::equals(Duration const& otherDuration) const {
  if (hours == otherDuration.hours && minutes == otherDuration.minutes && seconds == otherDuration.seconds) {
    return true;
  } else {
    return false;
  }
}

bool Duration::isSmallerThan(Duration const& otherDuration) const {
  if (hours < otherDuration.hours) {
    return true;
  } else if (hours == otherDuration.hours && minutes < otherDuration.minutes) {
    return true;
  } else if (hours == otherDuration.hours && minutes == otherDuration.minutes && seconds < otherDuration.seconds) {
    return true;
  } else {
    return false;
  }
}

Duration& Duration::operator+=(Duration const& otherDuration) {
  seconds += otherDuration.seconds;
  minutes += seconds / 60;
  seconds %= 60;
  minutes += otherDuration.minutes;
  hours += minutes / 60;
  minutes %= 60;
  hours += otherDuration.hours;
  return *this;
}

Duration& Duration::operator-=(Duration const& otherDuration) {
  seconds -= otherDuration.seconds;
  minutes -= seconds / 60;
  seconds %= 60;
  minutes -= otherDuration.minutes;
  hours -= minutes / 60;
  minutes %= 60;
  hours -= otherDuration.hours;
  return *this;
}

bool operator==(Duration const& durationOne, Duration const& durationTwo) {
  return durationOne.equals(durationTwo);
}

bool operator!=(Duration const& durationOne, Duration const& durationTwo) {
  return !(durationOne == durationTwo);
}

bool operator<(Duration const& durationOne, Duration const& durationTwo) {
  return durationOne.isSmallerThan(durationTwo);
}

bool operator<=(Duration const& durationOne, Duration const& durationTwo) {
  return (durationOne < durationTwo || durationOne == durationTwo);
}

bool operator>(Duration const& durationOne, Duration const& durationTwo) {
  return !(durationOne < durationTwo || durationOne == durationTwo);
}

bool operator>=(Duration const& durationOne, Duration const& durationTwo) {
  return !(durationOne < durationTwo);
}

Duration operator+(Duration const& durationOne, Duration const& durationTwo) {
  Duration copy(durationOne);
  copy += durationTwo;
  return copy;
}

Duration operator-(Duration const& durationOne, Duration const& durationTwo) {
  Duration copy(durationOne);
  copy -= durationTwo;
  return copy;
}

ostream& operator<<(ostream &flux, Duration const& duration) {
    duration.showDuration(flux);
    return flux;
}
