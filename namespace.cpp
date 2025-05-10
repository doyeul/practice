#include<iostream>

namespace Book{
	namespace Title{
		char *title;
	}
}

char * title;
int main(){

	title = "Candy";
	Book::Title::title = "Cookie";
	std::cout<<title<<"\n"<<Book::Title::title<<std::endl;
	std::cout<<&title<<"\n"<<sizeof(title)<<std::endl;
	
}
