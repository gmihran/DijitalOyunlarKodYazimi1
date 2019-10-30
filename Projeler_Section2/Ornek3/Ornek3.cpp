//Problemler - Örnek 4:
//Bir ürünün alýþ fiyatý, vergi oraný ve kar oranýna göre
//satýþ fiyatýný hesaplatýp ekrana yazdýrýnýz.
//a.	Eðer kar oraný 0 ile 1 arasýnda bir deðer deðilse 
//kar oraný tekrar istenecek
//b.	Eðer vergi oraný 0 ile 1 arasýnda bir deðer deðilse 
//vergi oraný tekrar istenecek
//c.	Kar eklenmiþ fiyat = alýþ fiyatý + alýþ fiyatý * kar oraný
//d.	Satýþ fiyatý = kar eklenmiþ fiyat + kar eklenmiþ fiyat * vergi oraný


#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	float kar, vergi, alis, satis;
	//float: Ondalýklý sayý tanýmlamasý
	cout << "Alýþ Fiyatý:";
	cin >> alis;
	gitkar: cout << "Kar Oraný:";
	cin >> kar;
	if (kar < 0 || kar>1)
	{
		cout << "0-1 arasýnda deðer giriniz." << endl;
		goto gitkar;
	}	
	gitvergi: cout << "Vergi Oraný:";
	cin >> vergi;
	if (vergi < 0 || vergi>1)
	{
		cout << "0-1 arasýnda deðer giriniz." << endl;
		goto gitvergi;
	}
	satis = alis + alis * kar; //Kar eklenmiþ fiyat
	satis = satis + satis * vergi; //Vergi eklenmiþ fiyat
	cout << "Satýþ Fiyatý:" << satis;
	
}

