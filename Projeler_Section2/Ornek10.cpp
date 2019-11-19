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
	cout << "While döngüsü baþladý" << endl;
	i = 1;
	while (i <= 10)
		//þart doðru olduðu sürece çalýþýr
		cout << i++ << endl;
	//Kullanýcý 0 (sýfýr) girene kadar kullanýcýdan deðer isteyelim
	//Girdiði deðerlerin toplamlarýný ekrana yazdýralým
	int sayi,toplam=0;
	/*
	do
	{
		//En az 1 kez çalýþýr
		cout << "Sayý:";
		cin >> sayi;
		toplam += sayi;
		//þart doðru olduðu sürece çalýþýr
	} while (sayi!=0);
	cout << "Toplam:" << toplam << endl;
*/

	//Kullanýcý 0 (sýfýr) girene kadar kullanýcýdan deðer isteyelim
	//Girdiði deðerlerden çiftlerin toplamlarýný ve teklerin toplamlarýný ekrana yazdýralým
	int ttoplam = 0, ctoplam=0;
	/*
	do
	{
		cout << "Sayý:";
		cin >> sayi;
		if (sayi % 2 == 0)
			ctoplam += sayi;
		else
			ttoplam += sayi;
	} while (sayi != 0);
	cout << "Çiftlerin Toplamý:" << ctoplam << endl;
	cout << "Teklerin Toplamý:" << ttoplam << endl;
*/
	//Kullanýcý 0 (sýfýr) girene kadar kullanýcýdan deðer isteyelim
	//Girdiði deðerlerden negatiflerin toplamlarýný ve pozitiflerin toplamlarýný ekrana yazdýralým
	int ptoplam = 0, ntoplam = 0;
	/*
	do
	{
		cout << "Sayý:";
		cin >> sayi;
		if (sayi > 0)
			ptoplam += sayi;
		else
			ntoplam += sayi;
	} while (sayi != 0);
	cout << "Pozitiflerin Toplamý:" << ptoplam << endl;
	cout << "Negatiflerin Toplamý:" << ntoplam << endl;
	*/

	//Girdiði deðerlerden negatiflerin çarpýmlarýný ve pozitiflerin çarpýmlarýný ekrana yazdýralým
	int ncarpim=1, pcarpim = 1;
	/*
	do
	{
		cout << "Sayý:";
		cin >> sayi;
		if (sayi < 0)
			ncarpim *= sayi;
		else if (sayi > 0)
			pcarpim *= sayi;
	} while (sayi!=0);
	cout << "Pozitiflerin çarpýmý:" << pcarpim << endl;
	cout << "Negatiflerin çarpýmý:" << ncarpim << endl;
*/
	//Girilen sayýnýn tersten okunuþu kendisine eþit mi?
	//int sayi;
	int keysayi;
	int terssayi=0;
	cout << "Sayý:";
	cin >> keysayi;
	sayi = keysayi;
	do
	{
		terssayi = sayi % 10 + terssayi*10;
		sayi = sayi / 10;
		//cout << terssayi << endl << sayi << endl;
		
	} while (sayi >= 10);
	terssayi = terssayi * 10 + sayi;
	cout << "Sayýnýn tersi:" << terssayi << endl;
	if (keysayi == terssayi)
		cout << keysayi << " polindrom sayýdýr" << endl;
	else
		cout << keysayi << " polindrom sayý deðildir" << endl;
	
		
	//Üç basamaklý 2 sayýnýn çarpýmý polindrom olan en büyük iki sayýnýn çarpýmlarý bulalým
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
	cout << "Sayýlar:" << s1 << " " << s2 << endl;
	cout << "Çarpýmlarý:" << mak << endl;
	


}

