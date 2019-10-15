
#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	//Klavyeden girilen kelimenin karakter sayýsýný ekrana yazdýralým
	//Karakter sayýsý 5'den küçükse karesini hesaplayalým.
	//Karakter sayýsý 5'den büyükse karekökünü hesaplayalým.
	//Karekter sayýsý 5'e eþitse kelimeyi 5 kere ekrana yazdýralým.
	string kelime;
	int uzunluk,i;
	cout << "Kelime:";
	cin >> kelime;
	uzunluk = kelime.length();
	cout << uzunluk << endl;
	if (uzunluk < 5)
		cout << uzunluk << " karesi=" << pow(uzunluk, 2) << endl;
	else if (uzunluk > 5)
		cout << uzunluk << " karekökü=" << sqrt(uzunluk) << endl;
	else
	{
		for (i = 1; i <= 5; i = i + 1)
		{
			cout << kelime << endl;
			cout << i << endl;
		}
		cout << "else çalýþtý. döngü bitti i=" << i << endl;
		//i döngünün içinde tanýmlansaydý, döngü bittikten
		//sonra kullanmaya devam edemeyecektik.
		//i kapsamý : main içerisinde kullanýlabilir.
	}	
	cout << "Þartlý yapýmýz sona erdi" << endl;		
	//cout << sqrt(25); //25 sayýsýnýn karekökü hesaplandý 
	//cout << pow(25, 1 / 2); //25 sayýsýnýn karekökü hesaplandý
	


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
	git:cout << "Not giriniz...:";
	cin >> puan;
	if (puan < 0 || puan>100)
	{
		cout << "Geçersiz bir not girdiniz. Tekrar giriniz." << endl;
		goto git;
	}
	else if (puan >= 80)
		cout << "Harf notu=AA";
	else if (puan >= 60)
		cout << "Harf notu=BB";
	else if (puan >= 50)
		cout << "Harf notu=CC";
	else if (puan >= 40)
		cout << "Harf notu=DD";
	else
		cout << "Harf notu=FF";
}

