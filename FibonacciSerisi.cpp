#include <iostream>
using namespace std;
int main()
{
int i=0,a=1,b=1,c,d;
cin>>c;
cout<<"1 1 ";
while(i<c-2)
{
	d=a+b;
	cout<<d<<" ";
	a=b;
	b=d;
	i++;
}
}
