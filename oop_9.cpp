#include <iostream>
#include <cstdlib>
using namespace std;



int main()
{

int m[5] = {3,4,2,1,8};
int *p = (int*)malloc(sizeof(int)*5);
p=&m[5];

cout<<"boyut : "<<sizeof(m)<<endl;

for(int i=0;i<5;i++){
	if(i==4){
		cout<<"4. eleman : "<<m[i]<<endl;
	}
}

int temp=p[3];
cout<<"3. eleman : "<<temp<<endl;




return 0;	
}
