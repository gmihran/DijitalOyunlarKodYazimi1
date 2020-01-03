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
	cout << "Değer sıfır girilene kadar döngü devam ediyor...\n";
	maks();
	cout << "Değer sıfır girilene kadar döngü devam ediyor...\n";
	farklar();
	cout << "Kullanıcı adı: admin Parola: nimda" << endl;
	cout << "Hatalı giriş sayısı:" << giris() << endl;
	if (giris2())
		cout << "Giriş başarılı\n";
	else
		cout << "Giriş başarısız\n";
}

//Örnek-6:
//Rastgele üretilen 20 sayıdan 1-100 arasındaki sayılardan tek olanları ve çift olanları ayrı ayrı ekrana yazdıran fonksiyon
//Not: Değerler bir dizide tutulmak zorundadır
//Parametre (Bu fonksiyona gönderilen değer) : YOK (NULL)
//Geri döndürdüğü değer (Return değeri) : YOK (void)
void rastgele() {
	int sayilar[20], i;
	for (i = 0; i < 20; i++){
		sayilar[i] = rand() % 100 + 1;
	}
	cout << "Tek sayılar\n";
	for (i = 0; i < 20; i++){
		if (sayilar[i] % 2 == 1) {
			cout << sayilar[i] << endl;
		}
	}
	cout << "Çift sayılar\n";
	for (i = 0; i < 20; i++) {
		if (sayilar[i] % 2 == 0) {
			cout << sayilar[i] << endl;
		}
	}
}

//Örnek-7:
//Rastgele üretilen  1-100 arasındaki 20 sayıdan tek olanları ve çift olanları ayrı ayrı ve alt alta ekrana yazdıran,
//tek ve çift sayıların toplamlarını ekrana yazdıran fonksiyon
//Not: Değerler bir dizide tutulmak zorundadır
//Parametre (Bu fonksiyona gönderilen değer) : YOK (NULL)
//Geri döndürdüğü değer (Return değeri) : YOK (void)
void rastgele2() {
	int sayilar[20], i, tektoplam=0, cifttoplam=0;
	for (i = 0; i < 20; i++) {
		sayilar[i] = rand() % 100 + 1;
	}
	cout << "Tek sayılar\n";
	for (i = 0; i < 20; i++) {
		if (sayilar[i] % 2 == 1) {
			cout << sayilar[i] << endl;
			tektoplam += sayilar[i]; //tektoplam = tektoplam + sayilar[i];
		}
	}
	cout << "Tek sayıların toplamı:" << tektoplam << endl;
	cout << "Çift sayılar\n";
	for (i = 0; i < 20; i++) {
		if (sayilar[i] % 2 == 0) {
			cout << sayilar[i] << endl;
			cifttoplam += sayilar[i];
		}
	}
	cout << "Çift sayıların toplamı:" << cifttoplam << endl;
}

//Örnek-8:
//Fonksiyona gelen sayı kadar, fonksiyona gelen sayı aralığında değer üreten ve bu sayıları alt alta ekrana yazdırıp, 
//sayıların toplamını geri döndüren fonksiyon
//Parametre (Bu fonksiyona gönderilen değer) : int miktar, int baslangic, int bitis
//Geri döndürdüğü değer (Return değeri) : int (toplam)
int rastgele3(int miktar, int baslangic, int bitis) {
	int sayi, toplam = 0;
	for (int i = 1; i <= miktar; i++){
		sayi = rand() % (bitis-baslangic+1) +baslangic;
		cout << sayi << endl;
		toplam += sayi;
	}
	return toplam;
}

//Örnek-9:Kullanıcı 0 sayısını girene kadar (sayı 0 olmadığı sürece) sayı girmesini sağlayıp, 
//bu sayıların en büyüğünü (sıfır sayısını dahil etmeden büyük sayı bulunmalıdır) ekrana yazdıran fonksiyon
void maks() {
	int sayi, mak = INT_MIN;
	//mak değeri karşılaştırırken (sayi > mak) ilk değerine ihtiyacımız var. 
	do
	{
		cout << "Sayı:";
		cin >> sayi;
		if (sayi > mak && sayi!=0)
			mak = sayi;
	} while (sayi!=0);
	cout << "Maksimum değer:" << mak << endl;
}

//Örnek-10:Kullanıcı 0 sayısını girene kadar sayı girmesini sağlayıp, bu sayıların farklarını ekrana yazdıran fonksiyon
//Ör: 3 4 girdiğinde Çıktı:-1, 6 girdiğinde Çıktı:-2, 0 girdiğinde Çıktı:6 program sonlanır.
void farklar() {
	int sayi, ilksayi;
	cout << "İlk sayı:";
	cin >> ilksayi;
	do
	{
		cout << "Sayı:";
		cin >> sayi;
		cout << "Fark:" << ilksayi - sayi << endl;
		ilksayi = sayi;
		cout << "İlk sayı:" << ilksayi << endl;
	} while (sayi!=0);
}


//Örnek-11:Kullanıcı adı ve parola girişi doğru olana kadar (her iki bilgi de doğru olmadığı sürece) kontrol edip, 
//kullanıcı adı ve parola bilgisinin kaç kere yanlış girildiğini geri döndüren fonksiyon
int giris() {
	string k_adi, parola;
	int miktar = 0;
	do
	{
		cout << "Kullanıcı adı:";
		cin >> k_adi;
		cout << "Parola:";
		cin >> parola;
		if (k_adi == "admin" && parola == "nimda") {
			//Güvenli bir kontrol yapmıyoruz! 
			//Güvenli olması adına burada kullanıcı adı ve parola açık bir şekilde yazılmaması daha uygundur.
			cout << "Giriş başarılı\n";
			break;
		}
		else {
			miktar++;
			cout << "Hatalı giriş\n";
		}
			
	} while (true);
	return miktar;
}

//Örnek-12:Kullanıcıdan kullanıcı adı ve parola girişi alıp  kontrol edelim, 3 yanlış yapma hakkı olsun. 
//Girişin başarılı bir şekilde olup olmadığını (bool değer) döndürsün ve kaç hakkı kaldığını ekrana yazdırsın
bool giris2() {
	string k_adi, parola;
	int hak = 3;
	bool kontrol = false;
	do
	{
		cout << "Kullanıcı adı:";
		cin >> k_adi;
		cout << "Parola:";
		cin >> parola;
		if (k_adi == "admin" && parola == "nimda") {
			//Güvenli bir kontrol yapmıyoruz! 
			//Güvenli olması adına burada kullanıcı adının ve parolanın açık bir şekilde yazılmaması daha uygundur.
			kontrol = true;
			break;
		}
		else {
			hak--;
			cout << "Kalan hakkınız:" << hak << endl;
		}
	} while (hak>0);
	return kontrol;
}
