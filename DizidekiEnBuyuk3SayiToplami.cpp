#include <iostream>
using namespace std;
																
int main(){
	int a[7]={4,-5,8,12,41,6,6};
	int eb1=a[0],eb2=a[0],eb3=a[0];
	for(int i=1;i<8;i++){
		if(eb1<a[i]){	
		eb3=eb2;
		eb2=eb1;
		eb1=a[i];
	}
	else if(eb2<a[i]){
		eb3=eb2;
		eb2=a[i];
	}
	else if(eb3<a[i]){
		eb3=a[i];
	}
}
cout<<"en buyuk uc sayinin toplami "<<eb1+eb2+eb3;
}
