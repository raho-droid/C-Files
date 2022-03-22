#include <iostream>

using namespace std;

class silindir{
	private:
		int yukseklik=3,yaricap=2;
		
	public:
	double alan(){
			return (3.14*yaricap*yaricap)*yukseklik;
		}	
};

int main(){
	
	silindir sr;
	cout<<sr.alan();
	
	
	return 0;
}
