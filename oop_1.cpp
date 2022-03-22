#include <iostream>

using namespace std;

class Insan{							//Sýnýfý oluþturup sýnýfa ait özellikler tanýmlýyoruz.
	public:								//Public bir iletiþim belirtecidir ve bilgiyi eriþilebilir yapar. 		
		string isim;
		string gozRengi;
		string sacRengi;
		int yas;
		int buyumek(){					//Metodlar fiillerdir ve fonksiyon olarak sýnýflara tanýmlanýrlar.
			yas++;
		}
};

int main(){
	Insan insan1;						//Bu þekilde insan sýnýfýndan insan1 nesnesini oluþturduk.
	Insan insan2;
	
	insan1.isim="Batu";
	insan1.gozRengi="Kahve";
	insan1.sacRengi="Siyah";
	
	insan2.isim="Enes";
	insan2.gozRengi="Gozleri yok";
	insan2.sacRengi="Siyah";
	insan2.yas=20;
	insan2.buyumek();
	
	
	cout<<insan2.isim<<" "<<insan2.gozRengi<<" "<<insan2.yas;
	
	
	
	return 0;
}
