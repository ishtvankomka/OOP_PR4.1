#include <iostream>
#include "Paralelepiped.hpp"

Paralelepiped::Paralelepiped()
{
    x = 0;
    y = 0;
    z = 0;
}

Paralelepiped::Paralelepiped(double s1, double s2, double s3)
{
    x = s1;
    y = s2;
    z = s3;
}

double Paralelepiped::surface_area(){
    return 2 * (x * y + x * z + y * z);
}
