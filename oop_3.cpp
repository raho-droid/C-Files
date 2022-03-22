#include <iostream>

using namespace std;

class cokgen{
	protected:								//burada s�n�fta geri kalan public ve privated �zellikler i�in di�er s�n�flara eri�im verir.
		
		int en,boy;
		
	public:
		
		void deger(int x,int y){
			en=x;
			boy=y;
		}
};

class dortgen : public cokgen{				//yeni olu�turdugumuz s�n�fa eski s�n�f� public ederek ordaki bilgileri yeni s�n�fta da kullanabiliriz.
	
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
