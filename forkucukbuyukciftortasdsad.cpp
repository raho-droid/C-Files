#include <iostream>
using namespace std;
int main()
{
	cout<<" once kucuk sonra buyuk sayi giriniz "<<endl;
		int kucuk,buyuk,i,toplam=0,sayac=0;
	cin>>kucuk>>buyuk;
				for(i=kucuk;i<buyuk;i++){
					if(i%2==0){
					toplam=toplam+i;
					sayac++;
			}
}
						cout<<"toplamlari "<<toplam/sayac;
}

