#include <iostream>
using namespace std;
int carpim(int a,int b){
	if(b==0)
	return 0;
	if(b<0)
	return carpim(0-a,0-b);
	return a+carpim(a,b-1);
}
int main(){
	cout<<carpim(7,8)<<endl;
	cout<<carpim(-3,4)<<endl;
	cout<<carpim(5,-6)<<endl;	
}
