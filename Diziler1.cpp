#include <iostream>
using namespace std;
int main(){
	int a[3]={5,6,2};
	cout<<a[1]<<endl;
	cout<<a[2]+a[0]<<endl;
	a[2]=8;
	cout<<a[2]<<endl;
	for(int i=0;i<3;i++){
		cout<<a[i]<<endl;
	}
	int b[4];
	b[0]=10;
	b[1]=20;
	cin>>b[2];
	cin>>b[3];
	for(int i=0;i<4;i++){
		cout<<b[i]<<endl;
	}
}
