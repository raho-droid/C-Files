#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
		cout<<"yapmak istediginiz islemi giriniz "<<endl<<"toplama = 1"<<endl<<"cikarma=2"<<endl<<"carpma =3"<<endl<<"bolme=4";
		cin>>a>>b>>c;
			if(a==1){
				cout<<"toplamlari "<<b+c;
			}
			else if(a==2){
				cout<<"farklari "<<b-c;
			}
			else if(a==3){
				cout<<"carpimlari "<<b*c;
			}
			else if(a==4){
				cout<<"bolumleri "<<b/c;
			}
			else{
			
				cout<<"boyle bir islem yoktur";
		}
}
