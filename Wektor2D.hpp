#include <iostream>
#include <cmath>
using namespace std;

class Wektor2D
{
public:
    Wektor2D(double xx, double yy);   

    Wektor2D()
    {
        x = 0;
        y = 0;
        cout << "Hello! " <<"Coordinate x: " << x << "\t" << "Coordinate y: " << y << endl;
    }

    ~Wektor2D()
    {
        cout << "Bye! " << "Coordinate x: " << x << "\t" << "Coordinate y: " << y << endl;
    }

    double norm()
    {
        return sqrt(x*x+y*y);
    }

    void print()
    {
        cout << "Coordinate x: " << x << "\t" << "Coordinate y: " << y << endl;
    }

    void setX(double xx)
    {
        x = xx;
    }

    void setY(double yy)
    {
        y = yy;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }
    
private:  
    double x;
    double y;
};

Wektor2D::Wektor2D(double xx, double yy)
{
    x = xx;
    y = yy;
    cout << "Hello! " <<"Coordinate x: " << x << "\t" << "Coordinate y: " << y << endl;
};

Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    return Wektor2D(v1.getX()+v2.getX(),v1.getY()+v2.getY());
}


double operator*(Wektor2D v1, Wektor2D v2)
{
    return v1.getX()*v2.getX()+v1.getY()*v2.getY(); 
}