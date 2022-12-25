#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int sayac[2]={0,0};int secim[2]={0,0};	int sayi[2][3]={}; int i1=0,y1=0; int sayma[2][3]={2,3,8,9,7,6}; 
int fiyat3=0,fiyat1=0,hiz1=0,yil1=0,kisi1=0,gb1=0,secim2=0; 
FILE*dosya;
int tc=0;
   tekrar:
 	printf("				*******BISE YARAMAYAN NET*******\n");
	printf(" 1.Interneti bireysel alacaksaniz 1'e basiniz\n ");
	printf("2.Kurumal alicaksaniz 2'ye basiniz \n ");
	printf("3.Mobil icin internet alicaksaniz 3'e basiniz\n ");
	printf("4.Tasinabilir paket servisleri icin 4'e basiniz\n ");
	printf("5.Sans oyunlari icin 5'e basiniz\n ");
		while(1)
		{
	char isim[50];
	int secim1=0;
	scanf("%d",&secim1);
	switch(secim1)
	{
		case 1: 

		
		sayac[0]=1+sayac[0];
		case1(fiyat1,hiz1,yil1,kisi1);
	
	dosya=fopen("fiyatlandirma.txt","w");
	printf("\ntc nizi giriniz");
	scanf("%d",&tc);
	fclose(dosya);
	
	if(sayac[0]%10==0)
	{
		
		fiyat1=(fiyat1*96)/100;
		printf("Yuzde %6 indirim daha kazandiniz yeni fiyatiniz %d",fiyat1);
	}
		break;
		case 2:
		case2(fiyat1,hiz1,yil1,kisi1);
		dosya=fopen("fiyatlandirma.txt","w");
	printf("\ntc nizi giriniz");
	scanf("%d",&tc);
	fclose(dosya);
		break;
		case 3:
	case3(secim1,secim2,yil1,gb1,fiyat1);
	dosya=fopen("fiyatlandirma.txt","w");
	printf("\ntc nizi giriniz");
	scanf("%d",&tc);
	fclose(dosya);
		break;
		case 4:
	
	secim2=case4(fiyat1,secim2);
if(secim2>4)
	goto tekrar;
else
	dosya=fopen("fiyatlandirma.txt","w");
	printf("\ntc nizi giriniz");
	scanf("%d",&tc);
	fclose(dosya);
	break;
		case  5:
		case5(i1,y1,sayac[1]);
		default:
			printf("!!!!Hatali secim tekrar seciniz\n");
			goto tekrar;
		break;
	}
	dosya=fopen("fiyatlandirma.txt","r");
	
	fscanf(dosya,"%d",&tc);
	printf("%d ye ait satin alinim gerceklesmistir",tc);
	fclose(dosya);
	
}
	return 0;
}
int case2(fiyat,hiz,yil,kisi){
	printf("Seciminiz kurumsaldir\n");
		printf("Kac mbps hiz istiyorsunuz?");
		scanf("%d",&hiz);
		printf("Kac yil bu internet saglayicisini kullandiniz kullanmadiysaniz 0 giriniz?");
		scanf("%d",&yil);
		printf("Kurumda kac kisi calisiyor?");
		scanf("%d",&kisi);
		if(hiz>100)
		{
			fiyat=hiz*5;
		}
		else
		{
			fiyat=(hiz*15)/5;
		}
		if(1000<kisi)
		{
			fiyat=(fiyat*110)/100;
		}
		else if(1000>kisi && 500<kisi)
		{
			fiyat=(fiyat*108)/100;
		}
		else if(500>kisi && 100<kisi)
		{
			fiyat=(fiyat*105)/100;
		}
		else
		{
			fiyat=(fiyat*103)/100;
		}
		if(yil>=5)
		{
			fiyat=(fiyat*95)/100;
			printf("%d fiyat budur\n");
		}
	return fiyat;	
} 
int case1(hiz,yil,fiyat){int sayac=0;
		
	printf("Seciminiz bireyseldir\n");
	printf("Kac mbps hiz istiyorsunuz?");
	scanf("%d",&hiz);
	printf("Kac yil bu internet saglayicisini kullandiniz kullanmadiysaniz 0 giriniz");
	scanf("%d",&yil);
	if(hiz>100)
	{
		fiyat=hiz*30;
	}
	else
	{
		fiyat=(hiz*150)/10;
	}
	if(yil>5)
	{
		fiyat=(fiyat*95)/100;
		printf("%d fiyat budur\n",fiyat);
	}
	else
	{
		printf("%d fiyat budur\n",fiyat);
	}
	
	return fiyat;
}
int case3(secim1,secim2,yil,gb,fiyat){
		printf("mobil odeme tarafina gectiniz\n");
		printf("bu internet saglayicisina ait hattinizi var mi var ise 1'i yok ise 2 yi tuslayiniz\n");
		scanf("%d",&secim1);
		if(secim1==1)
		{
			printf("kac yillik kullanicisiniz");
			scanf("%d",&yil);
			printf("%d lik indirim kazandiniz\n",yil);
			printf("kac gb internet istiyorsunuz");
			scanf("%d",&gb);
			
		}
		else
		{
			printf("hat olusturmak istermisiniz evet ise 1,hayir ise 2\n");
			scanf("%d",&secim2);
			printf("kac gb internet istiyorsunuz");
			scanf("%d",&gb);
		switch(secim2)
			{
			case 1:
			printf("hat ucreti 10tl dir\n");
			fiyat=10;
			}
			
		}
		fiyat=(gb*10)+fiyat;
		fiyat=((100-yil)*fiyat)/100;
		printf("fiyat budur %d",fiyat);
		
		
		
		
		
		return fiyat;
	}
	
	int case4(fiyat,secim3){int sayac=0;
		printf("tasinabilir internet kutulari \n");
		for(sayac=1;sayac<5;sayac++)
		{
			
			switch(sayac)
			{
			
			case 1:
				printf("%d 100 gb internet 200tl dir almak \n",sayac);
				break;
			case 2:
				printf("%d 200 gb internet 350tl dir\n",sayac);
				break;
			case 3:
				printf("%d 400 gb internet 480 tl dir\n",sayac);
				break;
			case 4:
				printf("%d kotasiz internet 800 tl dir\n",sayac);
				break;
			default: 
				break;
			}
				
		}
		printf("Alacaginiz tasinabilir internetlerden seciminizi onundeki numaralardan yapiniz");
		scanf("%d",&secim3);
		switch(secim3)
		{
		case 1:
		fiyat=200;
		printf("Fiyat %d tl dir modem parasida fiyatlara dahildir",fiyat+20);
		break;
		case 2:
		fiyat=350;
		printf("Fiyat %d tl dir modem parasida fiyatlara dahildir",fiyat+30);
		break;
		case 3:
		fiyat=480;
		printf("Fiyat %d tl dir modem parasida fiyatlara dahildir",fiyat+40);
		break;
		case 4:
		fiyat=800;
		printf("Fiyat %d tl dir modem parasida fiyatlara dahildir",fiyat+50);
		break;
		default: 
		 		printf("hatali secim\n");
		 		printf("ana menuye yonlendiriyordusunuz\n");
		 		
			break;
		}
	return secim3;
}
int case5(i,y,sayac){	printf("Sans oyununa hos geldiniz  sirasiyla 9 sayiyi tutturunan araba kazanacaktir\n");
		int sayi[2][3]={}; int sayma[2][3]={2,3,8,9,7,6};
			for(i=0;i<2;i++)
			{
				for(y=0;y<3;y++)
				{
					printf("Siradaki sayiyi girin girmeye baslayiniz\n");
					scanf("%d",&sayi[i][y]);
					if(sayi[i][y]==sayma[i][y])
					{
						sayac++;
						printf("Basarili\n");
					}
					else
					{
						printf("Hatali\n");
						printf("Bir dahaki sefere");
						return 0;
					}
				}
			}
			if(sayac==6)
			{
				printf("Kazandiniz");
			}

	return 0;
}
