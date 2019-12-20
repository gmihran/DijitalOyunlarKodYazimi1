#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
#include <random>
#include <time.h>

using namespace std;

void ptr();
void arttir5(int *p1, int *p2);
void kat(int *p);
void kat(int sayi);
void ptrptr();
int * rastgele();

void tersine(string *kelime);
//string türünde deðer içeren fonksiyonlarýn mutlaka using namespace std; tanýmlamasýnýn altýnda olmasý gerekiyor. Ya da bununla ilgili olan kütüphaneyi projenize dahil edebilirsiniz.

int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL));

	int s1=2, s2=4;

	
	ptr();
	
	cout << "Fonksiyon çaðrýlmadan önce:\n";
	cout << "s1:" << s1 << " s2:" << s2 << endl;
	arttir5(&s1, &s2);
	cout << "Fonksiyon çaðrýldýktan sonra:\n";
	cout << "s1:" << s1 << " s2:" << s2 << endl;
	
	
	cout << "Sayý:";
	cin >> s1;
	
	kat(s1);
	cout << "kat(s1) fonksiyonu çalýþýyor..\n";
	cout << "sayý:" << s1 << endl;

	kat(&s1);
	cout << "kat(&s1) fonksiyonu çalýþýyor..\n";
	cout << "sayý:" << s1 << endl;
	

	string kelime;
	cout << "Kelime:";
	cin >> kelime;
	tersine(&kelime);
	cout << "kelime:" << kelime << endl;
	
	ptrptr();
	
	int sayi;
	sayi =* rastgele();
	cout <<"sayi:" <<  sayi << endl;
	cout <<"&sayi:" << &sayi << endl;
	return 1;
}

void ptr() {
	int sayi = 10;
	int *p = &sayi; //sayi deðiþkeninin bellek adresini p pointer (adres tutucuya/iþaretçiye) atadýk
	cout << "sayi:" << sayi << endl;
	cout << "&sayi:" << &sayi << endl;
	cout << "p:" << p << endl;
	cout << "*p:" << *p << endl; //*p pointer içinde tutulan adresteki deðere ulaþmamýzý saðlar
	cout << "&p:" << &p << endl;

	//Kullanýcýnýn girdiði deðerin tutulduðu bellek adresine giderek bu deðeri 5 arttýralým.
	cout << "Sayý:";
	cin >> sayi;
	int *pointer = &sayi;
	*pointer += 5; // *pointer = *pointer + 5;
	cout << "sayi:" << sayi << endl;

}

//Kendisine gönderilen bellek adreslerinin içinde saklanan deðerleri 5 arttýran fonksiyon:
void arttir5(int *p1, int *p2) {
	*p1 = *p1 + 5;
	*p2 += 5;
}

//Problem: Kullanýcýdan alýnan deðeri fonksiyon parametre olarak alsýn ve 
//bu deðeri fonksiyon içerisinde kullanýcýnýn girdiði kata eþitlesin
//Ör:main içinde 4 girilirse, fonksiyonda 5 girilirse, mainden gelen 4 deðeri 20 olacak
void kat(int *p) {
	int k;
	cout << "Kat deðeri:";
	cin >> k;
	*p *= k; // *p = *p * k;
}

//Fonksiyona pointer yerine deðer göndererek deðerin main içerisindeki durumunu gözlemleyelim
void kat(int sayi) {
	//Deðerin kopyasýný alýp, farklý bir bellek adresinde tutar
	//Bu nedenle kendisine gönderilen deðer deðiþtirilemez
	int k;
	cout << "Kat deðeri:";
	cin >> k;
	sayi *= k; // sayi = sayi * k;
}

//Kendisine gönderilen kelimenin adresini (pointer) tutan fonksiyon tanýmlayalým. Bu kelimeyi fonksiyon içinde tersine dönüþtürelim.
//ÖR: kendisine "kedi" kelimesi geldiðinde, kelime "idek" olacak.
void tersine(string *kelime) {
	string ters="";
	int uzunluk = (*kelime).length();
	for (int i = uzunluk-1; i >= 0; i--){
		ters += (*kelime)[i];	
	}
	*kelime = ters;
}

void ptrptr() {
	int var = 10;
	int *ptr = &var;
	cout << "var:" << var << endl;
	cout << "&var:" << &var << endl;
	cout << "ptr:" << ptr << endl;
	cout << "*ptr:" << *ptr << endl;

	*ptr = 20;
	cout << "*ptr = 20; iþleminden sonra..:" << endl;
	cout << "var:" << var << endl;
	cout << "*ptr:" << *ptr << endl;

	int **ptr2 = &ptr;
	**ptr2 = 30;

	var = 30;
	cout << "**ptr2 = 30; iþleminden sonra..:" << endl;
	cout << "var:" << var << endl;
	cout << "*ptr:" << *ptr << endl;
	cout << "ptr:" << ptr << endl;
	cout << "&ptr:" << &ptr << endl;
	cout << "ptr2:" << ptr2 << endl;
	cout << "*ptr2:" << *ptr2 << endl;
	cout << "**ptr2:" << **ptr2 << endl;
}

//random ile oluþturulan 1-10 arasýndaki 10 sayýnýn toplamýnýn tutulduðu adresi çaðrýldýðý fonksiyona gönderen fonksiyonu yazalým.
int * rastgele() {
	int sayi, toplam=0;
	for (int i = 1; i <= 10; i++)
	{
		sayi = rand() % 10 + 1;
		cout << sayi << " ";
		toplam += sayi;
	}
	cout << endl;
	cout << "&toplam:" << &toplam << endl;
	cout << "toplam:" << toplam << endl;
	return &toplam;
}