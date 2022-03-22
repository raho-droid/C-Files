#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<" a , b ve c kenarini giriniz "<<endl;
	cin>>a>>b>>c;
	if(a*a+b*b!=c*c)
	cout<<" Girdiginiz degerler bir dik ucgene ait degildir."<<endl;
	else{
		cout<<"Girdiginiz degerler bir dik ucgene aittir.";
	}
}
