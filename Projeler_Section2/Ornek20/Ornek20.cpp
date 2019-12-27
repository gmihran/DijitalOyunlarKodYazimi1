#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//Kaynaklar: 
	//https://turkmuhendis.net/cppprogramlama/dosya-islemleri/
	//https://www.yusufsezer.com.tr/cpp-dosya-islemleri/

	//Bu konudan (dosya işlemleri ve try catch) sınavda sorumlu değilsiniz. Sınavda soru gelmeyecek.
	//Dosya girdi-çıktı işlemleri için üç sınıf tanımlanmıştır.
	//ifstream → Dosya okuma
	//ofstream → Dosyaya yazma //Dosyayı sıfırlar
	//fstream  → Dosyayı güncelleme //Mevcut dosya üzerinden değişiklikleri uygular. Dosya yoksa yeniden oluşturur.
	
	int sayi, hata;
	string s;
	int sayi1;

	fstream dosya("hatalar.txt", ios::app);

	if (dosya) //dosya değeri dosya açılırsa içerisinde true değerini saklar
		cout << "Dosya acildi" << endl;
	else //dosya değeri dosya açılamazsa içerisinde false değerini saklar
		cout << "Dosya acilamadi" << endl;

	
	try
	{
		cout << "Sayi:";
		cin >> sayi;
		if (sayi < 0 || sayi>100) {
			hata = 1;
			throw hata;
			//girilen sayının 1 ile 100 arasında olmaması durumunda hata oluşacağını tanımladık.
			//Bu durumunda catch (int hata) fonksiyonunun içindeki kod satırları çalışır.
		}
		else if (sayi == 0) {
			hata = 0;
			throw hata;
			//girilen sayının 0 olması veya klavyeden sayısal bir değerin girilmemesi
			//(metin girişi yapılması) durumunda hata oluşacağını tanımladık. Bu durumunda catch (int hata)
			//fonksiyonunun içindeki kod satırları çalışır.
			//metin girişi yapıldığında değişkenin içerisine 0 değeri atanıyor
		}
		cout << "Karesi:" << sayi * sayi << endl;
	}
	catch (int hata)
	{
		dosya << hata << endl;
		if (hata == 0) //Klavyeden
			cout << "Hatali giris yaptiniz\n";
		else //hata=1 değerine eşitse çalışır
			cout << "Hatali deger\n";
	}
	dosya.close();

	string satir;

	ifstream dosyaOku("hatalar.txt");
	while (!dosyaOku.eof()) {
		while (getline(dosyaOku, satir)) {
			cout << satir << endl;
		}
	}
	dosyaOku.close();
	//Klavyeden girilen değerin karakter mi sıfır mı olduğunu nasıl anlarız?
	//Klavyeden girilen karakter değerleri int değişkene atanırken sıfır olarak atanır.

	
	while(true) {
		cout << "Deger:";
		cin >> s;
		try
		{
			sayi1 = stoi(s); //Bir string değer (sayı olmayan değer) int değere dönüştürülken exception (hata) oluşur.
			cout << "Klavyeden sayi girisi yapildi\n";
			break;
		}
		catch (const std::exception&)
		{
			cout << "Klavyeden metin girisi yapildi\n";
		}
	}
	
	
	ifstream dosyaOku2("personel.txt", ios::in);
	int no;
	string ad, soyad;
	if (dosyaOku2.is_open()) {
		while (!dosyaOku2.eof()) {
			dosyaOku2 >> no >> ad >> soyad;
			cout << no << "\t" << ad << "\t" << soyad << endl;
		}
	}
	if (dosyaOku2.eof())
		cout << "Dosyanin sonunda\n";
	else
		cout << "Dosyanin sonunda degil\n";

	dosyaOku2.seekg(0); //dosyanın 0.byte değerine (dosyanın başına) gitti

	if (dosyaOku2.eof())
		cout << "Dosyanin sonunda\n";
	else
		cout << "Dosyanin sonunda degil\n";

	while (!dosyaOku2.eof()) {
		dosyaOku2 >> no >> ad >> soyad;
		cout << no << "\t" << ad << "\t" << soyad << endl;
	}
	

	//Klavyeden girilen isim değerini dosyada aratıp varsa kişinin diğer bilgilerini yazdıralım, yoksa "Personel bulunamadı" yazdıralım
	//1.çözüm:
	dosyaOku2.seekg(0);
	string arananad;
	bool kontrol = false;
	cout << "Aranan personelin adi:";
	cin >> arananad;
	while (!dosyaOku2.eof()) {
		dosyaOku2 >> no >> ad >> soyad;
		if (ad == arananad) {
			kontrol = true;
			cout << "No:" << no << " Ad:" << ad << " Soyad:" << soyad << endl;
			break;
		}
	}
	if (kontrol == false)
		cout << "Personel bulunamadi\n";

	//2.Çözüm:
	dosyaOku2.seekg(0);
	int numaralar[4], sayac=0;
	string adlar[4], soyadlar[4];
	while (!dosyaOku2.eof()) {
		dosyaOku2 >> numaralar[sayac] >> adlar[sayac] >> soyadlar[sayac];
		sayac += 1;
	}
	kontrol = false;
	for (int i = 0; i < 4; i++){
		if (adlar[i] == arananad) {
			kontrol = true;
			cout << "No:" << no << " Ad:" << ad << " Soyad:" << soyad << endl;
			break;
		}
	}
	if (kontrol == false)
		cout << "Personel bulunamadi\n";

	dosyaOku2.close();
	system("pause");
}
