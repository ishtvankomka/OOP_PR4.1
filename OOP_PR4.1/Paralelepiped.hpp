#pragma once
#include <iostream>
#include <stdio.h>
#include "Base.hpp"
using namespace std;

class Paralelepiped : public Base
{
    double x, y, z;
public:
    Paralelepiped();
    Paralelepiped(double, double, double);
    double surface_area();
};

