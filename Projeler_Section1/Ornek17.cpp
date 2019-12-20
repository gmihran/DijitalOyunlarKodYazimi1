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
	//Pointer - İşaretçiler
	//& -> adresi getirir
	//* -> adresin içerisindeki değeri getirir
	// pointer tanımlarken başına * sembolü koyulur.Pointer'ın içerisinde tutulan adresteki bilgiye ulaşırken yine önüne * konulur.
	
	ptr();
	int sayi;
	cout << "Sayı:";
	cin >> sayi;
	cout << "Sayı:" << sayi << endl;
	kat(&sayi);
	cout << "Sayı:" << sayi << endl;
	
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
	cout << "Sayı:" << sayi << endl;
	cout << "Sayı konum:" << &sayi << endl;
	cout << "p:" << p << endl;
	cout << "p konum:" << &p << endl;
	*p = 11;
	cout << "p:" << p << endl;
	cout << "p+1:" << p + 1 << endl;
	cout << "*p:" << *p << endl;
	cout << "Sayı:" << sayi << endl;
}

//Problem: Kullanıcıdan alınan değeri fonksiyon parametre olarak alsın ve 
//bu değeri fonksiyon içerisinde kullanıcının girdiği kata eşitlesin
//Ör:main içinde 4 girilirse, fonksiyonda 5 girilirse, mainden gelen 4 değeri 20 olacak
void kat(int *p) {
	int k, sonuc;
	cout << "Kat değeri:";
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

//Kendisine gönderilen kelimenin adresini (pointer) tutan fonksiyon tanımlayalım. Bu kelimeyi fonksiyon içinde tersine dönüştürelim.
//ÖR: kendisine "kedi" kelimesi geldiğinde, kelime "idek" olacak.
void kelimenin_tersi(string *kelime) {
	string ters = "";
	cout << "Kelime:" << *kelime << endl;
	cout << "Kelime adresi:" << &kelime << endl;
	int uzunluk = (*kelime).length() - 1;
	//cout << "Uzunluk:" << uzunluk << endl;
	//uzunluk değerini kelimenin uzunluğunun 1 eksiğini tutuyor. Bunun nedeni; indis değerinin 0'dan başlamasıdır.

	for (int i = uzunluk; i >= 0; i--) {
		ters = ters + (*kelime)[i]; //ters+=(*kelime)[i];
		//Kelimenin tersini ters diye bir değişkende tutuyoruz. 

		//*kelime = *kelime + (*kelime)[i]; 
		//Eğer ters = ters + (*kelime)[i]; *kelime = ters; adımlarının yerine; 
		//yukarıdaki adımı gerçekleştirirsek 
		//(yani pointer'ın işaret ettiği adresteki verinin yanına kelimenin tersini ekle dersek) 
		//kelimemizin yanına tersi eklenmiş olur.
	}
	*kelime = ters;
	cout << "Fonksiyondaki kelime:" << *kelime << endl;
}


