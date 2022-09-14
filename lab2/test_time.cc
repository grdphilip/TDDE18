#include <iostream>
#include "catch.hpp"
#include "time.h"



using namespace std;



TEST_CASE("Is valid") {
    
    Time t{0,0,0};

CHECK(is_valid(t) == true);

}

TEST_CASE("Is am") {
    Time t{11,59,59};

    CHECK(is_am(t) == true);
}

TEST_CASE("Operator ==") {
    Time t1{11,11,11};
    Time t2{11,11,11};

    CHECK(t1==t2);
}
 
TEST_CASE("Operator!=") {
    Time t1{12,11,11};
    Time t2{11,11,11};

    CHECK(t1!=t2);
}

TEST_CASE("Operator +") {
    Time t1{23,59,59};
    Time t2{0,0,0};

    CHECK(t1+1 == t2);
}

TEST_CASE("Operator ++x") {
    Time t1{23,59,59};
    Time t2{0,0,0};

    CHECK(++t1 == t2);
}

TEST_CASE("Operator x++") {
    Time t1{12,0,0};
    Time t2{12,0,0};
  
    CHECK(t1++ == t2);
}




