#include <iostream>
using namespace std;
int main(){															//Pointers (G�stericiler)
	int a=10;
	int *p;
	p=&a;				
	cout<<" a : "<<a<<endl;
	cout<<"*p : "<<*p<<endl; //G�sterdi�i yerdeki de�eri basar(*).
	cout<<"&a : "<<&a<<endl; //An�n adresini basar(&).
	cout<<" p : "<<p<<endl;
	cout<<" &p :"<<&p<<endl; //pnin adresini basar(&).
}
