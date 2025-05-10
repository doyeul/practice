#include <iostream>
//choosing default vs overloading

// a+b or a+b+c : default
int Sum(int a, int b, int c =0)
{
	return a+b+c;
}

// mean of a,b or a+b+c : overloading
double Avg(int a , int b)
{
	return (a+b) / 2;
}
double Avg(int a, int b, int c)
{
	return (a+b+c) / 3;
}
int main()
{
 	int a = Sum(2,3);
	double b = Avg(3,4,5);
	double c = Avg(3,4);
	std::cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<std::endl;
}


