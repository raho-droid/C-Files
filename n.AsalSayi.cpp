#include <iostream>
using namespace std;
bool asalmi(int x){
	for(int i=2;i<x;i++){								
		if(x%i==0){
			return false;
		}
	}
	return true;
}
int asal(int x){
	int c=0;
	double i;
	for(i=2;c<x;i++){
		if(asalmi(i)){
			c++;
		}
	}
	return i-1;
}
int main(){
int n;
cout<<"Kacinci asal sayiyi bulmak istiyorsunuz?"<<endl;
cin>>n;
	cout<<asal(n);
}
