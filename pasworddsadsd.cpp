#include <iostream>
using namespace std;
int main()
{
	string password ="raho";
	string x;
	cout<<"sifrenizi giriniz";
	
	cin>>x;
	if (x==password){
		cout<<"sifreniz dogru";
	}
	else {
		cout<<"sen kimsin aq";
	}
}
