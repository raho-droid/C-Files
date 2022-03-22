#include <iostream>
#include <math.h>
using namespace std;

class Nokta{
	public:
		int x1,x2,y1,y2;
};

class Uzaklik : Nokta{
	int method(){
		return sqrt(pow(x2-x1)+pow(y2-y1));
	}
};
int mai
