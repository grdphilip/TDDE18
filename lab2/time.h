#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

struct Time
{
    int HH;
    int MM;
    int SS;
};

bool is_valid(Time const time);
bool is_am(Time const &time);
std::string to_string(Time const &time, bool regular_time);
bool operator==(Time const &time1, Time const &time2);
bool operator!=(Time const &time1, Time const &time2);
Time operator+(Time const &time, int sec);
Time &operator++(Time &time);
Time operator++(Time &time, int);
Time operator-(Time const &time, int sec);
Time &operator--(Time &time);
Time operator--(Time &time, int sec);
bool operator>(Time const &time1, Time const &time2);
bool operator<(Time const &time1, Time const &time2);
bool operator>=(Time const &time1, Time const &time2);
bool operator<=(Time const &time1, Time const &time2);
std::ostream &operator<<(std::ostream &os, Time const &time);
std::istream &operator>>(std::istream &is, Time &time);
