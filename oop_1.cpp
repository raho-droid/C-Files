#include <iostream>

using namespace std;

class Insan{							//S�n�f� olu�turup s�n�fa ait �zellikler tan�ml�yoruz.
	public:								//Public bir ileti�im belirtecidir ve bilgiyi eri�ilebilir yapar. 		
		string isim;
		string gozRengi;
		string sacRengi;
		int yas;
		int buyumek(){					//Metodlar fiillerdir ve fonksiyon olarak s�n�flara tan�mlan�rlar.
			yas++;
		}
};

int main(){
	Insan insan1;						//Bu �ekilde insan s�n�f�ndan insan1 nesnesini olu�turduk.
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
