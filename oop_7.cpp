#include <iostream>
#include <string>

using namespace std;

class ogrenci{
	private:
		string isim;
		int numara;
		
	public:
		void setIsim(string girIsim){
			
			if(girIsim.size()>=2){
				isim=girIsim;
			}
			else{
				cout<<"girdiginiz isim gecerli degildir."<<endl;
			}
		}	
		
		void setNumara(int girNo){
			
			if(girNo>0){
				numara=girNo;
			}
			else{
				cout<<"girdiginiz numara gecerli degildir."<<endl;
			}
		}
		
		
		string getIsim(){
			return isim;
		}
		
		int getNumara(){
			return numara;
		}
};

int main(){
	
	ogrenci ogr;
	ogr.setIsim("Ra");
	ogr.setNumara(1234);
	
	cout<<ogr.getIsim()<<endl<<ogr.getNumara();
	
	
	return 0;
}
