#include <iostream>
#include "time.h"

using namespace std;

bool is_valid(Time const t) {

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

bool operator ==(Time const& a, Time const& b) {
    while(a.HH == b.HH and a.MM == b.MM and a.SS == b.SS) {
        return true;
    }  
    return false;
}


bool operator !=(Time const& a, Time const& b) {
    return !(a==b);
}

Time& operator +(Time &t, int sec) {
    
    t.SS = t.SS + sec;
   
     while (t.SS > 59) {
        t.MM  +=1;
        t.SS -=60;

    if(t.MM > 59) {
            t.HH +=1;
            t.MM -= 60;

        if (t.HH > 23) {
        t.HH-=24;
    }  
        }
    }

    return t;
}

Time& operator ++(Time& t) {
    t.SS = t.SS + 1;
   
    while (t.SS > 59) {
        t.MM  +=1;
        t.SS -=60;

    if(t.MM > 59) {
            t.HH +=1;
            t.MM -= 60;

        if (t.HH > 23) {
        t.HH-=24;
    }  
        }
    }

    return t;
}

Time operator ++(Time& t, int) {
    Time tmp = t;
    t = t+1;
    return tmp;
}






