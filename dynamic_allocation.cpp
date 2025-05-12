#include <iostream>

using namespace std;

class OrangeBox
{
public :
	OrangeBox(){cout<<"create object"<<endl;}
	~OrangeBox(){cout<<"mission clear"<<endl;}	
};
int main()
{
	OrangeBox *pOrangeBox= new OrangeBox; //dynamic allocation gives an address so that pointer is naturally introduced
	delete pOrangeBox; 
	return 0;
}
