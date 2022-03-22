// kullanicidan 20 sayi alýcaksýn su kadari tek su kadari cift su kadari sifir
#include <iostream>
using namespace std;
int main()
{
	cout<<" once kucuk sonra buyuk sayi giriniz "<<endl;
	int kucuk,buyuk,i,toplam=0;
	cin>>kucuk>>buyuk;
	if(i%2==0){
	for(i=kucuk;i<buyuk;i+=2){
	toplam=toplam+i;
	
	}
	cout<<"sonuc "<<toplam;
}
	else{
		kucuk=kucuk+1;
		for(i=kucuk;i<buyuk;i++){
			if(i%2==0){
			
			toplam=toplam+i;
		}
		}
	
	cout<<"sonuc "<<toplam;
}
}
