// deminkiyi bide forla yapýcam galiba
#include <iostream>
using namespace std;
int main()
{
	cout<<" lutfen 20 tane tam sayi giriniz "<<endl;
	int sayi,i,cift=0,tek=0,sifir=0;
	for(i=0;i<20;i++){
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
	}
	cout<<" girdiginiz sayilarda "<<tek<<" tek "<<cift<<" cift ve "<<sifir<<" tane sifir var";
}
