#include "circle.hpp"
#include <cmath>



Circle::Circle(): // default constructor
    radius_{1.0}
    {}
        

Circle::Circle(float r):
    radius_{r}{}

//Setter
void Circle::radius(float r) { radius_=r; }


//Getter
float Circle::radius() const { return radius_; }


float Circle::area() const
{
    const float pi = std::acos(-1);
    float r=radius();
    return((pow(r,2)*pi));
}

float Circle::circumference() const
{
    const float pi = std::acos(-1);
    float r=radius();
    return((2*r*pi));
}

   //Sonstig:

bool Circle::operator< (Circle const& a)
{
    return radius() < a.radius();
}
bool Circle::operator> (Circle const& a)
{
    return radius() > a.radius();
}
bool Circle::operator==(Circle const& a)
{
    return radius()== a.radius();
}
