#include "pch.h"
#include <iostream>
#include <string>
#include <random>
#include <time.h>

using namespace std;

void c(double pi, int r);
void c(const double* pi, int r);
void puan_arttir(int* puan);
void puan_yazdir(const int* puan);
void rastgele(int* sayilar);

void plaka_kodu(string sehir = "Istanbul") {
	int kod;
	if (sehir == "")
		sehir = "Istanbul";
	if (sehir == "Istanbul")
		kod = 34;
	else if (sehir == "Kocaeli")
		kod = 41;
	else if (sehir == "Sinop")
		kod = 57;
	else if (sehir == "Mersin")
		kod = 33;
	else if (sehir == "Bursa")
		kod = 16;
	else if (sehir == "Manisa")
		kod = 45;
	else
		kod = 0;
	if (kod == 0)
		cout << sehir << " plaka kodu tanimlanamadi\n";
	else
		cout << sehir << " plaka kodu:" << kod << endl;

}

void kelime_yazdir(string* kelime) {
	for (int i = 0; *(kelime + i)!="\n" ; i++)
	{
		cout << *(kelime + i) << "\t";
	}
}

int main()
{
	srand(time(NULL));
	const double PI = 3.14;
	//PI = 3; //const ile tanımlanan değişkenlerin içinde saklanan değer değiştirilemez yani bu değer sabittir.

	//Dairenin çevresini hesaplayalım
	int r = 10;
	double cevre;
	cevre = PI * 2 * r;
	cout << "Cevre:" << cevre << endl;

	c(PI, r);
	c(&PI, r);

	plaka_kodu();
	plaka_kodu("Sinop");
	plaka_kodu("Samsun");
	string sehir;
	plaka_kodu(sehir);
	sehir = "";
	plaka_kodu(sehir);

	int puan=0;
	puan_arttir(&puan);
	cout <<"Puan:" << puan << endl;
	puan_arttir(&puan);
	puan_yazdir(&puan);

	int sayilar[10];
	for (int i = 0; i < 10; i++)
	{
		//sayilar[i] = i + 1;
		sayilar[i] = rand() % 20 + 1;
		cout << sayilar[i] << "\t";
	}
	cout << endl;

	rastgele(&sayilar[0]); //fonksiyona ilk değerin adresini gönderdik
	for (int i = 0; i < 10; i++)
	{
		cout << sayilar[i] << "\t";
	}
	cout << endl;

	string kelimeler[5] = { "armut","elma","portakal","visne","\n" };
	kelime_yazdir(&kelimeler[0]);
}


//Dairenin çevresini hesaplayan fonksiyon
void c(double pi, int r) {
	//pi sayısı const PI değerinin kopyasıyla çalıştığı için bu değerin sabit olarak tanımlanması gerekmemektedir.
	pi = 3; //pi const olarak tanımlanmadığı için değiştirilebilir.
	cout << pi * 2 * r << endl;
}

//Dairenin çevresini hesaplayan fonksiyon
void c(const double* pi, int r) {
	//pi sayısı const PI değerinin kopyasıyla çalıştığı için bu değerin sabit olarak tanımlanması gerekmemektedir.
	//*pi = 3; //pi pointer'ındaki değer değiştirilemez
	//main içerisinde pi değeri const tanımlandığı için bu değeri tutan pointer mutlaka const olarak tanımlanmalıdır.
	cout << *pi * 2 * r << endl;
}

void puan_arttir(int* puan) {
	*puan += 1;
}

void puan_yazdir(const int* puan) {
	cout << "Puan:" << *puan << endl;
	//*puan += 1; //const olduğu için değer değiştirilemez.
}

//fonksiyona gönderilen adreste yer alan (dizi/array) int değerlerini 1'er arttıran fonksiyon:
void rastgele(int* sayilar) {
	for (int i = 0; i < 10; i++)
	{
		*(sayilar+i) += 1;
	}
}
