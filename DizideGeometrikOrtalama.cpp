#include <iostream>
#include <math.h>
using namespace std;
								//Geometrik ort �rn: {2,4}=>karek�k2*4    {1,2,3}=>k�pk�k1*2*3
int main(){
	int a[8]={5,7,2,8,9,1,4,3};
	int toplam=0,carpim=1;
	for(int i=0;i<8;i++){
		toplam+=a[i];
		carpim*=a[i];
	}
	cout<<"Geometrik Ortalama = "<<pow(carpim,(float)1/8)<<endl;
}
