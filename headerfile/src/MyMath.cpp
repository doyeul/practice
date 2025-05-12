#include "MyMath.h"
#include <cmath>

int add(int a, int b){ return a+ b;}
Vector::Vector(double x, double y) : x_(x),y_(y){} // initialize, not assign. we can also apply to the const. 
double Vector::length() const {
return std::sqrt(x_* x_ + y_ *y_);
}
