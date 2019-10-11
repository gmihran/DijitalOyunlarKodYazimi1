#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	//Klavyeden girilen iki sayının toplamını ve ortalamasını ekrana yazdırınız.

	setlocale(LC_ALL, "Turkish");
	
	int sayi1, sayi2, toplam, ort;
	cout << "İki sayı giriniz\n";
	cin >> sayi1 >> sayi2;
	//1.yöntem:
	toplam = sayi1 + sayi2;
	ort = toplam / 2;
	cout << "Toplama:" << toplam << endl;
	cout << "Ortalama:" << ort;
	
	//2.yöntem:
	cout << "Toplama:" << sayi1+sayi2 << endl;
	cout << "Ortalama:" << (sayi1 + sayi2) / 2;
	
	//3.yöntem:
	cout << "Toplama:" << sayi1 + sayi2 << endl << "Ortalama:" << (sayi1 + sayi2) / 2 << endl;

	//Bir dersin vize, ödev, quiz ve final notlarının girilerek ortalamasını hesaplayınız ve ekrana yazdırınız. Vize notunun katkısı %30, ödev %10, quiz %10, final notunun katkısı %50’dir. 
	//Ortalama = vize * 30 % +ödev * 10 % +quiz * 10 % +final * 50 %

	
	int vize, final, quiz, odev,ortalama;
	cout << "Vize:";
	cin >> vize;
	cout << "Final:";
	cin >> final;
	cout << "Quiz:";
	cin >> quiz;
	cout << "Ödev:";
	cin >> odev;
	ortalama = int(vize * 0.3 +final * 0.5 +quiz * 0.1 +odev * 0.1) ;
	cout << "Ortalama:" << ortalama << endl;
	
	
	//Değişken tanımlama:
	int sayi=10;
	float ondaliklisayi=10.5;
	char harf;
	bool durum;
	cout << "Tam sayı:";
	cin >> sayi ;
	cout << "Sayı:"<< int(sayi) << endl;
	cout << "Ondalıklı sayı:";
	cin >> ondaliklisayi;
	cout <<"Ondalıklı:" <<ondaliklisayi << endl;
	cout << "Harf:";
	cin >> harf;
	cout << "Harf:" << harf << endl;
	
	if (sayi > 10)
		durum = true;
	else
		durum = false;
	cout << "Sayı 10'dan büyük mü?:" << durum << endl;
	if (harf == 'A')
		cout << "A girildi";
	else
		cout << "A girilmedi";
	cout << endl;
	//Girilen iki sayıdan büyük olan sayıyı ekrana yazdıralım.
	//int sayi1, sayi2;
	//sayi1 ve sayi2 daha önceden tanımlandığı için tekrar tanımlamıyoruz.
	cout << "İki sayı giriniz:";
	cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2)
		cout << "Büyük sayı:" << sayi1 << endl;
	else
		cout << "Büyük sayı:" << sayi2 << endl;
	//Girilen iki sayıdan hangisinin büyük olduğunu veya eşitse
	//eşit olduklarını ekrana yazdıralım
	//1.yöntem
	//Bu if bloğunda program çalıştığında tüm koşullara tek tek bakılır.
	//Bu birbirine bağlı koşullarda tercih edilmemelidir.
	/*
	if (sayi1 > sayi2)
		cout << "1.sayı 2.sayıdan daha büyüktür";
	if (sayi1 < sayi2)
		cout << "2.sayı 1.sayıdan daha büyüktür";
	if (sayi1 == sayi2)
		cout << "Sayılar birbirine eşit";
	cout << endl;
	*/
	//2.yöntem:
	//Birbirine bağlı koşulların olması durumunda bu yapı tercih edilmelidir.
	//Bu koşul yapısı bir koşulun sağlanması durumunda diğer koşullara bakmaz.
	if (sayi1 > sayi2)
		cout << "1.sayı 2.sayıdan daha büyüktür";
	else if (sayi1 < sayi2)
		cout << "2.sayı 1.sayıdan daha büyüktür";
	else
		cout << "Sayılar birbirine eşit";
	cout << endl;
	//sayi1 ve sayi2'nin tek veya çift olduğunu ekrana yazdıralım
	// % karakteri ile bir sayının diğer bir sayıya bölümünden kalan(mod) hesaplanır.
	//Ör. 5%2 işleminin sonucu 1'dir. 4%2 işleminin sonucu 0'dır.
	//Bunu bir koşulda ifade etmek için;
	//Tek için: if(sayi%2==1), Çift için: if (sayi%2==0) koşul blokları kullanılır.
	if (sayi1 % 2 == 0)
	{
		//Birden fazla kod satırının çalışması için kodlar {} arasında yazılır.
		cout << sayi1;
		cout << " Çifttir\n";
	}
	else
		cout << sayi1 << " Tektir" << endl;

	if (sayi2 % 2 == 0)
		cout << sayi2 << " Çifttir\n";
	else
		cout << sayi2 << " Tektir\n";

	
}
