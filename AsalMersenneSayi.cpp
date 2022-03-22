#include <iostream>
using namespace std;
bool asalmi(int x){
	for(int i=2;i<x;i++){								//int degeri ilk 20 sayiyi tutmaya yetmýyor cunku degerler cok buyuk
		if(x%i==0){
			return false;
		}
	}
	return true;
}
int ust(int t,int u){
	int sonuc=1;
	for(int i=1;i<=u;i++){
		sonuc=sonuc*t;
	}
	return sonuc;
}
int main(){
	int c=0;
	for(int i=2;c<20;i++){
		if(asalmi(ust(2,i)-1)){
			cout<<ust(2,i)-1<<" ";
			c++;
		}
	}
}
