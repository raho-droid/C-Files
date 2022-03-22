#include <iostream>
#include <string>
using namespace std;
int main()

{
	string x,y ;
	cout << "ad ve soyadinizi giriniz";
	cin>>x>>y;
	cout << " ad= " << x << "\n soyad= "<< y;
	double paramiktari , sonuc;
	cout << " parayı gir lan = " ;
	cin >> paramiktari ;
	double girenpara= 97;
	sonuc= paramiktari - (98*girenpara);
	cout << "kalan para =" << sonuc<< endl;
}
