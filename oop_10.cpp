#include <iostream>
#include <string>
using namespace std;

class Calisan{
	private:
		string calisanAdiSoyadi;
		int maas;
		
	public:
	void setCalisanAdiSoyadi(string isim){
	calisanAdiSoyadi = isim;
	}	
	
	void setMaas(int para){
		maas = para;
	}
	
	string getAdSoyad(){
		return calisanAdiSoyadi;
	}
	
	int getMaas(){
		return maas;
	}
	
	
};

	public  int Calisan::Zam(){
		int tutar;
		tutar = getMaas()/10;
		return tutar;
	}


int main(){
	
	Calisan isci;
	isci.setCalisanAdiSoyadi("Pelin Yilmaz");
	isci.setMaas(3000);
	
	cout<<"Cal�san Ad� : "<<isci.getAdSoyad()<<endl<<"Maa�� : "<<isci.getMaas()<<endl<<"Zam tutari : "<<Zam();
}
