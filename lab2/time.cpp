#include <iostream>
#include <string>
#include "time.h"

using namespace std;

bool is_am(Time const &t)
{
    return (t.HH < 12);
}
