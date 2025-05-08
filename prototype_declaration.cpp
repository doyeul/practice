#include <iostream>
using namespace std;
int max(int a, int b, int c);
int main()
{
	int a,b,c;
	cout<<"put 3 numbers"<<endl;
	cin>>a>>b>>c;
	cout<<"the maximum number is "<<max(a,b,c)<<endl;
	return 0;
}
int max(int a, int b , int c){
	int max;
	if(a<b) max =b; else max =a;
	if(max<c) max = c;
	return max;
}
