#include <iostream>
#include <math.h>
#include "Ball.hpp"
#define PI 3.14159265358979323846

Ball::Ball()
{
    r = 0;
}

Ball::Ball(double r1)
{
    r = r1;
}

double Ball::surface_area(){
    return 4 * PI * r;
}

