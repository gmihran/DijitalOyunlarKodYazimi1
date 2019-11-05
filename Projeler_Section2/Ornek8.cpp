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
	
	cout << "Bir sayý girin:";
	cin >> sayi;
	for (i = 1; i <= sayi/2; i++)
	//Bir sayý yarýsýndan daha büyük sayýlara tam bölünemez
	//Bu yüzden döngüyü sayýnýn yarýsýna kadar sürdürdük
		if (sayi%i == 0)
			toplam += i; //toplam=toplam+i;
	if (toplam == sayi)
		cout << "Mükemmel sayýdýr." << endl;
	else
		cout << "Mükemmel sayý deðildir." << endl;
	
	//Girilen 2 sayý arasýndaki mükemmel sayýlarý yazdýralým
	//int sayi, i, toplam=0;
	int s1, s2;
	
	cout << "2 sayý giriniz:";
	cin >> s1 >> s2;
	//Eðer ilk sayý büyük ise yer deðiþtirme algoritmasý kullanalým
	if (s1 > s2)
		swap(s1, s2);
	//swap yer deðiþtirme fonksiyonudur.
	//cout << s1 << " " << s2;
	
	for (sayi = s1; sayi <= s2; sayi++)
	{
		toplam = 0;
		//Her sayý deðiþtiðinde toplam deðerini sýfýrladýk.
		for (i = 1; i <= sayi / 2; i++)
			if (sayi%i == 0)
				toplam += i;
		if (toplam == sayi)
			cout << sayi << " ";
	}
	cout << endl;
	//Kullanýcýnýn girdiði deðer kadar fibonacci serisi sayýlarýný ekrana yazdýralým
	//Kullanýcýnýn girdiði deðer en az 2 olmalýdýr. 2'den daha küçük bir deðer girerse; 2'den büyük ya da 2'eþit bir deðer girene kadar kullanýcýdan deðer isteyelim.
	//Örn: Kullanýcý 5 girerse; 0 1 1 2 3  
	//Örn: Kullanýcý 11 girerse; 0 1 1 2 3 5 8 13 21 34 55
	
	int a = 0, b = 1, c;
	
	//for sonsuz döngü ile yapalým:
	for (;;)
	{
		cout << "Sayý:";
		cin >> sayi;
		if (sayi >= 2)
			//Eðer sayý 2'den büyük veya 2'ye eþit ise döngü break ifadesi ile kýrýlýr
			break;
	}
	cout << a << " " << b << " ";
	for (i = 1; i <= sayi - 2; i++)
	//Döngünün sayi-2'ye kadar gitmesinin sebebi ilk 2 sayýyý yazdýrmýþ olmamýzdýr.
	{
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;

	}
	cout << endl;
	//continue : Kendisinden sonra gelen satýrlarý çalýþtýrmadan döngünün baþýna gitmeyi saðlar
	//0 ile 50 arasýndaki tek sayýlarý ekrana yazdýralým
	cout << "0-50 arasýndaki tek sayýlar:" << endl;
	for (i = 0; i <= 50; i++)
	{
		if (i % 2 == 0)
			continue;
		cout << i << " ";
	}
	cout << endl;
	//Kullanýcýnýn girdiði 2 deðer arasýndaki sayýlardan 2 veya 3 sayýsýna tam bölünen sayýlarýn toplamýný ekrana yazdýralým 
	toplam = 0;
	cout << "Ýki sayý girin:";
	cin >> s1 >> s2;
	if (s1 > s2)
		swap(s1, s2);
	for (i = s1; i <= s2; i++)
	{
		if (i % 2 != 0 && i % 3 != 0)
			continue;
		cout << i << " ";
		toplam += i;
	}
	cout << "Toplam=" << toplam;

}

