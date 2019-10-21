#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {

  private:
    int numerator;
    int denominator;

  public:
    Fraction(int numerator = 0, int denominator = 1);
    ~Fraction();
    int getNumerator() const;
    int getDenominator() const;
    void showFraction(std::ostream& flux) const;
    bool equals(Fraction const& otherFraction) const;
    bool isSmallerThan(Fraction const& otherFraction) const;
    Fraction& operator+=(Fraction const& otherFraction);
    Fraction& operator-=(Fraction const& otherFraction);
    Fraction& operator*=(Fraction const& otherFraction);
    Fraction& operator/=(Fraction const& otherFraction);

};

bool operator==(Fraction const& fractionOne, Fraction const& fractionTwo);
bool operator!=(Fraction const& fractionOne, Fraction const& fractionTwo);
bool operator<(Fraction const& fractionOne, Fraction const& fractionTwo);
bool operator<=(Fraction const& fractionOne, Fraction const& fractionTwo);
bool operator>(Fraction const& fractionOne, Fraction const& fractionTwo);
bool operator>=(Fraction const& fractionOne, Fraction const& fractionTwo);
Fraction operator+(Fraction const& fractionOne, Fraction const& fractionTwo);
Fraction operator-(Fraction const& fractionOne, Fraction const& fractionTwo);
Fraction operator*(Fraction const& fractionOne, Fraction const& fractionTwo);
Fraction operator/(Fraction const& fractionOne, Fraction const& fractionTwo);
std::ostream& operator<<(std::ostream &flux, Fraction const& fraction);

#endif // FRACTION_H