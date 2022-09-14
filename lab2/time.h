
struct Time {
    int HH;
    int MM;
    int SS;

};

bool is_valid(Time t);
bool is_am(Time const& t);
bool operator ==(Time const& a, Time const& b);
bool operator !=(Time const& a, Time const& b);
Time& operator +(Time& t, int sec);
Time& operator ++(Time& t);
Time operator ++(Time& t, int);

/*
Time& operator -(Time& t, int sec);
Time& operator --(Time& t);
Time operator --(Time& t, int sec);
bool operator ==(Time const& a, Time const& b);
bool operator <(Time const& a, Time const& b);
bool operator >(Time const& a, Time const& b);
bool operator <=(Time const& a, Time const& b);
bool operator >=(Time const& a, Time const& b);
Time ostream& operator <<(ostream& out, Time const& t);
Time istream& operator >>(iatream& in, Time& t);
*/