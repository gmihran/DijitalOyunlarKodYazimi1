
#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	/*
	//Klavyeden girilen kelimenin karakter sayýsýný ekrana yazdýralým
	//Karakter sayýsý 5'den küçükse karesini hesaplayalým.
	//Karakter sayýsý 5'den büyükse karekökünü hesaplayalým.
	//Karekter sayýsý 5'e eþitse kelimeyi 5 kere ekrana yazdýralým.
	string kelime;
	int uzunluk, i;
	cout << "Kelime...:";
	cin >> kelime;
	uzunluk = kelime.length();
	cout << "Uzunluk:" << uzunluk << endl;
	if (uzunluk < 5)
		cout << "Kare:" << pow(uzunluk, 2) << endl;
	//pow(taban,us) verilen deðerin üsse göre kuvvetini alýr.
	else if (uzunluk > 5)
		cout << "Karekök:" << sqrt(uzunluk) << endl;
	else
	{
		for (i = 1; i <= 5; i = i + 1)
		{
			//eðer {} kullanmasaydýk for döngüsü sadece 
			//kendisinden sonra gelen adýmý çalýþtýracaktý.
			cout << kelime << endl;
			cout << i << endl;
		}
		cout << "i:" << i << endl;
	}
	cout << "if bloðu sona erdi." << endl;

	*/
	//0-100 arasý girilen sýnav notunu harf notuna çeviriniz
	//Eðer sayý 0 ile 100 arasýnda deðilse kullanýcýdan
	//tekrar not istenecek
	/*
	//Bu notlar gerçeði yansýtmamaktadýr. :)
	80-100 AA
	60-79 BB
	50-59 CC
	40-49 DD
	0-39 FF
	*/
	int puan;
git:
	cout << "Sýnav notu:";
	cin >> puan;
	if (puan < 0 || puan>100)
		goto git;
	else if (puan >= 80)
		cout << "Harf Notu:AA";
	else if (puan >=60)
		cout << "Harf Notu:BB";
	else if (puan>=50)
		cout << "Harf Notu:CC";
	else if (puan>=40)
		cout << "Harf Notu:DD";
	else
		cout << "Harf Notu:FF";
}
