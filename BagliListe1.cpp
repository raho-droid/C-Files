#include <iostream>										//Bu amk kodunda bir þeyler yanlýþ ama sonra düzelticem.
using namespace std;
class Dugum
{
	public:
		Dugum()							//Node.
		{
			pSonraki=NULL;				// Burasý baþ pointera uzaydaki hiçliði atadýðýmýz kýsým.
		}
		int veri;						// Bu kýsýmda istediðimiz verileri tanýmlýyoruz ve en son diðer düðümü bulmasý için kullanýlacak pointerý belirliyoruz.
		Dugum* pSonraki;
};
 Dugum * SonaEkle(Dugum* pBas,Dugum* pEklenen)			//Ýlk deðiþken baþ pointerý ikinci ise eklenecek düðümün pointerýný gösterir.
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
	while(pBas->pSonraki->pSonraki!=NULL)			//Son elemandan önceki elemanýn adresini null yaparsak son eleman çýkarýlýr bunun için 2 önceki elemaný kullanýrýz.
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
	
	Dugum* p1= new Dugum();				//Hafýzadan Yeni veri ve pointer için yer ayrýlýr. Ayrýca bu iþ için malloc fonksiyonuda kullanýlabilir.
	p1->veri= 3;						// p1 pointerýnýn gösterdiði veri deðerini atamak için kullanýlýr. Listenin baþ pointerý kaybolursa liste kaybolur o yüzden önemlidir.
	Dugum* p2= new Dugum();
	p2->veri=11;
	p1->pSonraki=p2;
	Dugum* p3= new Dugum();
	p3->veri=25;
	p2->pSonraki=p3;
	Dugum* p4= new Dugum();
	p4->veri=61;
	p3->pSonraki=p4;
	Dugum* pTemp=p1;  				   //Aralarýnda gezecek yeni bir pointer tanýmlayýp onu baþ pointerýn yedeði olarak atarýz.

	while(pTemp->pSonraki!=NULL)	   //pTempin sonraki deðeri 0 olmadýðý sürece çalýþýr. Ama son elemaný basmaz çünkü son elemanýn adresi 0dýr.
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
