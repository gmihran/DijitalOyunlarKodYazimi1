#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	//Girilen iki sayýdan büyük olanýnýn karesini ekrana yazdýralým. Eðer sayýlar birbirine eþitse sayýlardan herhangi birini alýp, karesini yazdýrabiliriz.
	//Ör:Klavyeden 10 5 sayýlarý girilirse; 100 çýktýsýný verecek
	//Ör:Klavyeden 10 10 sayýlarý girilirse; 100 çýktýsýný verecek 
	int sayi1, sayi2;
	
	cout << "Ýki sayý girin:";
	cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2)
		cout << "Karesi:" << sayi1 * sayi1;
	else
		cout << "Karesi:" << sayi2 * sayi2;
	cout << endl;
	
	//Girilen iki sayýdan büyük olanýnýn karesini ekrana yazdýralým. Eðer sayýlar birbirine eþitse sayýlardan birinin küpünü alalým.
	//Ör:Klavyeden 10 5 sayýlarý girilirse; 100 çýktýsýný verecek
	//Ör:Klavyeden 10 10 sayýlarý girilirse; 1000 çýktýsýný verecek 
	//int sayi1, sayi2;
	
	cout << "Ýki sayý girin:";
	cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2)
		cout << "Karesi:" << sayi1 * sayi1;
	else if (sayi2 > sayi1)
		cout << "Karesi:" << sayi2 * sayi2;
	else
		cout << "Küpü:" << sayi1 * sayi1 * sayi1;
		//cout << "Küpü:" << sayi2 * sayi2 * sayi2;
	cout << endl;
	//Klavyeden girilen 5 sayýdan en büyük sayýyý ve sayýnýn 2'ye bölümünden kalanýný ekrana yazdýralým.
	//Not: Bu problem çözümünde girilen deðerler bir deðiþkende tutulup, bu deðerler for döngüsünün içerisinde alýnacak ve en büyük sayý yine for döngüsünün içerisinde hesaplanacak
	int sayi, i, mak;
	
	for (i = 1; i <= 5; i++)
	{
		cout << i << ".sayýyý giriniz:";
		cin >> sayi;
		if (i == 1)
			//Eðer girilen sayý ilk sayý ise i deðeri 1'e eþittir
			//Ýlk girilen deðeri mak deðerine eþitledik
			mak = sayi;
		else if (sayi > mak)
			//Eðer girilen sayý mak deðerinden büyük ise bu sayýyý mak deðeri yaptýk
			mak = sayi;
	}
	cout << "Mak:" << mak << endl << mak <<" mod 2:"<< mak%2 <<  endl;
	
	//1 ile 100 arasýndaki 2 veya 7 sayýlarýna tam bölünebilen sayýlarý aralarýnda boþluk býrakarak yan yana ekrana yazdýralým
	//2 4 6 7 8 10 12 14..... 90 91 92 94 96 98 100 
	//int sayi;
	for (sayi = 1; sayi <= 100; sayi++)
	{
		if (sayi % 2 == 0 || sayi % 7 == 0)
			cout << sayi << " ";
	}
	cout << endl;
	//1 ile 100 arasýndaki 2'ye tam bölünebilen ve 7 sayýsýna tam bölünemeyen sayýlarý aralarýnda boþluk býrakarak yan yana ekrana yazdýralým
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0 && i % 7 != 0)
			cout << i << " ";
	}
	cout << endl;
	
	//1'den kullanýcýnýn girdiði sayýya kadar olan sayýlarýn toplamýný ekrana yazdýralým
	//int sayi;
	
	int toplam = 0;
	cout << "Sayý:";
	cin >> sayi;
	for (i = 1; i <= sayi; i++)
	{
		toplam += i; //toplam=toplam+i;
	}
	cout << "Toplam:" << toplam << endl;
	
	//Kullanýcýnýn girdiði 2 sayý arasýndaki 3'e tam bölünen sayýlarýn ve 5'e tam bölünen sayýlarýn ayrý ayrý toplamýný yazdýralým
	//Ýlk girilen sayý daha büyükse sayýlarýn yerini deðiþtirin
	//Ör: Kullanýcý 10 20 deðerlerini girerse;
	//3'e tam bölünenlerin toplamý: 45 (12+15+18)
	//5'e tam bölünenlerin toplamý: 45 (10+15+20)
	//int sayi1,sayi2;
	int toplam3 = 0, toplam5 = 0;
	cout << "2 sayý girin:";
	cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2)
		swap(sayi1, sayi2);
	for (i = sayi1; i <= sayi2; i++)
	{
		if (i % 3 == 0)
			toplam3 += i;
		if (i % 5 == 0)
			toplam5 += i;
	}
	cout << "3 sayýsýna tam bölünenlerin toplamý:" << toplam3 << endl;
	cout << "5 sayýsýna tam bölünenlerin toplamý:" << toplam5 << endl;
}


