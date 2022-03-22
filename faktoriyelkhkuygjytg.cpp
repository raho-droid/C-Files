#include <iostream>
using namespace std;
int main()
{
	int faktoriyel=1, x;
	cin>>x;
	for(int i=1;i<=x;i++){
		faktoriyel = faktoriyel*i;
	}
	cout<<faktoriyel;
}
