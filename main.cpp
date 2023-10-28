#include <iostream>
#include "Wektor2D.hpp"

using namespace std;

int main()
{
    Wektor2D v1{};
    v1.setX(1.);             
    v1.setY(1.);             
    double x1 = v1.getX();
    double y1 = v1.getY();
    
    v1.print();

    Wektor2D v2{2., 2.};

    Wektor2D sum = v1 + v2;
    sum.print();

    double prod = v1 * v2;
    cout << "v1 x from get: " << x1 << "\tv1 y from get: " << y1 <<endl;
    cout << "Iloczyn skalarny: " << prod << endl;
}