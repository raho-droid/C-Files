#include <iostream>
using namespace std;
int f(int *a, int boyut){
	int eb=a[0];
	int ek=a[0];
	for(int i=0;i<boyut;i++){
		if(a[i]>eb){
			eb=a[i];
		}
		if(a[i]<ek){
			ek=a[i];
		}
	}
	return eb-ek;
}
int main(){
	int a[9]={5,3,7,33,44,11,5,-2,0};
	cout<<f(a,9);
}
