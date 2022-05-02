#include <iostream>
#include <stdio.h>
#include "Paralelepiped.hpp"
#include "Tetraedr.hpp"
#include "Ball.hpp"
#include "Base.hpp"
using namespace std;

int main()
{
    Base **ptr = new Base*[3];
    double x, y, z, a, r;
    
    cout << "Сторони паралелепіпеда" << endl;
    cout << " x = "; cin >> x;
    cout << " y = "; cin >> y;
    cout << " z = "; cin >> z;
    ptr[0] = new Paralelepiped(x, y, z);
    cout << "Площа поверхні паралелепіпеда: " << dynamic_cast<Paralelepiped*>(ptr[0])->surface_area() << endl << endl;

    cout << "Сторони тетраедра" << endl;
    cout << " a = "; cin >> a;
    ptr[1] = new Tetraedr(a);
    cout << "Площа поверхні тетраедра: " << dynamic_cast<Tetraedr*>(ptr[1])->surface_area() << endl << endl;
    
    cout << "Радіус кулі" << endl;
    cout << " r = "; cin >> r;
    ptr[2] = new Ball(r);
    cout << "Площа поверхні кулі: " << dynamic_cast<Ball*>(ptr[2])->surface_area() << endl << endl;
}
