#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	//Bu konudan (dosya işlemleri ve try catch) sınavda sorumlu değilsiniz. Sınavda soru gelmeyecek.
	//Dosya girdi-çıktı işlemleri için üç sınıf tanımlanmıştır.
	//ifstream → Dosya okuma
	//ofstream → Dosyaya yazma //Dosyayı sıfırlar
	//fstream  → Dosyayı güncelleme //Mevcut dosya üzerinden değişiklikleri uygular. Dosya yoksa yeniden oluşturur.
	
	fstream dosya("hatalar.txt",ios::app);
	//Dosyayı açma kipi:
	/*Çıktı dosyaları aşağırdaki farklı dosya açama modları kullanılarak  açılabilir.
	ios::out : Yazma işlemi dosyanın başından başlayarak yapılır ve daha önceden veri girilmişse yeni veriler bu verilerin üstüne yazılır.
	ios::app : Yazma işlemi dosyanın en son verisin olduğu yerden başlayarak yapılır ve daha önceden veri girilmişse herhangi bir veri kaybı yaşanmaz.
	Eğer dosya tanımında dosya açma modu kullanmazsak, varsayılan mod ios::out olacaktır.
	*/
	if (!dosya)
		cout << "Dosya açılamadı" << endl;
	else
		cout << "Dosya basarili bir sekilde acildi\n";

	int sayi=10;
	
	try
	{
		cout << "Sayi:";
		cin >> sayi;
		int hata;
		if (sayi < 0 || sayi > 100) {
			hata = 1;
			throw hata; //girilen sayının 1 ile 100 arasında olmaması durumunda hata oluşacağını tanımladık. Bu durumunda catch (int hata) fonksiyonunun içindeki kod satırları çalışır.
		}
		else if (sayi == 0) {
			hata = 0;
			throw hata;//girilen sayının 0 olması veya klavyeden sayısal bir değerin girilmemesi (metin girişi yapılması) durumunda hata oluşacağını tanımladık. Bu durumunda catch (int hata) fonksiyonunun içindeki kod satırları çalışır.
			//metin girişi yapıldığında değişkenin içerisine 0 değeri atanıyor
		}
			
		cout << sayi * 2 << endl;

	}
	catch (int hata)
	{
		if (hata == 0) 
			cout << "Hatali giris\n";
		else
			cout << "Sayi 1 ile 100 arasinda olmalidir\n";
		dosya << hata << endl; //dosyaya hata içerisinde saklanan değerin yazılmasını sağlar. Dosyayı ios::app kipiyle açıldığı için dosyayının sonuna ekleme yapar.
	}

	//dosya.seekp(0); //bu kod ile 0. byte değerine kursör gönderilir.

	dosya.close();


	ifstream dosyaOku("hatalar.txt", ios::in);
	
	
	if (dosyaOku.eof())
		cout << "dosyaOkunin sonu\n";
	else
		cout << "dosyaOkunin sonu degil\n";
	
	//ifstream dosyaOkuOku("hatalar.txt");
	char karakter;
	string satir;
	/*
	cout << "Karakterler okunuyor\n";
	if (dosyaOku.is_open()) {
		while (!dosyaOku.eof()) {
			dosyaOku >> karakter;
			cout << karakter << endl;
		}
			
	}*/
	cout << "Satirlar okunuyor\n";
	if (dosyaOku.is_open()) {
		while (getline(dosyaOku,satir))
			cout << satir << endl;
	}
	dosyaOku.close(); //dosyaOku kapatıldı

	ifstream dosyaOku2("personel.txt", ios::in);
	/*
	if (dosyaOku2.is_open()) {
		while (getline(dosyaOku2, satir))
			cout << satir << endl;
	}
	if (dosyaOku2.is_open()) {
		while (dosyaOku2.get(karakter))
			cout << karakter << endl;
	}*/
	int no;
	string ad, soyad;
	cout << "Personel bilgileri yazdiriliyor...\n";
	if (dosyaOku2.is_open()) {
		while (!dosyaOku2.eof()) {
			dosyaOku2 >> no >> ad >> soyad;
			cout << no << " " << ad << " " << soyad << endl;
		}	
	}

	if (dosyaOku2.eof()) {
		cout << "Dosyanin sonuna gelindi\n";
	}

	dosyaOku2.seekg(0); //Dosyanın başına (0.byte değerine) gider 

	if (dosyaOku2.eof()) {
		cout << "Dosyanin sonu\n"; //Bu kod satırı dosyaOku2.seekg(0); bu adım gerçekleştiği için çalışmaz. Kursör (imleç) dosyanın başına gitti
	}
	string aranan;
	cout << "Soyadini getirmek istediginiz personelin adi:";
	cin >> aranan;
	//Personel adını aratacağız
	if (dosyaOku2.is_open()) {
		while (!dosyaOku2.eof()) {
			dosyaOku2 >> no >> ad >> soyad;
			if (aranan == ad)
				cout << "Soyadi:" << soyad << endl;
		}
	}
	
	dosyaOku2.seekg(0); //Dosyanın başına (0.byte değerine) gider 
	int numaralar[4], sayac=0;
	string adlar[4], soyadlar[4];
	if (dosyaOku2.is_open()) {
		while (!dosyaOku2.eof()) {
			dosyaOku2 >> numaralar[sayac] >> adlar[sayac] >> soyadlar[sayac];
			sayac++;
		}
	}
	dosyaOku2.close();
	bool kontrol = false;
	for (int i = 0; i < 4; i++)
	{
		if (adlar[i] == aranan) {
			kontrol = true;
			cout << "Soyad:" << soyadlar[i] << endl;
		}
			
	}
	if (!kontrol)
		cout << "Personel bulunamadi\n";


	ofstream dosyaipYaz("ipyedek.txt");
	ifstream dosyaipOku("ip.txt", ios::in);
	string ip;
	int s;
	if (dosyaipOku.is_open()) {
		while (!dosyaipOku.eof()) {
			dosyaipOku >>s >> ip ;
			cout << s << " " << ip << endl;
			dosyaipYaz << s << " " << ip << endl;
		}
	}
	system("pause");
}