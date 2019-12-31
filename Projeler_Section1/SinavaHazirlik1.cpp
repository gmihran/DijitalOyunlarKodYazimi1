#include "pch.h"
#include <iostream>
#include <locale>
#include <random>
#include <time.h>

using namespace std;

int kare(int sayi1, int sayi2);
void sayi();
int faktoriyel(int sayi);
void faktoriyel_yazdir(int sayi);
void rastgele5_toplam();

int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL)); //Program her çalıştırıldığında Random ile üretilen değerlerin farklı değerler olmasını sağlar. Ama bu sayının farklılıklarını ifade etmez. Yani 5 üretildiyse tekrar üretilebilir.
	//sayi();

	cout << "faktoriyel() fonksiyonu çalışıyor...\n";
	cout <<"0!=" << faktoriyel(0) << endl;
	cout <<"5!=" << faktoriyel(5) << endl;
	cout <<"-4!=" << faktoriyel(-4) << endl;
	if (faktoriyel(-4) == 0)
		cout << -4 << " sayısının faktöriyeli yoktur.\n";

	cout << "faktoriyel_yazdir() fonksiyonu çalışıyor...\n";
	faktoriyel_yazdir(-4);
	faktoriyel_yazdir(0);
	faktoriyel_yazdir(6);

	cout << "rastgele5_toplam() fonksiyonu çalışıyor...\n";
	rastgele5_toplam();

	system("pause");
	return 0;
}

//Örnek-1:
//Kendisine gönderilen iki tamsayı değerinden büyük olanın karesini, 
//sayılar eşitse sayılardan herhangi birini geri döndüren fonksiyonu yazınız.
int kare(int sayi1, int sayi2) {
	if (sayi1 > sayi2)
		return sayi1 * sayi1;
	else if (sayi1 < sayi2)
		return sayi2 * sayi2;
	else
		return sayi1; //return sayi2;
}
//Örnek-2:
//Girilen iki tamsayı değerini kare fonskiyonuna gönderip fonksiyondan gelen değeri ekrana yazdıran fonskiyonu yazınız. 
void sayi() {
	//Değer döndürmediği için void olarak tanımladık
	//Değer almadığı için herhangi bir parametresi yok 
	//() yani parantez içi boş 
	int s1, s2;
	cout << "İki sayı girin:";
	cin >> s1 >> s2;
	cout << kare(s1, s2) << endl;
}

//Örnek-3:
//Kendisine gönderilen tamsayı değerinin faktöriyelini geri döndüren fonksiyonu yazınız. 
//Eğer kendisine gönderilen sayı negatif ise 0 değerini döndürelim.
//Not: 0!=1
int faktoriyel(int sayi) {
	//Eğer bir değer döndürmüyor olsaydı fonksiyonu; 
	//void faktoriyel(int sayi) 
	//şeklinde tanımlardık
	//Faktöriyel : Ör: 5!=1*2*3*4*5 veya 5!=5*4*3*2*1
	int sonuc = 1;
	for (int i = 1; i <= sayi; i++) {
		sonuc *= i; //sonuc = sonuc * i;
	}
	/*
	//1.yöntem:
	if (sayi < 0)
		return 0;
	else
		return sonuc;
	*/

	//2.yöntem:
	if (sayi < 0)
		sonuc = 0;
	return sonuc;
}

//Örnek-4:
//Kendisine gönderilen sayıyı faktöriyel fonksiyonuna gönderip,
//faktöriyel fonksiyonundan gelen değer 0 ise "... sayısının faktöriyeli yoktur.", 
//0 değilse sayi!=sonuc Ör/5!=120 çıktısını versin
void faktoriyel_yazdir(int sayi) {
	int fakt = faktoriyel(sayi);
	if (fakt == 0)
		cout << sayi << " sayısının faktöriyeli yoktur.\n";
	else
		cout << sayi << "!=" << fakt << endl;
}

//Örnek-5:
//Rastgele üretilen 1-100 arasında 5 sayının toplamını ekrana yazdıran fonksiyon
//Parametre (Bu fonksiyona gönderilen değer) : YOK (NULL)
//Geri döndürdüğü değer (Return değeri) : YOK (void)
void rastgele5_toplam() {
	int sayi, toplam = 0;
	for (int i = 1; i <= 5; i++){
		sayi = rand() % 100 + 1; 
		//Başlangıç değeri = 1 (+1 ile ifade ettik)
		//Bitiş değeri = 100 (100+1-1=100) İkisinin toplamından 1 değeriniş çıkararak hesaplarız

		//Ör: 31 ile 54 arasında üretilecek deseydik: 
		//sayi = rand() % 24 + 31;
		cout << sayi << endl;
		toplam += sayi; //toplam = toplam + sayi;
	}
	cout << "Toplam=" << toplam << endl;

}

//Aşağıdaki Cuma günü derste çözeceğiz

//Örnek-6:
//Rastgele üretilen 20 sayıdan 1-100 arasındaki sayılardan tek olanları ve çift olanları ayrı ayrı ekrana yazdıran fonksiyon
//Not: Değerler bir dizide tutulmak zorundadır
//Parametre (Bu fonksiyona gönderilen değer) : YOK (NULL)
//Geri döndürdüğü değer (Return değeri) : YOK (void)



//Örnek-6:
//Rastgele üretilen 5 sayının toplamını ekrana yazdıran fonksiyon
//Parametre (Bu fonksiyona gönderilen değer) : YOK (NULL)
//Geri döndürdüğü değer (Return değeri) : YOK (void)

//Cuma günü devam edeceğiz...
