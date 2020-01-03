#include "pch.h"
#include <iostream>
#include <random>
#include <time.h>
#include <locale>
#include <string>

using namespace std;

void rastgele();
void rastgele2();
int rastgele3(int miktar, int baslangic, int bitis);
void maks();
void farklar();
int giris();
bool giris2();

int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL));
	int t;
	
	rastgele();
	rastgele2();
	cout << "Toplam:" << rastgele3(5, 20, 50) << endl;
	t = rastgele3(3, 3, 5);
	cout << "Toplam:" << t << endl;
	cout << "Deðer sýfýr girilene kadar döngü devam ediyor...\n";
	maks();
	cout << "Deðer sýfýr girilene kadar döngü devam ediyor...\n";
	farklar();
	cout << "Kullanýcý adý: admin Parola: nimda" << endl;
	cout << "Hatalý giriþ sayýsý:" << giris() << endl;
	if (giris2())
		cout << "Giriþ baþarýlý\n";
	else
		cout << "Giriþ baþarýsýz\n";
}

//Örnek-6:
//Rastgele üretilen 20 sayýdan 1-100 arasýndaki sayýlardan tek olanlarý ve çift olanlarý ayrý ayrý ekrana yazdýran fonksiyon
//Not: Deðerler bir dizide tutulmak zorundadýr
//Parametre (Bu fonksiyona gönderilen deðer) : YOK (NULL)
//Geri döndürdüðü deðer (Return deðeri) : YOK (void)
void rastgele() {
	int sayilar[20], i;
	for (i = 0; i < 20; i++){
		sayilar[i] = rand() % 100 + 1;
	}
	cout << "Tek sayýlar\n";
	for (i = 0; i < 20; i++){
		if (sayilar[i] % 2 == 1) {
			cout << sayilar[i] << endl;
		}
	}
	cout << "Çift sayýlar\n";
	for (i = 0; i < 20; i++) {
		if (sayilar[i] % 2 == 0) {
			cout << sayilar[i] << endl;
		}
	}
}

//Örnek-7:
//Rastgele üretilen  1-100 arasýndaki 20 sayýdan tek olanlarý ve çift olanlarý ayrý ayrý ve alt alta ekrana yazdýran,
//tek ve çift sayýlarýn toplamlarýný ekrana yazdýran fonksiyon
//Not: Deðerler bir dizide tutulmak zorundadýr
//Parametre (Bu fonksiyona gönderilen deðer) : YOK (NULL)
//Geri döndürdüðü deðer (Return deðeri) : YOK (void)
void rastgele2() {
	int sayilar[20], i, tektoplam=0, cifttoplam=0;
	for (i = 0; i < 20; i++) {
		sayilar[i] = rand() % 100 + 1;
	}
	cout << "Tek sayýlar\n";
	for (i = 0; i < 20; i++) {
		if (sayilar[i] % 2 == 1) {
			cout << sayilar[i] << endl;
			tektoplam += sayilar[i]; //tektoplam = tektoplam + sayilar[i];
		}
	}
	cout << "Tek sayýlarýn toplamý:" << tektoplam << endl;
	cout << "Çift sayýlar\n";
	for (i = 0; i < 20; i++) {
		if (sayilar[i] % 2 == 0) {
			cout << sayilar[i] << endl;
			cifttoplam += sayilar[i];
		}
	}
	cout << "Çift sayýlarýn toplamý:" << cifttoplam << endl;
}

//Örnek-8:
//Fonksiyona gelen sayý kadar, fonksiyona gelen sayý aralýðýnda deðer üreten ve bu sayýlarý alt alta ekrana yazdýrýp, sayýlarýn toplamýný geri döndüren fonksiyon
//Parametre (Bu fonksiyona gönderilen deðer) : int miktar, int baslangic, int bitis
//Geri döndürdüðü deðer (Return deðeri) : int (toplam)
int rastgele3(int miktar, int baslangic, int bitis) {
	int sayi, toplam = 0;
	for (int i = 1; i <= miktar; i++){
		sayi = rand() % (bitis-baslangic+1) +baslangic;
		cout << sayi << endl;
		toplam += sayi;
	}
	return toplam;
}

//Örnek-9:Kullanýcý 0 sayýsýný girene kadar (sayý 0 olmadýðý sürece) sayý girmesini saðlayýp, bu sayýlarýn en büyüðünü (sýfýr sayýsýný dahil etmeden büyük sayý bulunmalýdýr) ekrana yazdýran fonksiyon
void maks() {
	int sayi, mak = INT_MIN;
	//mak deðeri karþýlaþtýrýrken (sayi > mak) ilk deðerine ihtiyacýmýz var. 
	do
	{
		cout << "Sayý:";
		cin >> sayi;
		if (sayi > mak && sayi!=0)
			mak = sayi;
	} while (sayi!=0);
	cout << "Maksimum deðer:" << mak << endl;
}

//Örnek-10:Kullanýcý 0 sayýsýný girene kadar sayý girmesini saðlayýp, bu sayýlarýn farklarýný ekrana yazdýran fonksiyon
//Ör: 3 4 girdiðinde Çýktý:-1, 6 girdiðinde Çýktý:-2, 0 girdiðinde Çýktý:6 program sonlanýr.
void farklar() {
	int sayi, ilksayi;
	cout << "Ýlk sayý:";
	cin >> ilksayi;
	do
	{
		cout << "Sayý:";
		cin >> sayi;
		cout << "Fark:" << ilksayi - sayi << endl;
		ilksayi = sayi;
		cout << "Ýlk sayý:" << ilksayi << endl;
	} while (sayi!=0);
}


//Örnek-11:Kullanýcý adý ve parola giriþi doðru olana kadar (her iki bilgi de doðru olmadýðý sürece) kontrol edip, kullanýcý adý ve parola bilgisinin kaç kere yanlýþ girildiðini geri döndüren fonksiyon
int giris() {
	string k_adi, parola;
	int miktar = 0;
	do
	{
		cout << "Kullanýcý adý:";
		cin >> k_adi;
		cout << "Parola:";
		cin >> parola;
		if (k_adi == "admin" && parola == "nimda") {
			//güvenli bir kontrol yapmýyoruz! Güvenli olmasý adýna burada kullanýcý adý ve parola açýk bir þekilde yazýlmamasý daha uygundur
			cout << "Giriþ baþarýlý\n";
			break;
		}
		else {
			miktar++;
			cout << "Hatalý giriþ\n";
		}
			
	} while (true);
	return miktar;
}

//Örnek-12:Kullanýcýdan kullanýcý adý ve parola giriþi alýp  kontrol edelim, 3 yanlýþ yapma hakký olsun. Giriþin baþarýlý bir þekilde olup olmadýðýný (bool deðer) döndürsün ve kaç hakký kaldýðýný ekrana yazdýrsýn
bool giris2() {
	string k_adi, parola;
	int hak = 3;
	bool kontrol = false;
	do
	{
		cout << "Kullanýcý adý:";
		cin >> k_adi;
		cout << "Parola:";
		cin >> parola;
		if (k_adi == "admin" && parola == "nimda") {
			//Güvenli bir kontrol yapmýyoruz! Güvenli olmasý adýna burada kullanýcý adýnýn ve parolanýn açýk bir þekilde yazýlmamasý daha uygundur
			kontrol = true;
			break;
		}
		else {
			hak--;
			cout << "Kalan hakkýnýz:" << hak << endl;
		}
	} while (hak>0);
	return kontrol;
}