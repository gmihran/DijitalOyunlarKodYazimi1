#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	int A = 10, B = 5, C = 5, D = -10, i;
	cout << (A >= B + C) << endl;
	//while döngüsü
	for (i = 1; i <= 10; i++)
		cout << i << endl;
	//i=11;
	cout << "While döngüsü başladı" << endl;
	i = 1;
	while (i <= 10)
		//şart doğru olduğu sürece çalışır
		cout << i++ << endl;
	//Kullanıcı 0 (sıfır) girene kadar kullanıcıdan değer isteyelim
	//Girdiği değerlerin toplamlarını ekrana yazdıralım
	int sayi,toplam=0;
	
	do
	{
		//En az 1 kez çalışır
		cout << "Sayı:";
		cin >> sayi;
		toplam += sayi;
		//şart doğru olduğu sürece çalışır
	} while (sayi!=0);
	cout << "Toplam:" << toplam << endl;


	//Kullanıcı 0 (sıfır) girene kadar kullanıcıdan değer isteyelim
	//Girdiği değerlerden çiftlerin toplamlarını ve teklerin toplamlarını ekrana yazdıralım
	int ttoplam = 0, ctoplam=0;
	
	do
	{
		cout << "Sayı:";
		cin >> sayi;
		if (sayi % 2 == 0)
			ctoplam += sayi;
		else
			ttoplam += sayi;
	} while (sayi != 0);
	cout << "Çiftlerin Toplamı:" << ctoplam << endl;
	cout << "Teklerin Toplamı:" << ttoplam << endl;

	//Kullanıcı 0 (sıfır) girene kadar kullanıcıdan değer isteyelim
	//Girdiği değerlerden negatiflerin toplamlarını ve pozitiflerin toplamlarını ekrana yazdıralım
	int ptoplam = 0, ntoplam = 0;
	
	do
	{
		cout << "Sayı:";
		cin >> sayi;
		if (sayi > 0)
			ptoplam += sayi;
		else
			ntoplam += sayi;
	} while (sayi != 0);
	cout << "Pozitiflerin Toplamı:" << ptoplam << endl;
	cout << "Negatiflerin Toplamı:" << ntoplam << endl;
	

	//Girdiği değerlerden negatiflerin çarpımlarını ve pozitiflerin çarpımlarını ekrana yazdıralım
	int ncarpim=1, pcarpim = 1;
	
	do
	{
		cout << "Sayı:";
		cin >> sayi;
		if (sayi < 0)
			ncarpim *= sayi;
		else if (sayi > 0)
			pcarpim *= sayi;
	} while (sayi!=0);
	cout << "Pozitiflerin çarpımı:" << pcarpim << endl;
	cout << "Negatiflerin çarpımı:" << ncarpim << endl;

	//Girilen sayının tersten okunuşu kendisine eşit mi?
	//int sayi;
	int keysayi;
	int terssayi=0;
	cout << "Sayı:";
	cin >> keysayi;
	sayi = keysayi;
	do
	{
		terssayi = sayi % 10 + terssayi*10;
		sayi = sayi / 10;
		//cout << terssayi << endl << sayi << endl;
		
	} while (sayi >= 10);
	terssayi = terssayi * 10 + sayi;
	cout << "Sayının tersi:" << terssayi << endl;
	if (keysayi == terssayi)
		cout << keysayi << " polindrom sayıdır" << endl;
	else
		cout << keysayi << " polindrom sayı değildir" << endl;
	
		
	//Üç basamaklı 2 sayının çarpımı polindrom sayıların en büyüğü olan iki sayının çarpımlarını bulalım
	//int sayi,i;
	int j, mak=0,s1,s2;
	bool kontrol = false;
	for (i = 999; i >= 900; i--)
	{
		for (j = 999; j >= 900; j--)
		{
			terssayi = 0;
			keysayi = i * j;
			sayi = keysayi;
			do
			{
				terssayi = sayi % 10 + terssayi * 10;
				sayi = sayi / 10;
				//cout << terssayi << endl << sayi << endl;
			} while (sayi >= 10);
			terssayi = terssayi * 10 + sayi;
			if (keysayi == terssayi && mak < terssayi)
			{
				mak = terssayi;
				s1 = i;
				s2 = j;
			}
				
		}
	}
	cout << "Sayılar:" << s1 << " " << s2 << endl;
	cout << "Çarpımları:" << mak << endl;
	


}

