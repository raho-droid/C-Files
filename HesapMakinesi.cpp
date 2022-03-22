#include <stdio.h>
using namespace std;
int main(){
	int x,y,z;
	for(;;){
		printf("Yapmak istediginiz islemi seciniz \n 0 = Cikis \n ");
		printf("1 = Toplama \n 2 = Cikarma \n 3 = Carpma \n");
		printf("4 = Bolme \n ");
			scanf(z);
				if(z==0){
					printf("Gule Gule...");
						break;
				}
				else if(z==1){
					printf("Toplamak istediginiz sayilari arada bosluk birakarak giriniz.");
						scanf(x,y);
					printf("Cevap = \n"+(x+y));
				}
				else if(z==2){
					printf("Cikarmak istediginiz sayilari arada bosluk birakarak sayilari giriniz.");
						scanf(x,y);
					printf("Cevap = \n"+(x-y));
				}
				else if(z==3){
					printf("Carpmak istediginiz sayilari arada bosluk birakarak sayilari giriniz.");
						scanf(x,y);
					printf("Cevap = \n"+(x*y));
				}
				else if(z==4){
					printf("Bolmek istediginiz sayilari once bolunen sonra bolen olmak uzere arada bosluk birakarak giriniz.");
						scanf(x,y);
							if(y==0){
								printf("Bir sayiyi 0'a bolemezsiniz yeni bir bolen giriniz");
									scanf(y);
								printf("Cevap = \n"+(x/y));	
							}
							else{
								printf("Cevap = \n"+(x/y));
							}
					}
					else{
						printf("Gecersiz islem yaptiniz, lutfen tekrar seciniz");
				}
	}
}
