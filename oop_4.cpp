#include <iostream>

using namespace std;

class daire{
	
	private:					//burada kullanılanlar başka yerde kullanılamaz.
	const float pi=3.147;		//böyle tanımlanan değerler değiştirelemez.
	
	public:
		double r;
		float alan(double r){
			return  pi*r*r;
		}
};

int main(){
	
	daire dr;
	cin>>dr.r;
	cout<<dr.alan(dr.r)<<endl;
	
	daire d[5];					//dizi kullanılarak d0,d1,d2,d3,d4 adında 5 tane daire dersi oluşturulabilir.
	
	for(int i=0;i<5;i++){
		d[i].r=i;
	}
	
	for(int i=0;i<5;i++){
		cout<<d[i].alan(d[i].r)<<endl;
	}
	
	return 0;
}
