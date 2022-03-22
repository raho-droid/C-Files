#include <iostream>
using namespace std;
															//ilk 20 asal sayi 
bool asalmi(int x){
	for(int i=2;i<x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}															
int main(){
	int sayac=0;
	for(int i=2;sayac<20;i++){
		if(asalmi(i)){
			cout<<i<<endl;
			sayac++;	
		}	
	}
}
