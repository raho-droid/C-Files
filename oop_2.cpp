#include <iostream>
#include <string>

using namespace std;

class Dikdortgen{
	
	public:
		
	int en;
	int boy;
	
	int alan(){
	return en*boy;
	}
	
	int cevre(){
	return 2*(en+boy);
	}
	
	
};


int main(){
	
	Dikdortgen d1;
	
	d1.en=20;
	d1.boy=50;
	
	cout<<"cevre : "<<d1.cevre()<<" alan : "<<d1.alan();

	
	return 0;
}
