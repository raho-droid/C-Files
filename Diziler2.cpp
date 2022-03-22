#include <iostream>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	int eb=a[0];
	for(int i=0;i<5;i++){
		if(eb<a[i]){
			eb=a[i];
		}
	}
	int ek=a[0];
	for(int i=0;i<5;i++){
		if(ek>a[i]){
			ek=a[i];
		}
	}
	int toplam=0;
	for(int i=0;i<5;i++){
		toplam=toplam+a[i];
	}	
	cout<<"En buyuk : "<<eb<<endl;
	cout<<"En kucuk : "<<ek<<endl;
	cout<<"Toplam : "<<toplam<<endl;
	cout<<"Ortalama : "<<(double)toplam/5<<endl;
}
