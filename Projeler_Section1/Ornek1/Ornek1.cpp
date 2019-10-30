#include "pch.h"
#include <iostream>
#include <locale.h>
//setlocale fonksiyonundaki LC_ALL ifadesinin tanýmlanmasý için
//bu kütüphaneyi projemize dahil ettik.

/*
Bu bir açýklama bloðudur.
*/

//Bu bir açýklama satýrýdýr.
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	//Projemizde Türkçe karakterleri çýktý alabilmemiz için
	//projeye dahil ettik.

	printf("Hello world!\n");
	// "\n" ifadesi ile imleç alt satýra konumlanýr.

	//std::cout << "Hello world!";
	//using namespace std; kod satýrý ile std isim
	//uzayýný projemize dahil ettik. Artýk std::
	//yazmamýza gerek yoktur.

	cout << "Hello world\n";
	cout << "Welcome" << endl;
	//endl (endline) imleci bir alt satýrýn baþýna konumlandýrýr.
	//yeni satýra geçmeyi saðlar.
	
	
	int sayi;
	sayi = 1;

	//int sayi=1;
	//ilk deðer atamasý

	printf("%d\n",sayi);

	cout << sayi << endl;

	cout << "Bir sayý giriniz:";
	cin >> sayi;
	cout << "Girilen sayi:" << sayi << endl;

	//Girilen sayýnýn karesini ekrana yazdýralým.
	cout << "Sayýnýn karesi:" <<  sayi * sayi << endl;
	
	int kare = sayi * sayi;
	cout << "Sayýnýn karesi:" << kare << endl;

	sayi = sayi * sayi;
	cout << "Sayýnýn karesi:" << sayi << endl;
	//Bu iþlemden sonra sayi deðerinin içinde karesi saklanýr.
	
	cout << "Merhaba\t" << sayi << "\n";

	cout << "Ad\tSoyad\tBölüm\n";
	cout << "Gözde\tAltýnsoy\tBilgisayar Mühendisliði\n";
	// "\t" ifadesi 8 karakter yer ayýrýr. Tab boþluðu anlamýna gelir.
	
	cout << "Bilgisayar Mühendisliði\t\tDeneme\n";
	cout << "Bilgisayar Mühendisliði\tDeneme";




}

