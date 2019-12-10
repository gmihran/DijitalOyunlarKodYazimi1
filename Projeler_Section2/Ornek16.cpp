//Fonksiyonlar

#include "pch.h"
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
void merhaba();
void yazdir(string kelime);
void karsilastirma(string kelime1, string kelime2);
void kucuktenbuyuge(int a, int b);
void kuvvet(int taban, int us);

int main()
{
	setlocale(LC_ALL, "turkish");
	string k;
	int a, b;
	merhaba();
	yazdir("nasýlsýn?");
	//cout << "Yazdýrýlacak kelime:";
	//cin >> k;
	k = "Bugün hava çok soðuk";
	yazdir(k);
	karsilastirma("Istanbul", "Istanbul");
	karsilastirma("Kocaeli", "Istanbul");
	cout << "2 sayý giriniz:";
	cin >> a >> b;
	kucuktenbuyuge(a, b);
	kuvvet(2, 3);
	kuvvet(4, 2);
	kuvvet(a, b);
	return 0;
	cout << "Deneme"; //return fonksiyonun deðer geri döndürmesini saðlar. return kodundan sonraki hiçbir kod çalýþmad 
}
void merhaba()
{
	cout << "Merhaba" << endl;
}
void yazdir(string kelime)
{
	cout << kelime << endl;
}
void karsilastirma(string kelime1, string kelime2)
{
	if (kelime1 == kelime2)
		cout << kelime1 << " " << kelime2 << " Kelimeler ayný" << endl;
	else
		cout << kelime1 << " " << kelime2 << " Kelimeler ayný deðil" << endl;
}

//Kendisine gönderilen iki deðer arasýndaki deðerleri küçükten büyüðe doðru 1'er arttýrarak ekrana yazdýran fonksiyonu tanýmlayýnýz.
//Ýlk girilen sayý daha büyükse swap(deger1,deger2) (yer deðiþtirme) fonksiyonunu kullanalým
//Ör: 3 7 girilirse; 3 4 5 6 7
//Ör: 7 3 girilirse; 3 4 5 6 7
void kucuktenbuyuge(int a, int b)
{
	int i;
	if (a > b)
		swap(a, b);
		//swap(a,b): x=a; a=b; b=x;

	//1.yol:
	for (i = a; i <= b; i++)
	//Bu döngüde a deðeri deðiþmez
		cout << i << " ";
	cout << endl;

	//2.yol:
	for (a; a <= b; a++)
	//Bu döngüde a deðeri deðiþir.
		cout << a << " ";
	cout << endl;

	//cout << a << " " << b << endl;

}

//Kendisine gönderilen iki deðerin kuvvetini hesaplayan fonksiyon
//Ör: Taban:2 Us:3 girilirse; 2^3= 8 çýktýsýný verecek
//Ör: Taban:4 Us:2 girilirse; 4^2= 16 çýktýsýný verecek
void kuvvet(int taban, int us)
{
	int sonuc=1; //Çarpmada etkisiz eleman 1 olduðu için sonuç deðerini 1 tanýmladýk
	for (int i = 1; i <= us; i++)
	{
		sonuc *= taban;
	}
	cout << taban << "^" << us << "= " << sonuc << endl;
}