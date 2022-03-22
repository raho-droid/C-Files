#include <iostream>
#include <math.h>
using namespace std;

class denklem{
	public:
		float kok1(int a,int b,int c){
			int delta=(b*b)-4*a*c;
			return ((-b-sqrt(delta))/(2*a));
		}
		float kok2(int a,int b,int c){
			int delta=(b*b)-4*a*c;
			return ((-b+sqrt(delta))/(2*a));	
		}
};

int main(){
	
	cout<<"ax^2+b^2+c=0"<<endl<<"Sirasiyla a,b ve c degerlerini giriniz. "<<endl;
	

	denklem denk;
	
	int a,b,c;	
	cin>>a>>b>>c;
	

	int delta=(b*b)-4*a*c;
	
		if(delta<0){
			cout<<"reel kok yoktur."<<endl;
		}
		else if(delta=0){
			cout<<"kok= "<<denk.kok1(a,b,c);
			
		}
		else{
			cout<<"kok1= "<<denk.kok1(a,b,c)<<endl;
			cout<<"kok2= "<<denk.kok2(a,b,c);
		}
		
		
	return 0;
}
