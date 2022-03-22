#include <iostream>
#include <fstream>
#include <string.h>



using namespace std;



int main(){
	

int sayi,toplam=0;

ofstream yaz;
ifstream oku;

oku.open("veri.txt");


for(int i=0;i<10;i++)
	{
		oku>>sayi;
		toplam+=sayi;
	}
	
	oku.close();
	
	yaz.open("sonuc.txt");
	
	yaz<<"Toplam = "<<toplam;
	
	yaz.close();
	
	
	return 0;
	
}
