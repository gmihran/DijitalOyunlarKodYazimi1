#include "pch.h"
#include <iostream>
#include <locale>
#include <random>
#include <time.h>

using namespace std;

int kare(int sayi1, int sayi2);
void sayi();
int faktoriyel(int sayi);
void faktoriyel_yazdir(int sayi);
void rastgele5_toplam();

int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL)); //Program her çalýþtýrýldýðýnda Random ile üretilen deðerlerin farklý deðerler olmasýný saðlar. Ama bu sayýnýn farklýlýklarýný ifade etmez. Yani 5 üretildiyse tekrar üretilebilir.
	//sayi();

	cout << "faktoriyel() fonksiyonu çalýþýyor...\n";
	cout <<"0!=" << faktoriyel(0) << endl;
	cout <<"5!=" << faktoriyel(5) << endl;
	cout <<"-4!=" << faktoriyel(-4) << endl;
	if (faktoriyel(-4) == 0)
		cout << -4 << " sayýsýnýn faktöriyeli yoktur.\n";

	cout << "faktoriyel_yazdir() fonksiyonu çalýþýyor...\n";
	faktoriyel_yazdir(-4);
	faktoriyel_yazdir(0);
	faktoriyel_yazdir(6);

	cout << "rastgele5_toplam() fonksiyonu çalýþýyor...\n";
	rastgele5_toplam();

	system("pause");
	return 0;
}

//Örnek-1:
//Kendisine gönderilen iki tamsayý deðerinden büyük olanýn karesini, sayýlar eþitse sayýlardan herhangi birini geri döndüren fonksiyonu yazýnýz.
int kare(int sayi1, int sayi2) {
	if (sayi1 > sayi2)
		return sayi1 * sayi1;
	else if (sayi1 < sayi2)
		return sayi2 * sayi2;
	else
		return sayi1; //return sayi2;
}
//Örnek-2:
//Girilen iki tamsayý deðerini kare fonskiyonuna gönderip fonksiyondan gelen deðeri ekrana yazdýran fonskiyonu yazýnýz. 
void sayi() {
	//Deðer döndürmediði için void olarak tanýmladýk
	//Deðer almadýðý için herhangi bir parametresi yok 
	//() yani parantez içi boþ 
	int s1, s2;
	cout << "Ýki sayý girin:";
	cin >> s1 >> s2;
	cout << kare(s1, s2) << endl;
}

//Örnek-3:
//Kendisine gönderilen tamsayý deðerinin faktöriyelini geri döndüren fonksiyonu yazýnýz. Eðer kendisine gönderilen sayý negatif ise 0 deðerini döndürelim.
//Not: 0!=1
int faktoriyel(int sayi) {
	//Eðer bir deðer döndürmüyor olsaydý fonksiyonu; 
	//void faktoriyel(int sayi) 
	//þeklinde tanýmlardýk
	//Faktöriyel : Ör: 5!=1*2*3*4*5 veya 5!=5*4*3*2*1
	int sonuc = 1;
	for (int i = 1; i <= sayi; i++) {
		sonuc *= i; //sonuc = sonuc * i;
	}
	/*
	//1.yöntem:
	if (sayi < 0)
		return 0;
	else
		return sonuc;
	*/

	//2.yöntem:
	if (sayi < 0)
		sonuc = 0;
	return sonuc;
}

//Örnek-4:
//Kendisine gönderilen sayýyý faktöriyel fonksiyonuna gönderip faktöriyel fonksiyonundan gelen deðer 0 ise "... sayýsýnýn faktöriyeli yoktur.", 0 deðilse sayi!=sonuc Ör/5!=120 çýktýsýný versin
void faktoriyel_yazdir(int sayi) {
	int fakt = faktoriyel(sayi);
	if (fakt == 0)
		cout << sayi << " sayýsýnýn faktöriyeli yoktur.\n";
	else
		cout << sayi << "!=" << fakt << endl;
}

//Örnek-5:
//Rastgele üretilen 1-100 arasýnda 5 sayýnýn toplamýný ekrana yazdýran fonksiyon
//Parametre (Bu fonksiyona gönderilen deðer) : YOK (NULL)
//Geri döndürdüðü deðer (Return deðeri) : YOK (void)
void rastgele5_toplam() {
	int sayi, toplam = 0;
	for (int i = 1; i <= 5; i++){
		sayi = rand() % 100 + 1; 
		//Baþlangýç deðeri = 1 (+1 ile ifade ettik)
		//Bitiþ deðeri = 100 (100+1-1=100) Ýkisinin toplamýndan 1 deðeriniþ çýkararak hesaplarýz

		//Ör: 31 ile 54 arasýnda üretilecek deseydik: 
		//sayi = rand() % 24 + 31;
		cout << sayi << endl;
		toplam += sayi; //toplam = toplam + sayi;
	}
	cout << "Toplam=" << toplam << endl;

}

//Aþaðýdaki Cuma günü derste çözeceðiz

//Örnek-6:
//Rastgele üretilen 20 sayýdan 1-100 arasýndaki sayýlardan tek olanlarý ve çift olanlarý ayrý ayrý ekrana yazdýran fonksiyon
//Not: Deðerler bir dizide tutulmak zorundadýr
//Parametre (Bu fonksiyona gönderilen deðer) : YOK (NULL)
//Geri döndürdüðü deðer (Return deðeri) : YOK (void)



//Örnek-6:
//Rastgele üretilen 5 sayýnýn toplamýný ekrana yazdýran fonksiyon
//Parametre (Bu fonksiyona gönderilen deðer) : YOK (NULL)
//Geri döndürdüðü deðer (Return deðeri) : YOK (void)

//Cuma günü devam edeceðiz...