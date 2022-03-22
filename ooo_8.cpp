#include <iostream>

using namespace std;

class kure{
	
	private:
		double pi=3.14;
	
	public:
	float yaricap;
	
	float hacim(int r){
		
	return	4/3*(pi*r*r*r);
	}
	
	float alan(int r){
		
		return 4*pi*r*r;
	}	
};

int main(){
	
	kure kr;
	
	cout<<kr.hacim(3)<<endl<<kr.alan(3);
	
	
	return 0;
}
