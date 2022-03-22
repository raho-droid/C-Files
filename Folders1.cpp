#include <iostream>
#include <fstream>
#include <string.h>



using namespace std;



int main(){
	
	
	//Dosyayi yazma kýsmý
	
	
	
	ofstream dosya;					//Dosyaya yazmaya yarar.(OutputFileStream)
	
	dosya.open("deneme.txt");		//Dosya adi giriyoruz.Ve açýyor.
	
	if(dosya.is_open())				//Dosyanýn açýlýp açýlmadýðýný kontrol eiyoruz.
	{
	dosya<<"eheueheu";				//Dosyaya yazmaya yarar.
	dosya.close();					//Dosyayý mutlaka kapatmalýyýz.
		
	}
	else{
	cout<<"dosya acilmiyor aq";	
	}
	
	
	string satir;
	
	
	ifstream dosya2 ("deneme.txt");				//Dosyayý okumaya yarar.(ÝnputFileStream)
	
	if(dosya2.is_open())
	{
		while(getline(dosya2,satir))			//fstream kaynaklý bir koddur.
		{
			cout<<satir<<endl;
		}
		dosya2.close();
	}		
	
}

