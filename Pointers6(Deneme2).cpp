#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	cout<<" lutfen 5 tane sayi giriniz"<<endl;
	int *p;
	p= (int*)malloc(sizeof(int)*5);
	for(int i=0;i<5;i++){
		cin>>*(p+i);
	}
	for(int i=0;i<5;i++){
		cout<<*(p+i)<<endl;
	}
}
