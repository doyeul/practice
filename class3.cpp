#include <iostream>

class Point{
	public :
	//	Point();
		void Print();
		void SetXY(int X, int Y);
	private :
		int x=30;
		int y = 70;
};
/*
Point::Point() {
       	x =0;
	y=0;
}*/
void Point::SetXY(int X,int Y) {
	x = X;
	y= Y;


}
void Point::Print() { 
	std::cout<<"x : "<<x<<std::endl;
	std::cout<<"y : "<<y<<std::endl;
}

int main()
{
	Point Point1;
	Point1.Print();
	return 0 ;
}
