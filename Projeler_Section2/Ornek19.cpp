#include "pch.h"
#include <iostream>
#include <string>
#include <random>
#include <time.h>

void c(double pi, int r);
void c2(const double *pi, int r);
void puan_arttir(int* puan);
void puan_yazdir(const int* puan);
void rastgele(int* sayilar);

using namespace std;

void plaka_kodu(string sehir = "Istanbul") {
	int kod;

	if (sehir == "Istanbul")
		kod = 34;
	else if (sehir == "Kocaeli")
		kod = 41;
	else if (sehir == "Rize")
		kod = 53;
	else if (sehir == "Izmir")
		kod = 35;
	else if (sehir == "Antalya")
		kod = 7;
	else if (sehir == "Mugla")
		kod = 48;
	else
		kod = 0;
	

	if (kod == 0)
		cout << sehir << " plaka kodu bulunamadi...\n";
	else
		cout << sehir << " plaka kodu:" << kod << endl;

	
}

void kelime_yazdir(string* kelime) {
	for (int i = 0; *(kelime + i) != "\n"; i++)
	{
		cout << *(kelime + i) << endl;
		//kelime pointer'ında tutulan adres değerini her arttırdığımızda dizinin diğer elemanlarına ulaşabiliriz
	}
}

int main()
{
	srand(time(NULL));
	const double PI=3.14; //const ile bu değerin değiştirilemez yani sabit bir değer olduğunu tanımlamış olduk
	//PI = 3; //PI sayısı program içerisinde değiştirilemez
	//daire çevresi hesaplayalım

	int r=10;
	double cevre = PI * 2 * r;
	
	cout << cevre << endl;
	c(PI, r);
	c2(&PI, r);
	int puan = 0;
	puan_arttir(&puan);
	//cout << puan << endl;
	puan_yazdir(&puan);
	puan_arttir(&puan);
	puan_yazdir(&puan);

	plaka_kodu();
	plaka_kodu("Izmir");
	plaka_kodu("Bayburt");

	int sayilar[10];
	for (auto i = 0; i < 10; i++)
	{
		sayilar[i] = rand() % 10 + 1;
		//sayilar[i] = i+1;
		cout << sayilar[i] << "\t";
	}
	
	rastgele(&sayilar[0]);

	cout << endl;
	for (int sayi : sayilar)
		cout << sayi << "\t";

	cout << endl;
	string kelimeler[5] = { "gunes","dunya","uzay","gezegen","\n" };
	kelime_yazdir(&kelimeler[0]); //kelimeler dizisinin ilk indisindeki değerin tutulduğu adresi fonksiyona gönderdik
}


//Dairenin çevresini hesaplayan fonksiyon
void c(double pi, int r) {
	//main fonksiyonundaki const pi sayısının kopyasını aldık
	double cevre = pi * 2 * r;
	cout << cevre << endl;
}

//Dairenin çevresini hesaplayan fonksiyon
void c2(const double *pi, int r) {
	//main fonksiyonundaki const pi sayısının adresteki değerini aldık
	//*pi = 3; //*pi değeri değiştirilemez (const)
	double cevre = *pi * 2 * r;
	cout << cevre << endl;
}

void puan_arttir(int* puan) {
	*puan += 1;
}

void puan_yazdir(const int* puan) {
	cout <<"Puan:" << *puan << endl;
	//*puan += 1; //*puan değeri değiştirilemez
}

//fonksiyona gönderilen adreste yer alan (dizi/array) int değerlerini 1'er arttıran fonksiyon:
void rastgele(int* sayilar) {
	for (int i = 0; i < 10; i++)
	{
		*(sayilar+i) += 1; 
		//sayilar pointer'ında tutulan adres değerini her arttırdığımızda dizinin diğer elemanlarına ulaşabiliriz
	}
}
