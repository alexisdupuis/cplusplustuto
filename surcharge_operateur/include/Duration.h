#ifndef DURATION_H
#define DURATION_H

#include <iostream>

class Duration {

  private:
    int hours;
    int minutes;
    int seconds;

    void showDuration(std::ostream& flux) const;

  public:
    Duration(int hours = 0, int minutes = 0, int seconds = 0);
    ~Duration();
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;
    bool equals(Duration const& otherDuration) const;
    bool isSmallerThan(Duration const& otherDuration) const;
    Duration& operator+=(Duration const& otherDuration);
    Duration& operator-=(Duration const& otherDuration);

    friend std::ostream& operator<<(std::ostream &flux, Duration const& duration); // "friend" permet à la fonction d'accéder
    // librement à tous les éléments de la classe, même si ils sont privés. ATTENTION : une fonction "friend" n'est pas sensée
    // modifier l'instance de la classe et ne doit être utilisée que si il n'y a pas d'autres choix.

};

bool operator==(Duration const& durationOne, Duration const& durationTwo);
bool operator!=(Duration const& durationOne, Duration const& durationTwo);
bool operator<(Duration const& durationOne, Duration const& durationTwo);
bool operator<=(Duration const& durationOne, Duration const& durationTwo);
bool operator>(Duration const& durationOne, Duration const& durationTwo);
bool operator>=(Duration const& durationOne, Duration const& durationTwo);
Duration operator+(Duration const& durationOne, Duration const& durationTwo);
Duration operator-(Duration const& durationOne, Duration const& durationTwo);

#endif // DURATION_H