
#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1=1,sayi2=1,toplam,ortalama;
	//sayi1 ve sayi2: ilk deðer atamasý yapýldý
	
	//Girilen iki sayýnýn toplamýný ve ortalamasýný 
	//ekrana yazdýr
	cout <<sayi1 << endl << "Ýki sayý giriniz:";
	//endl (endline) satýr sonu ver. Yeni satýrýn baþýna geç
	cin >> sayi1 >> sayi2;
	cout << sayi1 << " " << sayi2 << "\n";
	
	//1.yol:
	cout << "Toplam=" << sayi1 + sayi2 << endl;
	cout << "Ortalama=" << (sayi1 + sayi2) / 2 << endl;
	//endl kodu ya da "\n" karakteri alt satýra 
	//geçmemizi saðlar

	//2.yol:
	cout << "Toplam=" << sayi1 + sayi2 << endl << "Ortalama=" << (sayi1 + sayi2) / 2 << endl;
	
	//3.yol:
	toplam = sayi1 + sayi2;
	ortalama = toplam / 2;
	cout << "Toplam=" << toplam << endl;
	cout << "Ortalama=" << ortalama << endl;

	//Bir dersin vize, ödev, quiz ve final notlarýnýn girilerek 
	//ortalamasýný hesaplayýnýz ve ekrana yazdýrýnýz. 
	//Vize notunun katkýsý %30, ödev %10, quiz %10, 
	//final notunun katkýsý %50’dir. 
	//Ortalama = vize * 30 % +ödev * 10 % +quiz * 10 % +final * 50 %
	//Ortalama = vize * 0.3 +ödev * 0.1 +quiz * 0.1 +final * 0.5
	int vize, final, quiz, odev,ort;
	cout << "Vize notu:";
	cin >> vize;
	cout << "Quiz notu:";
	cin >> quiz;
	cout << "Ödev notu:";
	cin >> odev;
	cout << "Final notu:";
	cin >> final;
	ort = vize * 0.3 + odev * 0.1 + quiz * 0.1 + final * 0.5;
	cout << ort <<endl;
	
	//Deðiþken tanýmlama:
	int sayi=10;
	//Tamsayý tutar. Ondalýklý sayýlar atanamaz
	float ondaliklisayi = 10.5;
	//Ondalýklý sayýlarý tutabilir
	char harf = 'A';
	bool durum;
	//char deðiþken türündeki bir deðiþkene deðer atarken 
	//tek týrnak ('') iþareti kullanýlýr
	cout << "Sayý:";
	cin >> sayi;
	cout << "Ondalýklý sayý:";
	cin >> ondaliklisayi;
	cout << "Harf:";
	cin >> harf;
	cout << "Sayý:" << sayi << "\nOndalýklý sayý:" << ondaliklisayi;
	cout << "\nHarf:" << harf;
	cout << endl;
	if (harf == 'A')
		//Eðer harf 'A' karakterine eþitse bu adým çalýþýr
		cout << "Girilen harf A'dýr";
	else
		//Eðer harf 'A' karakterine eþit deðilse bu adým çalýþýr
		//if koþulu saðlanmýyorsa else durumu çalýþýr
		cout << "Girilen harf A deðildir";
	cout << endl;

	if (sayi > 10)
		durum = true;
	else
		durum = false;
	cout << "Durum:" << durum << endl;

	if (durum)
		cout << "Sayý 10'dan büyüktür";
	else
		cout << "Sayý 10'dan büyük deðildir";
	cout << endl;
	//Klavyeden girilen iki sayýdan büyük olan sayýyý ekrana yazdýralým.
	
	/*
	1.Baþla
	2.Deðiþken Tanýmla: sayi1,sayi2
	3.Oku sayi1,sayi2
	4.Eðer sayi1>sayi2 ise Yaz sayi1 deðilse Yaz sayi2
	5.Bitir
	*/
	//int sayi1,sayi2;
	//sayi1 ve sayi2 deðiþkenlerini yukardaki kodlarda 
	//tanýmladýðýmýz için tekrar tanýmlamýyoruz
	cout << "Ýki sayý giriniz:";
	cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2)
		cout << sayi1;
	else
		cout << sayi2;
	cout << endl;
	//Girilen iki sayýdan hangisinin büyük olduðunu veya eþitse
	//eþit olduklarýný ekrana yazdýralým
	/*
	//1.yöntem
	//Bu if bloðunda program çalýþtýðýnda tüm koþullara tek tek bakýlýr.
	//Bu birbirine baðlý koþullarda tercih edilmemelidir.
	if (sayi1 > sayi2)
		cout << "1.girilen sayý daha büyüktür";
	if (sayi1 < sayi2)
		cout << "2.girilen sayý daha büyüktür";
	if (sayi1 == sayi2)
		cout << "Sayýlar birbirine eþittir";
	cout << endl;
	*/
	//2.yöntem
	//Birbirine baðlý koþullarýn olmasý durumunda bu yapý tercih edilmelidir.
	//Bu koþul yapýsý bir koþulun saðlanmasý durumunda diðer koþullara bakmaz.
	if (sayi1 > sayi2)
		cout << "1.girilen sayý daha büyüktür";
	else if (sayi1 < sayi2)
		cout << "2.girilen sayý daha büyüktür";
	else
		cout << "Sayýlar birbirine eþittir";
	cout << endl;
	//sayi1 ve sayi2'nin tek veya çift olduðunu ekrana yazdýralým
	// % karakteri ile bir sayýnýn diðer bir sayýya bölümünden kalan(mod) hesaplanýr.
	//Ör. 5%2 iþleminin sonucu 1'dir. 4%2 iþleminin sonucu 0'dýr.
	//Bunu bir koþulda ifade etmek için;
	//Tek için: if(sayi%2==1), Çift için: if (sayi%2==0) koþul bloklarý kullanýlýr.

	if (sayi1 % 2 == 0)
		cout << "1.sayý çifttir";
	else
		cout << "1.sayý tektir";
	cout << endl;
	if (sayi2 % 2 == 0)
		cout << "2.sayý çifttir";
	else
		cout << "2.sayý tektir";
}	
