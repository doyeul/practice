#include <iostream>
using namespace std;

class myTest {
public : 
	void Test(int i, int * p, int &r)
	{
		i =10;
		*p = 20;
		r= 30;
	}
};

int main()
{
	int a =0;
       	int b = 0;
       	int c = 0;
	myTest test;
	test.Test(a,&b,c);
	cout<<a<<"\n"<<b<<"\n"<<c<<endl;
	return 0;


}
