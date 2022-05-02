#pragma once
#include <iostream>
#include <stdio.h>
#include "Base.hpp"
using namespace std;

class Tetraedr : public Base
{
    double a;
public:
    Tetraedr();
    Tetraedr(double);
    double surface_area();
};

