#include <iostream>
using namespace std;
																//D�ZG�LER
							//     e	v	r	e	n   /0              char *c= "evren";
							//     0	1	2	3	4	5				char c[6]= "evren";
													//	/0 Dizginin bitti�ini g�sterir.						
int main(){
	char *s= "evren";
	cout<<s<<endl<<s[2]<<endl;
	char c[6]= "evren";
	char a[5];
	a[0]= 'e';
	a[1]= 'v';
	a[2]= 'r';
	cout<<c<<endl;
	cout<<a<<endl;
}
