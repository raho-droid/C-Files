#include <iostream>										//Bu amk kodunda bir �eyler yanl�� ama sonra d�zelticem.
using namespace std;
class Dugum
{
	public:
		Dugum()							//Node.
		{
			pSonraki=NULL;				// Buras� ba� pointera uzaydaki hi�li�i atad���m�z k�s�m.
		}
		int veri;						// Bu k�s�mda istedi�imiz verileri tan�ml�yoruz ve en son di�er d���m� bulmas� i�in kullan�lacak pointer� belirliyoruz.
		Dugum* pSonraki;
};
 Dugum * SonaEkle(Dugum* pBas,Dugum* pEklenen)			//�lk de�i�ken ba� pointer� ikinci ise eklenecek d���m�n pointer�n� g�sterir.
{
Dugum* pTemp3=pBas;
while(pTemp3!=NULL)
	{
	
		pTemp3=pTemp3->pSonraki;
	}	
	pTemp3->pSonraki=pEklenen;
	pEklenen->pSonraki=NULL;
	
}

Dugum* SondanCikar(Dugum* pBas){
	while(pBas->pSonraki->pSonraki!=NULL)			//Son elemandan �nceki eleman�n adresini null yaparsak son eleman ��kar�l�r bunun i�in 2 �nceki eleman� kullan�r�z.
	{
		pBas=pBas->pSonraki;
	}
	Dugum* pTemp6=pBas->pSonraki;
	pBas->pSonraki=NULL;
	return pTemp6;
}

void arayaEkle(Dugum* pBas,Dugum* pEklenecek,int sira)
{
	int i=0;
	Dugum* pTemp9=pBas->pSonraki;
	while(i<sira-2)
	{
		pBas=pBas->pSonraki;
		pEklenecek->pSonraki=pBas->pSonraki;
		pBas->pSonraki=pEklenecek;
	
		i++;
	}
	
}

Dugum* AradanCikar(Dugum* pBas,int sira){
	Dugum* pTemp10= pBas->pSonraki;
		for(int i=0;i<sira-2;i++)
		{
			pBas=pBas->pSonraki;
		}
		pBas->pSonraki=pBas->pSonraki->pSonraki;
}

int main()
{
	
	Dugum* p1= new Dugum();				//Haf�zadan Yeni veri ve pointer i�in yer ayr�l�r. Ayr�ca bu i� i�in malloc fonksiyonuda kullan�labilir.
	p1->veri= 3;						// p1 pointer�n�n g�sterdi�i veri de�erini atamak i�in kullan�l�r. Listenin ba� pointer� kaybolursa liste kaybolur o y�zden �nemlidir.
	Dugum* p2= new Dugum();
	p2->veri=11;
	p1->pSonraki=p2;
	Dugum* p3= new Dugum();
	p3->veri=25;
	p2->pSonraki=p3;
	Dugum* p4= new Dugum();
	p4->veri=61;
	p3->pSonraki=p4;
	Dugum* pTemp=p1;  				   //Aralar�nda gezecek yeni bir pointer tan�mlay�p onu ba� pointer�n yede�i olarak atar�z.

	while(pTemp->pSonraki!=NULL)	   //pTempin sonraki de�eri 0 olmad��� s�rece �al���r. Ama son eleman� basmaz ��nk� son eleman�n adresi 0d�r.
	{
		cout<<pTemp->veri;
		pTemp=pTemp->pSonraki;
		
	}
	cout<<endl;
	Dugum* pTemp2=p1;
	while(pTemp2!=NULL)
	{
		cout<<pTemp2->veri;
		pTemp2=pTemp2->pSonraki;
	}
	Dugum* p5= new Dugum();
	p5->veri=10;
//	SonaEkle(p1,p5);
//	SondanCikar(p1);

	Dugum* pTemp4=p1;
	cout<<endl;
	while(pTemp4!=NULL)
	{
	cout<<pTemp4->veri;
		pTemp4=pTemp4->pSonraki;	
	}
	
	Dugum* p6= new Dugum();
	p6->veri=31;
	arayaEkle(p1,p6,3);
	
			cout<<endl;
	Dugum* pTemp11=p1;
	while(pTemp11!=NULL)
	{
		cout<<pTemp11->veri;
		pTemp11=pTemp11->pSonraki;
	}

	AradanCikar(p1,2);
		cout<<endl;
	Dugum* pTemp8=p1;
	while(pTemp8!=NULL)
	{
		cout<<pTemp8->veri;
		pTemp8=pTemp8->pSonraki;
	}
}
