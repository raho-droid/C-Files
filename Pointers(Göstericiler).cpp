#include <iostream>
using namespace std;
int main(){															//Pointers (Göstericiler)
	int a=10;
	int *p;
	p=&a;				
	cout<<" a : "<<a<<endl;
	cout<<"*p : "<<*p<<endl; //Gösterdiði yerdeki deðeri basar(*).
	cout<<"&a : "<<&a<<endl; //Anýn adresini basar(&).
	cout<<" p : "<<p<<endl;
	cout<<" &p :"<<&p<<endl; //pnin adresini basar(&).
}
