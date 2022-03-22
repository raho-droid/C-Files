#include <iostream>

using namespace std;

class cokgen{
	protected:								//burada sýnýfta geri kalan public ve privated özellikler için diðer sýnýflara eriþim verir.
		
		int en,boy;
		
	public:
		
		void deger(int x,int y){
			en=x;
			boy=y;
		}
};

class dortgen : public cokgen{				//yeni oluþturdugumuz sýnýfa eski sýnýfý public ederek ordaki bilgileri yeni sýnýfta da kullanabiliriz.
	
	public:
		
	int alan(){
		return en*boy;
	}
};

class dikucgen : public cokgen{
	
	public:
		
	int alan(){
		return ((en*boy)/2);
	}
};


int main(){
	
	dortgen dg;
	dikucgen du;
	
	dg.deger(3,4);
	du.deger(3,4);
	
	cout<<dg.alan()<<endl<<du.alan();
	
	return 0;
}
