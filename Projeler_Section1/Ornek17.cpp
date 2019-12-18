#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>

void ptr();
void kat(int *p);
void ptr2();

using namespace std;

void kelimenin_tersi(string *kelime);

int main()
{
	setlocale(LC_ALL, "turkish");
	//Pointer - Ýþaretçiler
	//& -> adresi getirir
	//* -> adresin içerisindeki deðeri getirir
	// pointer tanýmlarken baþýna * sembolü koyulur.Pointer'ýn içerisinde tutulan adresteki bilgiye ulaþýrken yine önüne * konulur.
	/*
	ptr();
	int sayi;
	cout << "Sayý:";
	cin >> sayi;
	cout << "Sayý:" << sayi << endl;
	kat(&sayi);
	cout << "Sayý:" << sayi << endl;
	*/
	ptr2();
	string kelime;
	cout << "Kelime giriniz..:";
	cin >> kelime;
	kelimenin_tersi(&kelime);
	cout << "Main fonksiyonundaki kelime:" << kelime;
}

void ptr() {
	int sayi = 10;
	int *p = &sayi;
	cout << "Sayý:" << sayi << endl;
	cout << "Sayý konum:" << &sayi << endl;
	cout << "p:" << p << endl;
	cout << "p konum:" << &p << endl;
	*p = 11;
	cout << "p:" << p << endl;
	cout << "p+1:" << p + 1 << endl;
	cout << "*p:" << *p << endl;
	cout << "Sayý:" << sayi << endl;
}

//Problem: Kullanýcýdan alýnan deðeri fonksiyon parametre olarak alsýn ve bu deðeri fonksiyon içerisinde kullanýcýnýn girdiði kata eþitlesin
//Ör:main içinde 4 girilirse, fonksiyonda 5 girilirse, mainden gelen 4 deðeri 20 olacak

void kat(int *p) {
	int k, sonuc;
	cout << "Kat deðeri:";
	cin >> k;
	sonuc = *p * k;
	*p = sonuc;
}

void ptr2() {
	int var = 10;
	cout <<"var:" << var << endl;
	int *ptr = &var;
	*ptr = 20;
	cout << "var:" << var << endl;
	int **ptr2 = &ptr;
	**ptr2 = 30;
	cout << "var:" << var << endl;
	cout << "&var:" << &var << endl;
	cout << "ptr:" << ptr << endl;
	cout << "*ptr:" << *ptr << endl;
	cout << "&ptr:" << &ptr << endl;
	cout << "ptr2:" << ptr2 << endl;
	cout << "*ptr2:" << *ptr2 << endl;
	cout << "**ptr2:" << **ptr2 << endl;
	cout << "&ptr2:" << &ptr2 << endl;
}

//Kendisine gönderilen pointer bir kelime tutuyor. Bu kelimeyi tersine dönüþtüren fonksiyon:
//ÖR: kendisine "kedi" kelimesi geldiðinde, kelime "idek" olacak.
void kelimenin_tersi(string *kelime) {
	string ters = "";
	cout << "Kelime:" << *kelime << endl;
	cout << "Kelime adresi:" << &kelime << endl;
	int uzunluk = (*kelime).length() - 1;
	//cout << "Uzunluk:" << uzunluk << endl;
	//uzunluk deðerini kelimenin uzunluðunun 1 eksiðini tutuyor. Bunun nedeni; indis deðerinin 0'dan baþlamasýdýr.

	for (int i = uzunluk; i >= 0; i--) {
		ters = ters + (*kelime)[i]; //ters+=(*kelime)[i];
		//Kelimenin tersini ters diye bir deðiþkende tutuyoruz. 

		//*kelime = *kelime + (*kelime)[i]; 
		//Eðer ters = ters + (*kelime)[i]; *kelime = ters; adýmlarýnýn yerine; yukarýdaki adýmý gerçekleþtirirsek (yani pointer'ýn iþaret ettiði adresteki verinin yanýna kelimenin tersini ekle dersek) kelimemizin yanýna tersi eklenmiþ olur.
	}
	*kelime = ters;
	cout << "Fonksiyondaki kelime:" << *kelime << endl;
}


