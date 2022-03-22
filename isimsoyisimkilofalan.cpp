#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string firstname ;
	string lastname ;
	int age;
	double weight;
	cout << " ismi soyismi yasi gir "
	 << " ve kiloyu, bosluk birakarak gir"
	;
	cin>> firstname 
	>> lastname ;
	cin>> age >> weight;
	cout<< " name: "<<firstname<< "  "
	<< lastname << endl;
	cout << "age: "<<age <<endl;
	cout << "weight: " << weight << endl;
	
}
