#include <iostream>
#include <string.h>

using namespace std;

struct tarih
{
	int gun;
	int ay;
	int yil;
};
struct kisiler
{
	char adi[21];
	struct tarih dogum;
};



int main()
{
	
struct kisiler a;
strcpy(a.adi,"Adi");
a.dogum.gun=15;
a.dogum.ay=8;
a.dogum.yil=1969;

cout<<" "<<a.adi<<" "<<a.dogum.gun<<" "<<a.dogum.ay<<" "<<a.dogum.yil;

	
return 0;	
}
