#include <iostream>
using namespace std;
int main()
{
	int x,carpim=1;
	cout<<"faktoriyelini hesaplamak istediginiz sayiyi girin";
	cin>>x;
	while(x>=2){
		carpim=carpim*x;
		x--;
		
	}
	cout<<carpim;
	return 0;
}
