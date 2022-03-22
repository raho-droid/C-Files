#include <iostream>
#include <stdlib.h>
using namespace std;
int f(int *p){
	p[2] = 10;
}
int topla(int *a,int boyut){
	int topla=0;
	for(int i=0;i<boyut;i++){
		topla+=a[i];
	}
	return topla;
}
int main(){
	int a[3]={1,2,3};
/*	int *p;
	p = a;  */
	cout<<a[2]<<endl; 
	f(a);
	cout<<a[2]<<endl;
	cout<<"toplam : "<<topla(a,3)<<endl;
}
