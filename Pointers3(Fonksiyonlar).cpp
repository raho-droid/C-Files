#include <iostream>
using namespace std;
int g(int x){
	x=30;
}
int f(int *x){
	*x=20;
}
int main()
{
int a =10;
int *p;
p=&a;
g(a);
cout<<a<<endl;
f(p);
cout<<a<<endl;
}
