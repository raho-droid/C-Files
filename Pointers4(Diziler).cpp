#include <iostream>
#include <cstdlib>
using namespace std;
int f(int*p){
	*p=10;
}
int main(){
	int a[3];
	int *p = (int*)malloc(sizeof(int)*3);
								//Carpi 3 3 elemanl� dizi demek. malloc haf�zada yer ay�rmaya yarar. sizeof(int) bir inteeger�n haf�zada kaplad��� yer.
	p[2]=6;
	cout<<p[2]<<endl;
	int *q = (int *)malloc(sizeof(int));
	*q=50;
	f(q);
	cout<<*q<<endl;							
}
