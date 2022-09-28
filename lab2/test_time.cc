#include <iostream>
#include "catch.hpp"
#include "time.h"
#include <sstream>

using namespace std;

// Testa normalfall, hörnfall och saker som inte ska funka
// Require stoppar test caset ifall testet failar, borde användas på vitala grejer

TEST_CASE("Is valid")
{

    Time t{00, 00, 00};
    REQUIRE(is_valid(t) == true);
     
      Time t1{25, 00, 00};
      Time t2{135, 00, 00};
    REQUIRE_FALSE(is_valid(t1) == true);
    REQUIRE_FALSE(is_valid(t2) == true);

}

TEST_CASE("Is am")
{
    Time t1{11, 59, 59};
    REQUIRE(is_am(t1) == true);

    Time t2{13, 59, 59};
    REQUIRE_FALSE(is_am(t2) == true);
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

    REQUIRE(t1 == t2);
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
    Time t2{23, 59, 59};
    Time t3{00, 00, 00};
    Time t4{01, 00, 00};

    REQUIRE(t1 + 262801 == t4);
    REQUIRE(t2 + 1 == t3);
    REQUIRE_FALSE(t1 + 3 == t3);


}

TEST_CASE("Operator ++x")
{
    Time t1{23, 59, 59};
    Time t2{00, 00, 00};

    CHECK(++t1 == t2);
    CHECK_FALSE(++t1 == t2+4);
}

TEST_CASE("Operator x++")
{
    Time t1{12, 00, 00};
    Time t2{12, 00, 00};

    CHECK(t1++ == t2);
    CHECK_FALSE(t1++ == t2 + 4);
}

TEST_CASE("Operator -")
{
    Time t1{00, 00, 00};
    Time t{00, 00, 00};
    Time t2{23, 59, 59};

    REQUIRE(t1 - 1 == t2);
    REQUIRE(t - 259201 == t2);
    CHECK_FALSE(t1 - 5 == t2);
}

TEST_CASE("Operator --x")
{
    Time t1{00, 00, 00};
    Time t2{23, 59, 59};

    CHECK(--t1 == t2);
    CHECK_FALSE(--t1 == t2-234234);
}

TEST_CASE("Operator x--")
{
    Time t1{00, 00, 00};
    Time t2{00, 00, 00};

    CHECK(t1-- == t2);
    CHECK_FALSE(--t1 == t2-2342);
}

TEST_CASE("Operator >")
{
    Time t1{11, 15, 20};
    Time t2{11, 15, 19};

    CHECK(t1 > t2);
    CHECK_FALSE(t1 < t2);
}

TEST_CASE("Operator <")
{
    Time t1{11, 15, 19};
    Time t2{11, 15, 20};

    CHECK(t1 < t2);
    CHECK_FALSE(t1 > t2);
}

TEST_CASE("Operator >=")
{
    Time t1{11, 11, 12};
    Time t2{11, 11, 11};

    CHECK(t1 >= t1);
    CHECK_FALSE(t2 >= t1);
    

    t1 = {11, 11, 11};
    t2 = {11, 11, 11};

    CHECK(t1 >= t2);
    CHECK_FALSE(t1 != t2);
}

TEST_CASE("Operator <=")
{
    Time t1{11, 11, 11};
    Time t2{11, 11, 12};

    CHECK(t1 <= t2);
    CHECK_FALSE(t2 <= t1);

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

    REQUIRE(t1.HH == 23);
    REQUIRE(t1.MM == 40);
    REQUIRE(t1.SS == 41);

    CHECK_FALSE(in.fail());

    stringstream in2{"23:40:100"};
    Time t2{};
    in2 >> t2;

    CHECK_FALSE(t1.HH == 22);
    CHECK_FALSE(t1.MM == 45);
    CHECK_FALSE(t1.SS == 48);

    CHECK(in2.fail());

     stringstream in3{"2340100"};
     Time t3{};
     in3 >> t3;
     CHECK(in3.fail());

      stringstream in4{"23:40&00"};
     Time t4{};
     in4 >> t4;
     CHECK(in4.fail());







}


