#include <iostream>
#include <bits/stdc++.h>
using namespace std;

	class Node{
		
		public:
		int isim;
		Node* left;
		Node* right;
		Node* temp;
		
	};
	
	Node ekle(){
		
		int n;
		
		cout<<"sayi girin"<<endl;
		cin>>n;
		
		temp&=n;
		
		if()
	}
	
int main(){
	

	while(1)
	{
			cout<<"ne islemi yapmak istersiniz?\n"<<endl;
			cout<<"0-Cikis  1-Ekle  2-Cikar 3-Goster"<<endl;
		int a;
		cin>>a;
		
		switch(a){
			case 0:
				exit(0);
				break;
			
			case 1:
				ekle();
				break;
			
			case 2:
				cikar();
				break;
				
			case 3:
				goster();
				
				}
	}
	
	cout<<"program sonlandirildi..."<<endl;
	
	
	return 0;
}
