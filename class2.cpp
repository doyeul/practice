#include <iostream>

class Point{
	public:
	Point(); // constructor is automatically called when we create object.
	int x, y;  //member argument
	void Print(); //member function
}; //do not forget ; 
Point::Point() //initialize as x = 100, y = 100
{
	x = 100;
	y = 100;

}
void Point::Print() 
{
	std::cout <<"x :  " <<x <<"y : " <<y << std::endl;
}

int main()
{
	Point p1;
	p1.x = 50;
	p1.Print();
	return 0;
}
