#include <iostream>
#include <string>
using namespace std;
int main ()
{
	int  uzunkenar , kisakenar , alan ,cevre;
	cout<< "uzun kenari giriniz: "<<endl;
	cin >> uzunkenar;
	cout<< "kisa kenari giriniz; "<<endl;
	cin>> kisakenar;
	alan=uzunkenar*kisakenar;
	cout<<"Dikdortgenin alani;" << alan<<endl;
	cevre=2*(uzunkenar+kisakenar);
	cout<<"Dikdortgenin cevresi ;"<< cevre;
}
