#include <iostream>
using namespace std;
int main(){
	cout<<"carpmak istediginiz sayilari giriniz"<<endl;
	int x,y,i,carpim=0;
	cin>>x>>y;
	for(i=0;i<x;i++){
		carpim=y+carpim;
	}
	cout<<carpim;
}
