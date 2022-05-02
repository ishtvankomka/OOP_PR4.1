#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Paralelepiped.hpp"
#include "Paralelepiped.cpp"


TEST_CASE( "Arguments initialized") {
    Paralelepiped p(2, 3, 10);
    REQUIRE( p.surface_area() == 112);
}
