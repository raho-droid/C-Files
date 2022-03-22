
#include <iostream>
using namespace std;
int main()
{
	int x,i,carpim=1;
	cout<<"faktoriyeli hesaplanacak sayiyi giriniz"<<endl;
	cin>>x;
	for(i=0;i<x;i++){
		carpim=carpim*i;
	}
	cout<<"sonuc "<<carpim<<" dir";
}
