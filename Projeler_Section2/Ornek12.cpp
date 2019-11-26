#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	//Çýktýda Türkçe karakterlerin görünmesini saðlar.
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
	4-Yazý Tura Oyunu
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
	int secim,random,tahmin,i;
	srand(time(NULL));
	
	do
	{
		system("cls");
		cout << "Menü\n";
		cout << "1-Sayý Tahmin Etme Oyunu\n";
		cout << "2-Kelime Tahmin Etme Oyunu\n";
		cout << "3-Matematik Ýþlem Hesaplama Oyunu\n";
		cout << "4-Yazý Tura Oyunu\n";
		cout << "5-Taþ Kaðýt Makas Oyunu\n";
		cout << "6-Çýkýþ\nSeçiminiz:\n";
		cin >> secim;
		switch (secim)
		{
		case 1:
		{
			random = rand() % 101 + 0;
			//0 ile 100 arasýnda rastgele deðer üretir
			//Son deðer = 101+0-1=100
			for (i = 1; i <= 3; i++)
			{
				//cout << random << endl;
				cout << "Tahmin Ettiðiniz Sayý:";
				cin >> tahmin;
				if (tahmin == random)
				{
					cout << "Tebrikler bildiniz\n";
					break;
				}
				else
					cout << "Üzgünüm bilemediniz\n";
			}
		}
			break; //case 1 break ile sonlandýrýldý
		case 2:
		{
			random = rand() % 10 + 1;
			//cout << random << endl;
			cout << "1-Kitap,2-Kalem,3-Defter,4-Uçak,5-Okul,6-Sýnýf,7-Kuþ,8-Kedi,9-Köpek,10-Balýk\nTahmininiz:";
			cin >> tahmin;
			if (random == tahmin)
				cout << "Tebrikler bildiniz\n";
			else
				cout << "Üzgünüm bilemediniz\n";
		}	
			break; //case 2 sonlandýrýldý
		case 3:
		{
			int puan = 0, sayi1, sayi2, islem, hak = 3;
			double sonuc, tahmin;
		git:
			sayi1 = rand() % 20 + 1;
			sayi2 = rand() % 20 + 1;
			islem= rand() % 5 + 1;
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
			cin >> tahmin;
			if (sonuc == tahmin)
			{
				cout << "Bildiniz. Puanýnýz:" << ++puan;
			}
			else
			{
				cout << "Bilemeniz. Puanýnýz:" << puan;
				cout << "\nKalan Hakkýnýz:" << --hak;
			}
			cout << endl;
			if (hak > 0)
				goto git;
		}
			break;
		case 4:
		{
			string yazitura;
			random = rand() % 2 + 1; //1-Yazý 2-Tura
			cout << random << endl;
			cout << "YAZI / TURA Tahmininiz:";
			cin >> yazitura;
			if (yazitura == "YAZI" && random == 1)
				cout << "Bildiniz\n";
			else if (yazitura == "TURA" && random == 2)
				cout << "Bildiniz\n";
			else
				cout << "Bilemediniz\n";
		}
			break; //case 4 sonlandýrýldý
		default:
			cout << "Geçersiz giriþ\n";
			break;
		}
	system("pause");
	} while (secim!=6);
}
