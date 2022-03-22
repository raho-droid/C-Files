#include <iostream>
#include <fstream>
#include <string.h>



using namespace std;



int main()
{
	int sayi;
	
	
	ofstream giris;
	ifstream cikis;
	
	cikis.open("veri.txt");
	giris.open("verininIlkIkýElemani.txt");
	
	for(int i=0;i<2;i++)
	{
		cikis>>sayi;
		giris<<sayi<<endl;
	}
	cikis.close();
	giris.close();
	
	
	return 0;
}
