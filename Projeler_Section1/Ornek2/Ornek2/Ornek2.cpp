#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	//Örnek-1.	Klavyeden girilen iki sayýnýn toplamýný ve ortalamasýný ekrana yazdýrýnýz.

	setlocale(LC_ALL, "Turkish");
	
	int sayi1, sayi2, toplam, ort;
	cout << "Ýki sayý giriniz\n";
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

	//Bir dersin vize, ödev, quiz ve final notlarýnýn girilerek ortalamasýnýn hesaplayýnýz ve ekrana yazdýrýnýz. Vize notunun katkýsý %30, ödev %10, quiz %10, final notunun katkýsý %50’dir. 
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
	
	
	//Deðiþken tanýmlama:
	int sayi=10;
	float ondaliklisayi=10.5;
	char harf;
	bool durum;
	cout << "Tam sayý:";
	cin >> sayi ;
	cout << "Sayý:"<< int(sayi) << endl;
	cout << "Ondalýklý sayý:";
	cin >> ondaliklisayi;
	cout <<"Ondalýklý:" <<ondaliklisayi << endl;
	cout << "Harf:";
	cin >> harf;
	cout << "Harf:" << harf << endl;
	
	if (sayi > 10)
		durum = true;
	else
		durum = false;
	cout << "Sayý 10'dan büyük mü?:" << durum << endl;
	if (harf == 'A')
		cout << "A girildi";
	else
		cout << "A girilmedi";
	cout << endl;
	//Girilen iki sayýdan büyük olan sayýyý ekrana yazdýralým.
	//int sayi1, sayi2;
	//sayi1 ve sayi2 daha önceden tanýmlandýðý için tekrar tanýmlamýyoruz.
	cout << "Ýki sayý giriniz:";
	cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2)
		cout << "Büyük sayý:" << sayi1 << endl;
	else
		cout << "Büyük sayý:" << sayi2 << endl;
	//Girilen iki sayýdan hangisinin büyük olduðunu veya eþitse
	//eþit olduklarýný ekrana yazdýralým
	//1.yöntem
	//Bu if bloðunda program çalýþtýðýnda tüm koþullara tek tek bakýlýr.
	//Bu birbirine baðlý koþullarda tercih edilmemelidir.
	/*
	if (sayi1 > sayi2)
		cout << "1.sayý 2.sayýdan daha büyüktür";
	if (sayi1 < sayi2)
		cout << "2.sayý 1.sayýdan daha büyüktür";
	if (sayi1 == sayi2)
		cout << "Sayýlar birbirine eþit";
	cout << endl;
	*/
	//2.yöntem:
	//Birbirine baðlý koþullarýn olmasý durumunda bu yapý tercih edilmelidir.
	//Bu koþul yapýsý bir koþulun saðlanmasý durumunda diðer koþullara bakmaz.
	if (sayi1 > sayi2)
		cout << "1.sayý 2.sayýdan daha büyüktür";
	else if (sayi1 < sayi2)
		cout << "2.sayý 1.sayýdan daha büyüktür";
	else
		cout << "Sayýlar birbirine eþit";
	cout << endl;
	//sayi1 ve sayi2'nin tek veya çift olduðunu ekrana yazdýralým
	// % karakteri ile bir sayýnýn diðer bir sayýya bölümünden kalan(mod) hesaplanýr.
	//Ör. 5%2 iþleminin sonucu 1'dir. 4%2 iþleminin sonucu 0'dýr.
	//Bunu bir koþulda ifade etmek için;
	//Tek için: if(sayi%2==1), Çift için: if (sayi%2==0) koþul bloklarý kullanýlýr.
	if (sayi1 % 2 == 0)
	{
		//Birden fazla kod satýrýnýn çalýþmasý için kodlar {} arasýnda yazýlýr.
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
