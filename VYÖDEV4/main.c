#include <stdio.h>
#include <stdlib.h>

	
	struct ogrenciBilgileri{
		
		char ogrenciIsim[30];
		char ogrenciSoyad[30];
		int  ogrenciNo;
		char ogrenciAdres[50];

	};
	
int main(int argc, char *argv[]) {
printf("Bahar Urundiker 1220505018 \n KLU Veri yapilari ve algoritmalar odevi\n 4.soru 5 adet ogrencinin kisisel bilgilerini(ad, soyad, no...) ve adres bilgilerini depolayan struct tanimlayiniz\n ve bu yapiyi kullanarak ekranda gosteren kodu yaziniz.\n");
struct ogrenciBilgileri ogrenciler[5];
int n=0;

while(n<5){
	printf("Lutfen sirasiyla %d. ogrencinin isim,soyad,no ve adres bilgilerini giriniz\n",n+1);
	scanf("%s \n %s \n %d \n %s",&ogrenciler[n].ogrenciIsim,&ogrenciler[n].ogrenciSoyad,&ogrenciler[n].ogrenciNo,&ogrenciler[n].ogrenciAdres);
	n++;
}


for(n=0;n<5;n++){
	printf("%d. ogrencinin kisisel bilgileri = %s %s %d %s\n",n+1,ogrenciler[n].ogrenciIsim,ogrenciler[n].ogrenciSoyad,ogrenciler[n].ogrenciNo,ogrenciler[n].ogrenciAdres);
}
	
	

	return 0;
}
