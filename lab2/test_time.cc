#include <iostream>
#include "catch.hpp"
#include "time.h"
#include <sstream>

using namespace std;

TEST_CASE("Is valid")
{

    Time t{00, 00, 00};

    CHECK(is_valid(t) == true);
}

TEST_CASE("Is am")
{
    Time t{11, 59, 59};

    CHECK(is_am(t) == true);
}

TEST_CASE("to string 24 hour time")
{
    Time t1{22, 23, 23};

    CHECK(to_string(t1, false) == "22:23:23");
}

TEST_CASE("to string regular time// am")
{
    Time t1{10, 10, 23};

    CHECK(to_string(t1, true) == "10:10:23[am]");
}

TEST_CASE("to string regular time//pm")
{
    Time t1{20, 06, 00};

    CHECK(to_string(t1, true) == "08:06:00[pm]");
}

TEST_CASE("Operator ==")
{
    Time t1{11, 11, 11};
    Time t2{11, 11, 11};

    CHECK(t1 == t2);
}

TEST_CASE("Operator!=")
{
    Time t1{12, 11, 11};
    Time t2{11, 11, 11};

    CHECK(t1 != t2);
}

TEST_CASE("Operator +")
{
    Time t1{23, 59, 59};
    Time t2{01, 00, 00};

    CHECK(t1 + 3601 == t2);
}

TEST_CASE("Operator ++x")
{
    Time t1{23, 59, 59};
    Time t2{00, 00, 00};

    CHECK(++t1 == t2);
}

TEST_CASE("Operator x++")
{
    Time t1{12, 00, 00};
    Time t2{12, 00, 01};

    CHECK(t1++ == t2);
}

TEST_CASE("Operator -")
{
    Time t1{00, 00, 00};
    Time t2{23, 59, 59};

    CHECK(t1 - 1 == t2);
}

TEST_CASE("Operator --x")
{
    Time t1{00, 00, 00};
    Time t2{23, 59, 59};

    CHECK(--t1 == t2);
}

TEST_CASE("Operator x--")
{
    Time t1{00, 00, 00};
    Time t2{23, 59, 59};

    CHECK(t1-- == t2);
}

TEST_CASE("Operator >")
{
    Time t1{11, 15, 20};
    Time t2{11, 15, 19};

    CHECK(t1 > t2);
}

TEST_CASE("Operator <")
{
    Time t1{11, 15, 19};
    Time t2{11, 15, 20};

    CHECK(t1 < t2);
}

TEST_CASE("Operator >=")
{
    Time t1{11, 11, 12};
    Time t2{11, 11, 11};

    CHECK(t1 >= t1);

    t1 = {11, 11, 11};
    t2 = {11, 11, 11};

    CHECK(t1 >= t2);
}

TEST_CASE("Operator <=")
{
    Time t1{11, 11, 11};
    Time t2{11, 11, 12};

    CHECK(t1 <= t2);

    t1 = {11, 11, 11};
    t2 = {11, 11, 11};

    CHECK(t1 <= t2);
}

TEST_CASE("Operator <<")
{
    Time t1{23, 16, 18};
    ostringstream out{};
    out << t1;

    CHECK(out.str() == to_string(t1, 0));
}

TEST_CASE("Operator >>") {
    Time t1{};
    stringstream in{"23:40:41"};
    in >> t1;

    CHECK(t1.HH == 23);
    CHECK(t1.MM == 40);
    CHECK(t1.SS == 41);
}


