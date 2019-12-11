#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

void yazdir();
void kelime_yazdir(string kelime);
void ilkharf_yazdir(string kelime);
void karsilastirma(string kelime1, string kelime2);
void sayilari_yazdir(int sayi1, int sayi2);
void us_alma(int taban, int us);
int topla(int s1, int s2);
int topla(int s1, int s2, int s3);
double topla(double sayi1, double sayi2);
void karakter(string kelime);
int rakam_toplami(int sayi);

int main(){
	setlocale(LC_ALL, "turkish");
	string k;
	int s1, s2;
	yazdir();
	kelime_yazdir("Bugün hava güzel");
	k = "Beykoz";
	//cout << "Kelime:";
	//cin >> k;
	kelime_yazdir(k);
	ilkharf_yazdir(k);
	cout << "Kelime:" << k << endl;
	karsilastirma("istanbul", "istanbul");
	karsilastirma("istanbul", "kocaeli");
	sayilari_yazdir(3, 7);
	//sayilari_yazdir(7, 3);
	s1 = 10;
	s2 = 15;
	cout << "İki sayı giriniz..:";
	cin >> s1 >> s2;
	sayilari_yazdir(s1, s2);
	//sayilari_yazdir(s2, s1);
	us_alma(2, 3);
	us_alma(4, 2);
	us_alma(s1, s2);
	cout << s1 << "+" << s2 << "=" << topla(s1, s2) << endl;
	cout << topla(s1, s2, 5) << endl;
	//int sonuc = topla(s1, s2);
	//cout << sonuc << endl;
	cout << topla(5.2, 5.4) << endl;
	karakter("beykoz");
	karakter("istanbul");
	karakter("kocaeli");
	karakter("antep");
	//cout << "Kelime:";
	//cin >> k;
	karakter(k);
	cout << "1234 Rakamları toplamı:" << rakam_toplami(1234) << endl;
	cout << "2345012 Rakamları toplamı:" << rakam_toplami(2345012) << endl;

	return 0;
	//return işlemi fonksiyonun değer döndürmesini sağlar. 
	//Bu adımdan sonraki hiçbir kod çalışmaz
	cout << "Nasılsın?";

}

void yazdir() {
	//Ekrana merhaba yazdıran fonksiyon
	cout << "Merhaba" << endl;
}

void kelime_yazdir(string kelime) {
	//Kendisine gönderilen kelimeyi ekrana yazdıran fonksiyon
	cout << kelime << endl;
}

void ilkharf_yazdir(string kelime) {
	//Kendisine gönderilen kelimenin ilk harfini ekrana yazdıran fonksiyon
	//cout << kelime[0];
	kelime = kelime[0];
	cout << "İlkharf:" << kelime << endl;
}

void karsilastirma(string kelime1, string kelime2) {
	//Kendisine gönderilen iki kelimeyi birbiyle karşılaştırıp durumunu ekrana yazdıran fonksiyon
	if (kelime1 == kelime2)
		cout << kelime1 << " " << kelime2 << " kelimeler aynı" << endl;
	else
		cout << kelime1 << " " << kelime2 << " kelimeler aynı değil" << endl;
}

//Kendisine gönderilen iki değer arasındaki değerleri küçükten büyüğe doğru 1'er arttırarak ekrana yazdıran fonksiyonu tanımlayınız.
//İlk girilen sayı daha büyükse swap(deger1,deger2) (yer değiştirme) fonksiyonunu kullanalım
//Ör: 3 7 girilirse; 3 4 5 6 7
//Ör: 7 3 girilirse; 3 4 5 6 7

void sayilari_yazdir(int sayi1, int sayi2) {
	if (sayi1 > sayi2)
		swap(sayi1, sayi2);
	//swap: x=sayi1; sayi1=sayi2; sayi2=x;
	for (int i = sayi1; i <= sayi2; i++)
		//sayi1 içeriği değişmez
		cout << i << " ";
	cout << endl;
	for (sayi1; sayi1 <= sayi2; sayi1++)
		//Bu döngüde sayi1 içerisinde saklanan değerin içeriği değişir.
		//Döngü bitiminde sayi1 sayi2'nin 1 fazlasını tutar.
		cout << sayi1 << " ";
	cout << endl;
	cout << sayi1 << " " << sayi2 << endl;
}

//Kendisine gönderilen iki değerin kuvvetini hesaplayan fonksiyon
//Ör: Taban:2 Us:3 girilirse; 2^3= 8 çıktısını verecek
//Ör: Taban:4 Us:2 girilirse; 4^2= 16 çıktısını verecek

void us_alma(int taban, int us) {
	int sonuc = 1, i;
	for (i = 1; i <= us; i++) {
		sonuc *= taban;
	}
	cout << taban << "^" << us << "=" << sonuc << endl;
}

//void : değer döndürmez

//Kendisine gönderilen iki tam sayıyı toplayıp toplam sonucunu geri döndüren fonksiyon
int topla(int s1, int s2) {
	//2 parametre var: s1,s2
	return s1 + s2;
}

//Kendisine gönderilen üç tam sayıyı toplayıp toplam sonucunu geri döndüren fonksiyon
int topla(int s1, int s2, int s3) {
	//3 parametre var: s1,s2,s3
	return s1 + s2 + s3;
}

//Kendisine gönderilen iki ondalıklı sayıyı toplayıp sonucunu geri döndüren fonksiyon
double topla(double sayi1, double sayi2) {
	return sayi1 + sayi2;
}

//Kendisine gönderilen kelimenin karakter sayısı tek ise kelimeyi karakter sayısı kadar ekrana yazdıran, 
//çift ise kelimeyi tersten 1 kez ekrana yazdıran fonksiyon
void karakter(string kelime) {
	int uzunluk = kelime.length();
	if (uzunluk % 2 == 0) {
		for (int i = uzunluk - 1; i >= 0; i--)
			cout << kelime[i];
		cout << endl;
		/*for (int i = uzunluk; i > 0; i--)
			cout << kelime[i - 1];
		cout << endl;*/
	}
	else {
		for ( int i = 1; i <= uzunluk; i++) {
			cout << kelime << endl;
		}
	}
}

//Kendisine gönderilen sayının tüm rakamlarını toplayıp toplamı geri döndüren fonksiyon
//Ör: 1234 gelirse; 1+2+3+4=10 hesaplayıp 10 değerini geri döndürecek
int rakam_toplami(int sayi) {
	int sonuc = 0;
	while (sayi > 0)
	{
		sonuc += sayi % 10;
		sayi = (sayi- sayi % 10)/10;
	}
	return sonuc;
}
