#include <iostream>
using namespace std;
int main(){
	int x[3]={1,2,3};
	int *q=x; // veya q=&x[0];
	cout<<q[2]<<endl;
	q[2]=8;
	cout<<x[2]<<endl;
}
