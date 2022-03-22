#include <iostream>
#include <fstream>
#include <string.h>



using namespace std;



int main(){
	
	
	
	ofstream folder;
	folder.open("folder2.txt");
	
	if(folder.is_open())
	{
	folder<<"Rahman Alim"<<endl<<"Ra"<<endl<<"God";	
	}
	else{
		cout<<"Dosya acilmadi aq";		
	}
	folder.close();
	
	
	string satir;
	
	ifstream dosya2 ("folder2.txt");				
	
	if(dosya2.is_open())
	{
		while(getline(dosya2,satir))			
		{
			cout<<satir<<endl;
		}
		dosya2.close();
	}		
	
}
