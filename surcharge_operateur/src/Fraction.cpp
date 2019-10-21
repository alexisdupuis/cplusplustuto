#include <iostream>
#include <algorithm>
#include "../include/Fraction.h"

using namespace std;

Fraction::Fraction(int startingNumerator, int startingDenominator) {
  int gcd = __gcd(startingNumerator, startingDenominator);
  numerator = startingNumerator / gcd;
  denominator = startingDenominator / gcd;
}

Fraction::~Fraction() {}

int Fraction::getNumerator() const {
  return numerator;
}

int Fraction::getDenominator() const {
  return denominator;
}

void Fraction::showFraction(ostream& flux) const {
  flux << numerator << " / " << denominator;
}

bool Fraction::equals(Fraction const& otherFraction) const {
  if (numerator == otherFraction.numerator && denominator == otherFraction.denominator) {
    return true;
  } else {
    return false;
  }
}

bool Fraction::isSmallerThan(Fraction const& otherFraction) const {
  int newNumerator = numerator * otherFraction.denominator;
  int newOtherNumerator = denominator * otherFraction.numerator;
  if (newNumerator < newOtherNumerator) {
    return true;
  } else {
    return false;
  }
}

Fraction& Fraction::operator+=(Fraction const& otherFraction) {
  int tmpNumerator = numerator * otherFraction.denominator;
  int tmpDenominator = denominator * otherFraction.denominator;
  tmpNumerator += denominator * otherFraction.numerator;
  int gcd = __gcd(tmpNumerator, tmpDenominator);
  numerator = tmpNumerator / gcd;
  denominator = tmpDenominator / gcd;
  return *this;
}

Fraction& Fraction::operator-=(Fraction const& otherFraction) {
  int tmpNumerator = numerator * otherFraction.denominator;
  int tmpDenominator = denominator * otherFraction.denominator;
  tmpNumerator -= denominator * otherFraction.numerator;
  int gcd = __gcd(tmpNumerator, tmpDenominator);
  numerator = tmpNumerator / gcd;
  denominator = tmpDenominator / gcd;
  return *this;
}

Fraction& Fraction::operator*=(Fraction const& otherFraction) {
  numerator *= otherFraction.numerator;
  denominator *= otherFraction.denominator;
  int gcd = __gcd(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
  return *this;
}

Fraction& Fraction::operator/=(Fraction const& otherFraction) {
  numerator *= otherFraction.denominator;
  denominator *= otherFraction.numerator;
  int gcd = __gcd(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
  return *this;
}

bool operator==(Fraction const& fractionOne, Fraction const& fractionTwo) {
  return fractionOne.equals(fractionTwo);
}

bool operator!=(Fraction const& fractionOne, Fraction const& fractionTwo) {
  return !(fractionOne == fractionTwo);
}

bool operator<(Fraction const& fractionOne, Fraction const& fractionTwo) {
  return fractionOne.isSmallerThan(fractionTwo);
}

bool operator<=(Fraction const& fractionOne, Fraction const& fractionTwo) {
  return (fractionOne < fractionTwo || fractionOne == fractionTwo);
}

bool operator>(Fraction const& fractionOne, Fraction const& fractionTwo) {
  return !(fractionOne < fractionTwo || fractionOne == fractionTwo);
}

bool operator>=(Fraction const& fractionOne, Fraction const& fractionTwo) {
  return !(fractionOne < fractionTwo);
}

Fraction operator+(Fraction const& fractionOne, Fraction const& fractionTwo) {
  Fraction copy(fractionOne);
  cout << copy << endl;
  copy += fractionTwo;
  return copy;
}

Fraction operator-(Fraction const& fractionOne, Fraction const& fractionTwo) {
  Fraction copy(fractionOne);
  copy -= fractionTwo;
  return copy;
}

Fraction operator*(Fraction const& fractionOne, Fraction const& fractionTwo) {
  Fraction copy(fractionOne);
  copy *= fractionTwo;
  return copy;
}

Fraction operator/(Fraction const& fractionOne, Fraction const& fractionTwo) {
  Fraction copy(fractionOne);
  copy /= fractionTwo;
  return copy;
}

ostream& operator<<(ostream &flux, Fraction const& fraction) {
    fraction.showFraction(flux);
    return flux;
}