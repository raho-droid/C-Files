#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
	//Ad soyad�n�z� ve boyutunu de�i�ik stringlerle tan�mlay�p bast�r�n�z.
	string n("Rahman Alim");
	char *p="RA";
	
	cout<<n<<endl;
	cout<<n.size()<<endl;
	cout<<strlen(p)<<endl;
	cout<<n.length()<<endl;
	
	char *x= (char *)malloc(sizeof(char *)); //Haf�zada yer a�mak i�in kullan�l�r pointerlar i�in.

	strcpy(x,p);				//Pointer olarak tan�mlanan stringi ba�ka bir pointera kopyalar.
	cout<<x;
	
	
	//Ad soyad�n�z� ayr� tan�mlay�p toplayarak bast�r�n�z.
	string z("Rahman ");
	char *y= "Alim";
	cout<<"\n"<<z+y<<endl;
	//ya da
	cout<<z.append("Alim")<<endl;
	
	
	
	//Toplamdaki 3 ile 6 aras�n� bast�r�n�z.
	string t(z+y);
	cout<<t.substr(3,3);
	
	
	//Yazilim ve Muhendisligi metnini string olarak tan�mlay�n birlestirin ve metindeki ilk ve son i yi bulun.
	string a("Yazilim ");
	a.append("Muhendisligi");
	string i("i");
	size_t b=a.find_first_of(i);
	size_t c=a.find_last_of(i);
	
	cout<<endl<<"Ilk i : "<<b<<"\nSon i : "<<c<<endl;
	
	a.replace(a.find("Muhendisligi"),"Muzisyenligi");
	cout<<a;
	
	
	
	
	
	
	
	
	
	
}
