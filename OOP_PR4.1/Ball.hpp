#pragma once
#include <iostream>
#include <stdio.h>
#include "Base.hpp"
using namespace std;

class Ball : public Base
{
    double r;
public:
    Ball();
    Ball(double);
    virtual double surface_area();
};
