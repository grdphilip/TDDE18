#include <iostream>
#include "time.h"
#include <sstream>
#include <iomanip>

using namespace std;

bool is_valid(Time const time)
{

    if (time.HH > 23 || time.HH < 0)
    {

        return false;
    }
    else if (time.MM > 59 || time.MM < 0)
    {

        return false;
    }
    else if (time.SS > 59 || time.SS < 0)
    {

        return false;
    }

    return true;
}

bool is_am(Time const &time)
{
    if (time.HH < 12)
    {
        return true;
    }
    return false;
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
        out << "[";
        if (is_am(time))
        {
            out << "am";
        }
        else
        {
            out << "pm";
        }
        out << "]";
    }
    return out.str();
}

bool operator==(Time const &time1, Time const &time2)
{
   if (time1.HH == time2.HH && time1.MM == time2.MM)
    {
        return (time1.SS == time2.SS);
    }
    return false;
}

bool operator!=(Time const &time1, Time const &time2)
{
    return !(time1 == time2);
}

Time &operator+(Time &time, int sec)
{

    time.SS = time.SS + sec;

    while (time.SS > 59)
    {
        time.MM += 1;
        time.SS -= 60;

        while (time.MM > 59)
        {
            time.HH += 1;
            time.MM -= 60;

            if (time.HH > 23)
            {
                time.HH -= 24;
            }
        }
    }
    return time;
}

Time &operator++(Time &time)
{
    time + 1;
    return time;
}

Time operator++(Time &time, int)    
{
    Time temp = time;
    time = time + 1;
    
    return temp;
}


Time &operator-(Time &time, int sec)
{
    time.SS = time.SS - sec;

    while (time.SS < 0)
    {
       
        time.SS += 60;
        time.MM -= 1;
       
        while (time.MM < 0)
        {   time.MM += 60;
            time.HH -= 1;
            
            if (time.HH < 0)
            {
                time.HH += 24;
            }
        }
    }
    return time;
}

Time &operator--(Time &time)
{
    time - 1;
    return time;
}

Time operator--(Time &time, int sec)
{
    Time temp = time;
    time = time - 1;
    
    return temp;
}

bool operator>(Time const &time1, Time const &time2)
{
    return (time1.HH > time2.HH || time1.HH == time2.HH && time1.MM > time2.MM || time1.MM == time2.MM && time1.SS > time2.SS);
}

bool operator<(Time const &time1, Time const &time2)
{
   return(time2 > time1);
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
    char ignore_colon;
    Time tmp{time};
    is >> tmp.HH >> ignore_colon >> tmp.MM >> ignore_colon >> tmp.SS;
    
    if (!is_valid(tmp) || ignore_colon != ':')
    {
        is.setstate(ios::failbit);
    }
    else
    {
        time = tmp;
    }
    return is;
}
