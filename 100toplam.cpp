#include <iostream>
using namespace std;
int main(){
	int i=1,a=2,b;
	for( i=0;i<100;i++){
		i=a;
		a=b;
		b=a+i;
		cout<<b;
	}
	
}
