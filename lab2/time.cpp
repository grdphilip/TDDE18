
#include "time.h"

using namespace std;

bool const is_valid(Time const &time)
{
    return (!(time.HH > 23 || time.HH < 0 || time.MM > 59 || time.MM < 0 || time.SS > 59 || time.SS < 0));
}

bool const is_am(Time const &time)
{
    return (time.HH < 12);
}

std::string to_string(Time const &time, bool regular_time)
{
    std::ostringstream out{};

    out << setw(2) << setfill('0');
    if (regular_time)
    {
        if (time.HH == 0)
        {
            out << 12;
        }
        else if (is_am(time) || time.HH == 12)
        {
            out << time.HH;
        }
        else
        {

            out << time.HH - 12;
        }
    }
    else
    {
        out << time.HH;
    }
    out << ":" << setw(2) << time.MM << ":" << setw(2) << time.SS;
    if (regular_time)
    {
        if (is_am(time))
        {
            out << " am";
        }
        else
        {
            out << " pm";
        }
    }
    return out.str();
}

bool operator==(Time const &time1, Time const &time2)
{
    return (time1.HH == time2.HH && time1.MM == time2.MM && time1.SS == time2.SS);
}

bool operator!=(Time const &time1, Time const &time2)
{
    return !(time1 == time2);
}

Time operator+(Time const &time, int sec)
{
    Time added{time};
    added.SS = time.SS + sec;

    while (added.SS > 59)
    {
        added.MM += 1;
        added.SS -= 60;

        while (added.MM > 59)
        {
            added.HH += 1;
            added.MM -= 60;

            if (added.HH > 23)
            {
                added.HH -= 24;
            }
        }
    }
    return added;
}

Time &operator++(Time &time)
{
    time = time + 1;
    return time;
}

Time operator++(Time &time, int)
{
    Time temp = time;
    time = time + 1;

    return temp;
}

Time operator-(Time const &time, int sec)
{
    Time subtracted{time};
    subtracted.SS = time.SS - sec;

    while (subtracted.SS < 0)
    {

        subtracted.SS += 60;
        subtracted.MM -= 1;

        while (subtracted.MM < 0)
        {
            subtracted.MM += 60;
            subtracted.HH -= 1;

            if (subtracted.HH < 0)
            {
                subtracted.HH += 24;
            }
        }
    }
    return subtracted;
}

Time &operator--(Time &time)
{
    time = time - 1;
    return time;
}

Time operator--(Time &time, int sec)
{
    Time temp{time};
    time = time - sec;

    return temp;
}

bool operator>(Time const &time1, Time const &time2)
{
    return ((time1.HH > time2.HH) || (time1.HH == time2.HH && time1.MM > time2.MM) || (time1.MM == time2.MM && time1.SS > time2.SS));
}

bool operator<(Time const &time1, Time const &time2)
{
    return (time2 > time1);
}

bool operator>=(Time const &time1, Time const &time2)
{
    return (time1 > time2 || time1 == time2);
}

bool operator<=(Time const &time1, Time const &time2)
{
    return (time2 >= time1);
}

std::ostream &operator<<(std::ostream &os, Time const &time)
{
    os << to_string(time, 0);
    return os;
}

istream &operator>>(istream &is, Time &time)
{
    char ignore_colon, ignore_colon2;
    Time tmp{time};
    is >> tmp.HH >> ignore_colon >> tmp.MM >> ignore_colon2 >> tmp.SS;

    if (!is_valid(tmp) || ignore_colon != ':' || ignore_colon2 != ':')
    {
        is.setstate(ios::failbit);
    }
    else
    {
        time = tmp;
    }
    return is;
}