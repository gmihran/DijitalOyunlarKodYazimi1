#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
#include <string>
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
	int secim, tahmin, random, i, kontrol = 0;
	int sayi1, sayi2, islem, puan=0, hak=3;
	float sonuc, sonuctahmin;
	string yazitura;
	do
	{
		system("cls");
		//console ekranýný temizler

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
			random = rand() % 101 + 0;
			cout << random << endl;
			//Son deðer=101+0-1=100 
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

		case 2:
		{
			random = rand() % 10 + 1;
			cout << random << endl;
			cout << "1-Kitap, 2-Kalem, 3-Defter, 4-Kaðýt, 5-Kedi, 6-Köpek, 7-Kuþ, 8-Bilgisayar, 9-Klavye, 10-Ördek\n";
			cout << "Tahmininiz:";
			cin >> tahmin;
			if (tahmin == random)
				cout << "Tebrikler bildiniz\n";
			else
				cout << "Üzgünüm bilemediniz\n";
		}
			break; //case 2 sonlandýrýldý 

		case 3:
		{
		git:
			sayi1 = rand() % 20 + 1;
			sayi2 = rand() % 20 + 1;
			islem = rand() % 5 + 1;
			if (islem == 1)
			{
				cout << sayi1 << "*" << sayi2 << "=";
				sonuc = sayi1 * sayi2;
			}
			else if (islem == 2)
			{
				cout << sayi1 << "/" << sayi2 << "=";
				sonuc = sayi1 / sayi2;
			}
			else if (islem == 3)
			{
				cout << sayi1 << "+" << sayi2 << "=";
				sonuc = sayi1 + sayi2;
			}
			else if (islem == 4)
			{
				cout << sayi1 << "-" << sayi2 << "=";
				sonuc = sayi1 - sayi2;
			}
			else if (islem == 5)
			{
				cout << sayi1 << "^" << sayi2 << "=";
				sonuc = pow(sayi1,sayi2);
			}
			cin >> sonuctahmin;
			if (sonuc == sonuctahmin)
			{
				cout << "Bildiniz. Puanýnýz:" << ++puan << endl;
			}
			else
			{
				cout << "Bilemediniz. Puanýnýz:" << puan << endl;
				cout << "Sonuc:" << sonuc << endl;
				cout << "Kalan hakkýnýz:" << --hak << endl;
			}
			cout << endl;
			if (hak > 0)
				goto git;
		}
		break; //case 3 sonlandýrýldý 

		case 4:
		{
			random = rand() % 2 + 1; //1 - YAZI, 2 - TURA
			cout << "Tahmininiz: YAZI / TURA :";
			cin >> yazitura;
			//1.yöntem:
			if (random == 1 && yazitura == "YAZI")
				cout << "Tebrikler. Doðru tahmin!\n";
			else if (random == 2 && yazitura == "TURA")
				cout << "Tebrikler. Doðru tahmin!\n";
			else
			{
				cout << "Üzgünüm. Yanlýþ tahmin!\n";
				if (random == 1)
					cout << "YAZI" << endl;
				else
					cout << "TURA" << endl;
			}
				
			//2.yöntem: 
			/*
			if ((random == 1 && yazitura == "YAZI") || (random == 2 && yazitura == "TURA"))
				cout << "Tebrikler. Doðru tahmin!\n";
			else
				cout << "Üzgünüm. Yanlýþ tahmin!\n";
			*/
			

		}
		break; //case 4 sonlandýrýldý 

		case 5:
		{

		}
		break; //case 5 sonlandýrýldý 

		default:
			break;
		}
		system("pause");
	} while (secim != 6);
}
