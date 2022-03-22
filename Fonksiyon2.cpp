#include <iostream>
using namespace std;
int faktoriyel(int z){
	int carpim=1;
	while(z>=2){
	carpim=carpim*z;
	z--;	
	}
	return carpim;
}
int main(){
int c,v,y,x;
cout<<"Kombinasyonunu hesaplamak istediginiz sayilari giriniz."<<endl;
cin>>x>>y;
	v=x-y;
	c=(faktoriyel(x))/(faktoriyel(y)*faktoriyel(v));
	cout<<c;	
}
