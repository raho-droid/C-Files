#include <iostream>
using namespace std;
void fibonacci_bul (int baslangic,int bitis);
int main()
{
	cout<<"********************************"<<endl;
	cout<<"**** Verilen Bir Araliktaki ****"<<endl;
	cout<<"****** Fibonacci Sayilari ******"<<endl;
	cout<<"********************************"<<endl;
	cout<<"Baslangic degeri giriniz ."<<endl;
			
}
void fibonacci_bul(int baslangic,int bitis){
int x=1,y=1,elemanno=0,son;
			cin>>baslangic;
	cout<<"Baslangic degeriniz => "<<baslangic<<endl;		
			cin>>bitis;
	cout<<"Bitis degeriniz => "<<bitis<<endl;
				if(baslangic<0){
	cout<<" Baslangic degeriniz negatif olmamalidir ."<<endl;
	}
				else if(bitis<0){
	cout<<" Bitis degeriniz negatif olmamalidir ."<<endl;				
				}
				else if(baslangic>bitis){
	cout<<" Baslangic degeriniz bitis degerinizden buyuk olmamalidir ."<<endl;				
				}
				else{
					for(int i=1;i<bitis;i++){
						son=x+y;
						x=y;
						y=son;
						elemanno++;
					}
				}	
}
