#include <iostream>
using namespace std;

void hanoi(int n,char kaynak,char hedef,char temp)
{

if(n==1){
cout<<"Disk 1'i "<<kaynak<<" cubugundan "<<hedef<<" cubuguna tasi"<<endl;
return;
}
else{
	hanoi(n-1,kaynak,temp,hedef);
	cout<<"Disk "<<n<<"i "<<kaynak<<" cubugundan "<<hedef<<" cubuguna tasi"<<endl;
	hanoi(n-1,temp,hedef,kaynak);
	
}
}


int main()
{
	
	int n;
	cin>>n;
	
	hanoi(n,'A','B','C');
	
	
	
	return 0;
}
