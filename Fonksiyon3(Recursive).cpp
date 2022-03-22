#include <iostream>
using namespace std;
int rfaktoriyel(int n){										//Recursive(özyineli) fonksiyonlar
	if(n==1)
		return 1;
	return n*rfaktoriyel(n-1);
}
int main(){
	cout<<rfaktoriyel(6)<<endl;
}
