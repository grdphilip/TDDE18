#include <iostream>
#include <string>
#include "time.h"

using namespace std;

<<<<<<< HEAD
bool is_am(Time const &t)
{
    return (t.HH < 12);
=======
bool is_valid(Time t) {
    if (t.hours > 23) {
        return false;
    } else if (t.minutes > 59) {
        return false;
    } else if (t.seconds > 59) {
        return false;
    } 
    return true;
>>>>>>> 00c212c (Edit)
}

bool is_am(Time const &t)
{
    return (t.hours < 12);
}
