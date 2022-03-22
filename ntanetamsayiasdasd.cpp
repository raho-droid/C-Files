// Lutfen n tane tam sayi giriniz olucak ciftler bu kadar aralarinda bu kadar sifir var teklerde bu kadar
#include <iostream>
using namespace std;
int main()
{
	cout<<" lutfen 5 tane tam sayi giriniz "<<endl;
	int sayi,i=0,cift=0,tek=0,sifir=0;
	while(i<5){
		cin>>sayi;
		if(sayi%2==0){
			cift=cift+1;
			if(sayi==0){
				sifir=sifir+1;
			}
		}
		else{
			tek=tek+1;
		}
		i++;
	}
	cout<<" girdiginiz sayilarda "<<tek<<" tek "<<cift<<" cift ve "<<sifir<<" tane sifir var";
}
