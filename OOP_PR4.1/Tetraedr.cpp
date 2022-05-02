#include <iostream>
#include <math.h>
#include "Tetraedr.hpp"

Tetraedr::Tetraedr()
{
    a = 0;
}

Tetraedr::Tetraedr(double a1)
{
    a = a1;
}

double Tetraedr::surface_area(){
    return a * a * sqrt(3);
}
