
#include "catch.hpp"
#include "time.h"



TEST_CASE("Is valid") {
    
    Time t{0,0,0};

CHECK(is_valid(t) == true);

}


