#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	//Program her çalýþtýrýldýðýnda rastgele farklý deðerler üretmesini saðlar

	setlocale(LC_ALL, "turkish");
	//Türkçe karakterlerin ekranda görünmesini saðladýk
	/*Menü
	1-Sayý Tahmin Etme Oyunu
		0-100 sayý aralýðýnda random sayý üretilecek
		Kiþiye 3 tahmin hakký verilecek
	2-Kelime Tahmin Etme Oyunu
		10 kelimemiz var. Kullanýcý rastgele gelen kelimeyi tahmin etmeye çalýþacak
	3-Matematik Ýþlem Hesaplama Oyunu
		Random matematik sorularý gelecek
		Ýþlemler ve sayýlar rastgele olacak
		Kiþi iþlemin sonucu girecek
		3 kere yanma hakký var
		Her doðru bildiðini iþlemde de puan kazanacak
	4-YAZI TURA Oyunu
		Random yazý tura gelecek
		Kiþi tahmin etmeye çalýþacak
		3 kere oynayacak
	5-Taþ Kaðýt Makas Oyunu
		Bilgisayar random taþ,kaðýt,makas seçecek
		Kullanýcýnýn girdiði deðere göre kazanan bulunacak
		Taþ - Makas -> Taþ
		Kaðýt - Makas -> Makas
		Taþ - Kaðýt -> Kaðýt
	6-Çýkýþ
	*/
	int secim;
	do
	{
		system("cls");
		cout << "Menü\n";
		cout << "1-Sayý Tahmin Etme Oyunu\n";
		cout << "2-Kelime Tahmin Etme Oyunu\n";
		cout << "3-Matematik Ýþlem Hesaplama Oyunu\n";
		cout << "4-YAZI TURA Oyunu\n";
		cout << "5-Taþ Kaðýt Makas Oyunu\n";
		cout << "6-Çýkýþ\n";
		cout << "Seçiminiz:";
		cin >> secim;
		switch (secim)
		{
		case 1:
		{
			int tahmin, random, i;
			random = rand() % 101 + 0;
			cout << random << endl;
			//Son deðer=101+0-1=100
			int kontrol = 0;
			for (i = 1; i <= 3; i++)
			{
				cout << "Tahmininiz:";
				cin >> tahmin;
				if (random == tahmin)
				{
					cout << "Tebrikler. Bildiniz\n";
					kontrol = 1;
					break;
					
				}
				else
					cout << "Üzgünüm. Bilemediniz\n";
			}
			if (kontrol == 0)
				cout << "Game over\n";

		}
		break; //case 1 sonlandýrýldý 
		default:
			break;
		}
		system("pause");
	} while (secim != 6);
}
