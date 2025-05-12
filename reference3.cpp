#include <iostream>
using namespace std;

//struct is a combination of many types
struct Person{     
	char name[50];
	int age;
};
void Printref(const Person &psn)
{
	cout<<psn.name<<psn.age; // as a reference
		
}
void Printadr(const Person *psn)
{
	cout <<psn->name << psn->age<<endl; //as an address
}
int main()
{
	Person doyeul = {"doyeul", 23};
	Printref(doyeul);
	Printadr(&doyeul); //& gives an address,which is different from reference, same symbol, different meaning
	cout<<&doyeul<<endl;
	char mark[50] = "mark";
	char (&a) [50] = mark;
	cout<<mark<<a<<endl;
	cout << &mark<< &a<<endl;
	return 0;
}
