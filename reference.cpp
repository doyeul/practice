#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	int &newnum = num;
	num = 200;
	cout<<num<<endl;
	cout << newnum<<endl;

	newnum=400;
	cout<<num<<endl;
	cout<<num<<endl;
	return 0;



}
