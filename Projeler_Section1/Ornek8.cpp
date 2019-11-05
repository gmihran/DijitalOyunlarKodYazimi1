#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	//Klavyeden girilen sayýnýn mükemmel sayý olup olmadýðýný bulalým.
	//Mükemmel sayý = Çarpanlarýnýn toplamý (1 dahil, kendisi dahil deðil) kendisine eþit olan sayýlardýr.
	//6 => 1+2+3=6 Mükemmel sayýdýr.
	//28 => 1+2+4+7+14=28 Mükemmel sayýdýr.
	//12 => 1+2+3+4+6=16 Mükemmel sayý deðildir.
	int sayi, i, toplam=0;
	
	cout << "Sayý:";
	cin >> sayi;
	for (i = 1; i <= sayi/2; i++)
		//Bir sayýnýn yarýsýndan daha büyük olan sayýlara bölünmesi mümkün deðildir.
		//Bu yüzden sayýnýn yarýsýný aldýk.
		if (sayi%i == 0)
			toplam += i; //toplam=toplam+i;
	if (toplam == sayi)
		cout << "Mükemmel sayýdýr." << endl;
	else
		cout << "Mükemmel sayý deðildir." << endl;
	

	//Girilen 2 sayý arasýndaki mükemmel sayýlarý yazdýralým
	int s1, s2;
	
	cout << "2 sayý girin:";
	cin >> s1 >> s2;
	//Eðer ilk girilen sayý daha büyükse deðiþkenlerin yerini deðiþtirelim
	if (s1 > s2)
		swap(s1, s2);
		//swap fonksiyonun iki deðerin içeriðini deðiþtirir. Yani s1 yerine s2 deðerini, s2 yerine s1 deðerini atar.
	for (sayi = s1; sayi <= s2; sayi++)
	{
		toplam = 0;
		//toplam deðeri her sayý için sýfýrlanýr
		for (i = 1; i <= sayi / 2; i++)
			if (sayi%i == 0)
				toplam += i;
		//Mükemmel sayý ise ekrana yazdýralým
		if (sayi == toplam)
			cout << sayi << endl;
		
	}

	
	//Kullanýcýnýn girdiði deðer kadar fibonacci serisi sayýlarýný ekrana yazdýralým
	//Kullanýcýnýn girdiði deðer en az 2 olmalýdýr. 2'den daha küçük bir deðer girerse; 2'den büyük ya da 2'eþit bir deðer girene kadar kullanýcýdan deðer isteyelim.
	//Örn: Kullanýcý 5 girerse; 0 1 1 2 3  
	//Örn: Kullanýcý 11 girerse; 0 1 1 2 3 5 8 13 21 34 55

	int a=0, b=1, c;
	
	for (;;)
		//Sonsuz döngü baþladý
	{
		cout << "Sayý:";
		cin >> sayi;
		if (sayi >= 2)
			//Eðer sayý 2'den büyük veya 2'ye eþitse döngüyü kýr
			break;
			//break döngüyü kýrar
	}
	cout << a << " " << b << " ";
	for (i = 1; i <= sayi - 2; i++)
	{
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
	

	//continue : Kendisinden sonra gelen satýrlarý çalýþtýrmadan döngünün baþýna gitmeyi saðlar
	//0 ile 50 arasýndaki tek sayýlarý ekrana yazdýralým
	for (i = 0; i <= 50; i++)
	{
		if (i % 2 == 0)
			//þart doðru olduðu takdirde continue ifadesi çalýþýr ve döngünün baþýna giderek döngünün devam etmesini saðlar
			//Yani kendinden sonraki satýr/satýrlar çalýþmaz
			continue;
		cout << i << " ";
	}
	cout << endl;
	//Kullanýcýnýn girdiði 2 deðer arasýndaki sayýlardan 2 veya 3 sayýsýna tam bölünen sayýlarýn toplamýný ekrana yazdýralým 
	cout << "2 deðer giriniz:";
	cin >> s1 >> s2;
	if (s1 > s2)
		swap(s1, s2);
	for (sayi = s1; sayi <= s2; sayi++)
	{
		if (sayi%2!=0 && sayi%3!=0)
			continue;
		cout << sayi << " ";
	}
}
