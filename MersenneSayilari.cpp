#include <iostream>
using namespace std;
														//Mersenne sayilari (2^n -1)
int ust(int x,int y){
	int carpim=1;
for(int i=0;i<y;i++){
	carpim=x*carpim;
}
return carpim;
}														
int main(){

	for(int i=1;i<=20;i++){
	cout<<ust(2,i)-1<<" ";	
	}
}
