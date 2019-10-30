#include "pch.h"
#include <iostream>

/*
Bu bir açýklama bloðudur.
*/

//Bu bir açýklama satýrýdýr.
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	//Türkçe karakterlerin projemize dahil edilmesini saðlar.

	//printf kodu ile C ve C++ programlama dillerinde ekrana çýktý verebiliriz.
	
	printf("Hello World!\n");
	// "\n" ifadesi imleci alt satýra konumlandýrýr.

	printf("Welcome today\tGözde");
	// "\t" ifadesi tab boþluðu býrakýr. Tab 8 karakter tutar.

	printf("\nHow are you?\n");

	printf("Ad\tSoyad\tBolum\n");
	printf("Gozde\tAltýnsoy\tBilgisayar Mühendisliði\n");

	//std::cout << "Merhaba";
	//using namespace std; ile std isim uzayýný projemize dahil ettik
	//Eðer dahil etmeseydik her seferinde cout ifadesini yazarken 
	//std::cout þeklinde tanýmlamak zorunda kalacaktýk.

	cout << "Merhaba" << endl;
	//cout ekrana çýktý vermemizi saðlar.
	//endl (endline) yeni satýra geçer. Ýmleci alt satýra konumlandýrýr.

	int sayi;
	//integer veri türüyle sayi deðiþkeni tanýmlandý. 
	//sayi deðiþkeni sadece tam sayý deðerleri tutabilir.

	sayi = 10;

	//int sayi=10; //ilk deðer atamasý

	printf("%d\n", sayi);
	cout << sayi <<"\n";
	// "\n" ifadesi ile alt satýra geçebiliriz.
	//Bunun yerine endl kullanabiliriz.

	cout << "Bir sayý girin:";
	cin >> sayi;
	cout << "Girilen deðer:" << sayi << endl;

	//Sayýnýn karesini ekrana yazdýralým
	cout << "Sayýnýn karesi:" << sayi*sayi;

	//Kiþinin adýný isteyelim. Merhaba (ad) çýktý verelim
	



}

