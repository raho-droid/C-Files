#include <iostream>
#include <fstream>
#include <string.h>



using namespace std;



int main(){
	
	
	//Dosyayi yazma k�sm�
	
	
	
	ofstream dosya;					//Dosyaya yazmaya yarar.(OutputFileStream)
	
	dosya.open("deneme.txt");		//Dosya adi giriyoruz.Ve a��yor.
	
	if(dosya.is_open())				//Dosyan�n a��l�p a��lmad���n� kontrol eiyoruz.
	{
	dosya<<"eheueheu";				//Dosyaya yazmaya yarar.
	dosya.close();					//Dosyay� mutlaka kapatmal�y�z.
		
	}
	else{
	cout<<"dosya acilmiyor aq";	
	}
	
	
	string satir;
	
	
	ifstream dosya2 ("deneme.txt");				//Dosyay� okumaya yarar.(�nputFileStream)
	
	if(dosya2.is_open())
	{
		while(getline(dosya2,satir))			//fstream kaynakl� bir koddur.
		{
			cout<<satir<<endl;
		}
		dosya2.close();
	}		
	
}

