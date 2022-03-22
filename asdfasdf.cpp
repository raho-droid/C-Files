#include <iostream>
#include <string>
using namespace std;
int main()
{
	string x,y;
	cin >> x >> y;
	int x1 ;
	double y1=1.25 , kalan;
	double sonuc;
	cin>> x1;
	cout << x << "    " << y << endl;
	cout<< " ParaMiktari => " << x1<< " BirimFiyati => "<< y1<<endl;
	kalan = y1*10;
	sonuc= x1-kalan;
	cout << " KalanPara => " << sonuc << endl;
}
