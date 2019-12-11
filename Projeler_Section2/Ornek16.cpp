//Fonksiyonlar

#include "pch.h"
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

//Fonksiyon tanımlama:
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
	yazdir("nasılsın?");
	//cout << "Yazdırılacak kelime:";
	//cin >> k;
	k = "Bugün hava çok soğuk";
	yazdir(k);
	karsilastirma("Istanbul", "Istanbul");
	karsilastirma("Kocaeli", "Istanbul");
	cout << "2 sayı giriniz:";
	cin >> a >> b;
	kucuktenbuyuge(a, b);
	kuvvet(2, 3);
	kuvvet(4, 2);
	kuvvet(a, b);
	return 0;
	//return fonksiyonun değer geri döndürmesini sağlar. return kodundan sonraki hiçbir kod çalışmaz.
	cout << "Deneme"; 
}

void merhaba()
{
	//Ekrana merhaba yazdıran fonksiyon
	cout << "Merhaba" << endl;
}

void yazdir(string kelime)
{
	//Kendisine gönderilen kelimeyi ekrana yazdıran fonksiyon
	cout << kelime << endl;
}

void karsilastirma(string kelime1, string kelime2)
{
	//Kendisine gönderilen iki kelimeyi birbiyle karşılaştırıp durumunu ekrana yazdıran fonksiyon
	if (kelime1 == kelime2)
		cout << kelime1 << " " << kelime2 << " Kelimeler aynı" << endl;
	else
		cout << kelime1 << " " << kelime2 << " Kelimeler aynı değil" << endl;
}

//Kendisine gönderilen iki değer arasındaki değerleri küçükten büyüğe doğru 1'er arttırarak ekrana yazdıran fonksiyonu tanımlayınız.
//İlk girilen sayı daha büyükse swap(deger1,deger2) (yer değiştirme) fonksiyonunu kullanalım
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
	//Bu döngüde a değeri değişmez
		cout << i << " ";
	cout << endl;

	//2.yol:
	for (a; a <= b; a++)
	//Bu döngüde a değeri değişir.
		cout << a << " ";
	cout << endl;

	//cout << a << " " << b << endl;

}

//Kendisine gönderilen iki değerin kuvvetini hesaplayan fonksiyon
//Ör: Taban:2 Us:3 girilirse; 2^3= 8 çıktısını verecek
//Ör: Taban:4 Us:2 girilirse; 4^2= 16 çıktısını verecek
void kuvvet(int taban, int us)
{
	int sonuc=1; //Çarpmada etkisiz eleman 1 olduğu için sonuç değerini 1 tanımladık
	for (int i = 1; i <= us; i++)
	{
		sonuc *= taban;
	}
	cout << taban << "^" << us << "= " << sonuc << endl;
}
