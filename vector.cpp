#include <vector>
#include<iostream>

using namespace std;

int main()
{
	vector <int> v1; 
	v1.push_back(10);
	v1.push_back(11);

	cout<<"the number of the element\n"<<(int) v1.size()<<endl;
	cout<<"v[0]=  "<<v1[0]<<endl;
	cout<<"v[1]=  "<<v1[1]<<endl;
	return 0 ;
}
