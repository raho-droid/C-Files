#include <iostream>
using namespace std;
int main(){
	int a[8]={5,7,2,8,9,1,4,3};
	int toplam=0,sayac=0;
	for(int i=0;i<8;i++){
		toplam+=a[i];
		sayac++;
	}
	cout<<"Ortalama = "<<(double)toplam/sayac<<endl;
}						//(float)
