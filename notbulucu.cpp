/* ��l� kontrol yap�s� expression(ifade)1 ? expression2:expression3
ifade 1 do�ruysa ifade 2 yanl��sa 3 �al���r.*/
#include <iostream>
using namespace std;
int main(){
	int i;
	cin>>i;
	cout<< "notu giriniz";
	if(i>100)
	cout<<" boyle bir not yoktur";
	else
	if (i==100)
	cout<<" perfecto ";
	else if(i>=90)
	cout<<" helaaaaaaal";
	else if(i>=80)
	cout<<" devamke";
	else if(i>=50)
	cout<<" loser";
	else if(i>=10)
	cout<<" dumm";
	else if(i>=0)
	cout<<"kag�t israfi";
	else
	cout<<"boyle bir not yoktur";
	
}
