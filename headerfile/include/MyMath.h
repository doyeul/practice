#ifndef MYMATH_H   //if this header is already included, skip the following content.
#define MYMATH_H

int add(int a, int b);
class Vector {
public : 
	Vector(double x, double y);
	double length() const;  //length is a function, which can't change the member parameter.
private :
	double x_,y_;
};
#endif //MYMATH_H
