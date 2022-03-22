#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
		for(int i=0;i<n+1;i++){
			int y,b;
			if(i<=n/2){
				y=2*i+1;
			}
			else{
				y=2*(n-i-1)+1;
			}																//sadece tek sayilarda duzgun calisir
			b=(n-y)/2;
			for(int j=0;j<b;j++){//bosluklar
				cout<<" ";
		}
			for(int j=0;j<y;j++){//yildizlar
			cout<<"*";
			}
			cout<<endl;
}
}
