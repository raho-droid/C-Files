#include <iostream>
#include <stdlib.h>									//Bunun dizi modeli ödevin.
#include <time.h>
using namespace std;
int main(){
	int n,skor;
	cin>>n;
	srand(time(NULL));
	for(int i=0;i<n;i++){
	int z1=rand()%6+1;
	int z2=rand()%6+1;
	cout<<z1<<" "<<z2<<endl;
	if(z1>z2){
		skor++;
	}
	else if(z2>z1){
		skor--;
	}
	
		}
		if(skor>0){
			cout<<"1 kazandi"<<endl;
		}
		else if(skor<0){
			cout<<"2 kazandi"<<endl;
		}
		else{
			cout<<"berabere kaldiniz"<<endl;
		}
}
