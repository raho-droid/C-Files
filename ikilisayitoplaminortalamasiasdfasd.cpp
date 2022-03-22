#include <iostream>
using namespace std;
int main()
{
	cout<<" 2 sayi giriniz once kucuk sonra buyuk "<<endl;
		int x,y,toplam=0;
		
			cin >>x>>y;
			double z;
			z=(y-x)/2;
				if(x%2==0){
					while(x<y){
						toplam =x+toplam;	
						x=x+2;
					}
				
				}
				else {
						x=x+1;
							while(x<y){
								toplam=x+toplam;
								x=x+2;
							}
					}
				cout<<toplam/z;
				
								
}
