#include <iostream> //for std::cout
#include <string> // for std::string
using namespace std;
string name = "global parameter";

class Product 
{
	public : 
	Product();
	private :
	string name = "member parameter";
};
Product::Product()
{
	string name = "local parameter";
	std::cout<<"name = "<<name<<std::endl;
	std::cout<<"name = "<<Product::name<<std::endl;
	std::cout<<"name = "<<::name<<std::endl;
}
int main(){
	Product myProduct;
	return 0;


}
