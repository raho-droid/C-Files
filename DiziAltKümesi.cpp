#include <iostream>
using namespace std;
																//Dizi alt kümesi falan
int main(){
	int a[3]={1,2,3};
	int b[10]={9,5,1,2,3,6,7,1,2,3};
	int aboyut=3;
	int bboyut=10;
		for(int i=0;i<bboyut;i++){
			bool esit=true;
			for(int j=0;j<aboyut;j++){
				if(a[j]!=b[i+j]){
					esit=false;
					break;
				}
			}
			if(esit){
				cout<<"alt elemani vardir ve "<<i<<"'den baslar"<<endl;
			}
		}
}
