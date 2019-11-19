#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	int i;
	/*
	for (i = 1; i <= 10; i++)
		cout << i << endl;
	//i=11
	cout << "while döngüsü baþladý" << endl;
	i = 1;
	while (i <= 10)
		//Doðru olduðu sürece çalýþýr
		cout << i++ << endl;

	//Kullanýcý 0 (sýfýr) girene kadar kullanýcýdan deðer isteyelim
	//Girdiði deðerlerin toplamlarýný ekrana yazdýralým
	int sayi, toplam=0;
	do
	{
		//En az 1 kez çalýþýr
		//Doðru olduðu sürece çalýþýr
		cout << "Sayý:";
		cin >> sayi;
		toplam += sayi;
	} while (sayi != 0);
	cout << "Toplam:" << toplam << endl;


	//Kullanýcý 0 (sýfýr) girene kadar kullanýcýdan deðer isteyelim
	//Girdiði deðerlerden çiftlerin toplamlarýný ve teklerin toplamlarýný ekrana yazdýralým
	int ttoplam = 0, ctoplam = 0;
	do
	{
		cout << "Sayý:";
		cin >> sayi;
		if (sayi % 2 == 0)
			ctoplam += sayi;
		else
			ttoplam += sayi;
	} while (sayi != 0);
	cout << "Teklerin toplamý:" << ttoplam << endl;
	cout << "Çiftlerin toplamý:" << ctoplam << endl;

	//Kullanýcý 0 (sýfýr) girene kadar kullanýcýdan deðer isteyelim
	//Girdiði deðerlerden negatiflerin toplamlarýný ve pozitiflerin toplamlarýný ekrana yazdýralým
	int ptoplam = 0, ntoplam = 0;
	do
	{
		cout << "Sayý:";
		cin >> sayi;
		if (sayi > 0)
			ptoplam += sayi;
		else
			ntoplam += sayi;
	} while (sayi != 0);
	cout << "Pozitiflerin toplamý:" << ptoplam << endl;
	cout << "Negatiflerin toplamý:" << ntoplam << endl;


	//Girdiði deðerlerden negatiflerin çarpýmlarýný ve pozitiflerin çarpýmlarýný ekrana yazdýralým
	int pcarpim = 1, ncarpim = 1;
	do
	{
		cout << "Sayý:";
		cin >> sayi;
		if (sayi > 0)
			pcarpim *= sayi;
		else if (sayi < 0)
			ncarpim *= sayi;
	} while (sayi != 0);
	cout << "Pozitiflerin çarpýmý:" << pcarpim << endl;
	cout << "Negatiflerin çarpýmý:" << ncarpim << endl;

*/
	//Girilen sayýnýn tersten okunuþu kendisine eþit mi?
	//sayý=1234
	//ters=0
	//ters*10   + sayi%10 = 4   
	//ters=4
	//sayi=1234/10=123
	//ters*10=40  +   sayi%10=3 =  43
	//ters= 43
	//sayi=123/10=12
	//ters*10=430 + sayi%10=2 = 432
	//sayi=1
	//Sayý 10'dan küçükse döngü sona erer
	//ters*10=4320 + sayi =4321
	int ters=0,anasayi,sayi;
	
	/*
	cout << "Sayý:";
	cin >> sayi;
	anasayi = sayi;
	do
	{
		ters = ters*10 + sayi % 10;
		sayi = sayi / 10;
	} while (sayi >= 10);
	ters = ters * 10 + sayi;
	cout << "Sayýnýn tersi:" << ters << endl;
	if (anasayi == ters)
		cout << anasayi << " Polindrom sayýdýr\n";
	else
		cout << anasayi << " Polindrom sayý deðildir\n";
*/
	//Üç basamaklý 2 sayýnýn çarpýmý polindrom sayýlarýn en büyüðü olan iki sayýnýn çarpýmlarýný bulalým
	int j, carpim, mak = 0;
	for (i = 999; i >= 900; i--)
	{
		for (j = 999; j >= 900; j--)
		{
			ters = 0;
			carpim = i * j;
			sayi = carpim;
			do
			{
				ters = ters * 10 + sayi % 10;
				sayi = sayi / 10;
			} while (sayi >= 10);
			ters = ters * 10 + sayi;
			if (ters == carpim && mak < carpim)
				mak = carpim;
		}
	}
	cout << "Mak:" << mak << endl;

}