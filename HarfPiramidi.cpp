#include <iostream>
using namespace std;
int main()
{
	/*    A   			0				A=65(ASCII)			65
		 ABA			010									656665
		ABCBA 			01210								6566676665  
		*/
		
		char c;
		cin>>c;
		for(int i=0;i<26;i++){
			for(int j=0;j<i;j++){
				cout<<char((int)c+j);
			}
			for(int j=i-2;j>=0;j--){
				cout<<char((int)c+j);
			}
			cout<<endl;
		}
}
