
#include "catch.hpp"
#include "time.h"



TEST_CASE("Is valid") {
    
    Time t{0,0,0};

CHECK(is_valid(t) == true);

}

TEST_CASE("Is am") {
    Time t{11,59,59};

    CHECK(is_am(t) == true);
}


