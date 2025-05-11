#include <iostream>
using namespace std;

void Changevalue(double &a)//a compiler treats a is the nickname(reference) of the num1;
{
	a = 200;
}
int main()
{
	double num1 = 100;
	cout<< num1<<endl;
	Changevalue(num1);
	cout<<num1<<endl;
	return 0;



}
