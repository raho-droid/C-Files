#include <iostream>
using namespace std;
int f(int x){
	cout<<x<<endl;
	return 5;
}
void g(int y){
	cout<<y*3<<endl;
}
int main()
{
																		/* int fonksiyonlar deðer döndürebilir 
																		return 0; gibi ama void fonksiyonlarý döndüremez.mantýðý basitce yandaki gibi */
			cout<<f(7)<<endl;
		//	cout<<g(8)<<endl;		içinde deðer döndürülemeyeceði için bu satýr çalýþmaz.
			g(8);
}
