//iki kenarý verilen üçgenin diðer kenarýnýn alabileceði aralýk deðerini bulma

#include <stdio.h>

int main (void)

{
	int kenar1;
	int kenar2;
	int toplam;
	int fark;
	
	printf ("lutfen birinci kenarinizi yaziniz : ");
	scanf ("%d", &kenar1);
	
	printf ("lutfen ikinci kenarinizi yaziniz : ");
	scanf ("%d",&kenar2);
	
	toplam = kenar1+kenar2;
	
	if (kenar1>kenar2)
	{
		fark = kenar1 - kenar2 ;
		printf ("Diger kenariniz %d ile %d arasinda deger alir.",fark,toplam);
	}
	else
	{
		fark = kenar2-kenar1 ;
		printf("Diger kenariniz %d ile %d arasinda deger alir",fark,toplam) ;
		
	}
	
	
	
	
}
