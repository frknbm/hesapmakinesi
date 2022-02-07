#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

 int secim;
 float a,b;
tekrar1: printf("\n4 islem icin                     :1\n");
 printf("ozel matematik fonksiyonlari icin:2\n");
 printf("secim yapiniz:");
 scanf("%d",&secim);
 if(secim==1)
{
git:	printf("\n\ntoplama icin:1\n\ cikarma icin:2\n carpma icin:3\n bolme icin:4\n");
	printf("yukaridan islem seciniz:");
	scanf("%d",&secim);

	switch(secim)
	{
		case 1: printf("\n\nislem yapilacak sayilari girin:"); 	scanf("%f %f",&a,&b); printf("toplam sonucunuz:%.0f",a+b);  break;
		case 2:printf("\n\nislem yapilacak sayilari girin:");	scanf("%f %f",&a,&b);	 printf("cikarma sonucunuz:%.0f",a-b); break;
		case 3:printf("\n\nislem yapilacak sayilari girin:");	scanf("%f %f",&a,&b); printf("carpma sonucunuz:%.0f",a*b);  break;
        case 4: tekrar:printf("\n\nislem yapilacak sayilari girin:");	scanf("%f %f",&a,&b); if(b==0){printf("bolen 0 olamaz tekran secim yapiniz!!!!!!!\a\a\a");goto tekrar;	break;	}  printf("bolme islem sonucunuz:%f",a/b); break;
		default: printf("\nyanlis deger sectiniz.!!!!tekrar deger seciniz.\n"); goto git;  break;
	}
	
	
}
  else if(secim==2)
{
  git1:	printf("\nkarekok icin:1\n  ustlu sayi almak icin:2\n \nyukaridan islem seciniz:");
  	scanf("%d",&secim);
  	switch(secim)
  	{
  		case 1: printf("islem yapilacak sayiyi giriniz:"); scanf("%f",&a); printf("karekoklu sonucunuz:%.1f",sqrt(a)); break;
  	    case 2: printf("islem yapilacak sayilari  giriniz (ilk taban sonraki gireceðiniz sayi ust olacak sekilde):"); scanf("%f   %f",&a,&b); printf("usttlu ifade sonucunuz:%.1f",pow(a,b)); break;
        default: printf("\nyanlis islem sectiniz!!!!\a\n"); goto git1; break;
	}
}
else
{
	printf("\nyanlis islem sectiniz!!!!\a\a\a\n"); goto tekrar1; 
}











































	return 0;
}
