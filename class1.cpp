#include <iostream>
#include <string>  
class Person {
	public :
	int age;
	std::string name;  // c's function -> not need std , however c++'s function -> need std
};

int main()
{
	Person kim ;
	kim.age = 23;
	kim.name = "Doyeul";
	std::cout<<"name : "<<kim.name
	<<std::endl;
	std::cout<<"age : "<<kim.age
	<<std::endl;

	return 0;




}
