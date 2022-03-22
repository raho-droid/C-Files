#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
	//Ad soyadýnýzý ve boyutunu deðiþik stringlerle tanýmlayýp bastýrýnýz.
	string n("Rahman Alim");
	char *p="RA";
	
	cout<<n<<endl;
	cout<<n.size()<<endl;
	cout<<strlen(p)<<endl;
	cout<<n.length()<<endl;
	
	char *x= (char *)malloc(sizeof(char *)); //Hafýzada yer açmak için kullanýlýr pointerlar için.

	strcpy(x,p);				//Pointer olarak tanýmlanan stringi baþka bir pointera kopyalar.
	cout<<x;
	
	
	//Ad soyadýnýzý ayrý tanýmlayýp toplayarak bastýrýnýz.
	string z("Rahman ");
	char *y= "Alim";
	cout<<"\n"<<z+y<<endl;
	//ya da
	cout<<z.append("Alim")<<endl;
	
	
	
	//Toplamdaki 3 ile 6 arasýný bastýrýnýz.
	string t(z+y);
	cout<<t.substr(3,3);
	
	
	//Yazilim ve Muhendisligi metnini string olarak tanýmlayýn birlestirin ve metindeki ilk ve son i yi bulun.
	string a("Yazilim ");
	a.append("Muhendisligi");
	string i("i");
	size_t b=a.find_first_of(i);
	size_t c=a.find_last_of(i);
	
	cout<<endl<<"Ilk i : "<<b<<"\nSon i : "<<c<<endl;
	
	a.replace(a.find("Muhendisligi"),"Muzisyenligi");
	cout<<a;
	
	
	
	
	
	
	
	
	
	
}
