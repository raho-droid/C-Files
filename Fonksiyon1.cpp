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
																		/* int fonksiyonlar de�er d�nd�rebilir 
																		return 0; gibi ama void fonksiyonlar� d�nd�remez.mant��� basitce yandaki gibi */
			cout<<f(7)<<endl;
		//	cout<<g(8)<<endl;		i�inde de�er d�nd�r�lemeyece�i i�in bu sat�r �al��maz.
			g(8);
}
