#include <iostream>
using namespace std;
int main(){
	
	int a[]={4,-5,8,12,41,6,6};
	int eb,eb1,eb2;
	eb2=a[0];
	for(int i=0;i<7;i++){
		if(a[i]>eb2 && a[i]<eb1){
			eb2=a[i];
		}
	eb1=a[0];
	for(int i=0;i<7;i++){
		if(a[i]>eb1 && a[i]<eb){
			eb1=a[i];
		}
	eb=a[0];
	for(int i=0;i<7;i++){
		if(a[i]>eb){
			eb=a[i];
	}
}
}
}
cout<<"en buyuk1: "<<eb<<" en buyuk2: "<<eb1<< "enbuyuk3: "<<eb2;
}
