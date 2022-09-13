#include <iostream>
#include <string>
#include "time.h"

using namespace std;

bool is_valid(Time t) {

    if (t.HH > 23) {

        return false;

    } else if (t.MM > 59) {

        return false;

    } else if (t.SS > 59) {

        return false;

    }

    return true;

}

bool is_am(Time const &t)
{
    return (t.HH < 12);
}
