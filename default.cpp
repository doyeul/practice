#include <iostream>

class myHouse
{
	private :
	int room;
	public : 
	myHouse(int myroom = 1);
	int getRoom();
};
myHouse::myHouse(int myroom){room=myroom;}
int myHouse::getRoom(){return room;}
int main(){
	myHouse myHouse;
	std::cout<<myHouse.getRoom()<<std::endl;
	return 0;
}

