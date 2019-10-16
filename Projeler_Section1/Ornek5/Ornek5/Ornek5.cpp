#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
//std isim uzayýný projemize dahil ettik
int main()
{
	setlocale(LC_ALL, "Turkish");
    //Kullanýcýdan haftanýn kaçýncý günü bilgisini alalým
	//Günü ekrana getirelim. (Pazartesi haftanýn 1.günü)
	//Ör. 7 dediðinde Pazar, 3 dediðinde Çarþamba ekrana yazdýrýlacak
	/*
	int gun;
	cout << "Haftanýn kaçýncý günü:";
	cin >> gun;
	
	//1. yöntem (Uzun Yol-dizi ve for döngüsü kullanmadan çözüm):
	if (gun == 1)
		cout << "Pazartesi";
	else if (gun == 2)
		cout << "Salý";
	else if (gun == 3)
		cout << "Çarþamba";
	else if (gun == 4)
		cout << "Perþembe";
	else if (gun == 5)
		cout << "Cuma";
	else if (gun == 6)
		cout << "Cumartesi";
	else if (gun == 7)
		cout << "Pazar";
	else
		cout << "Geçersiz deðer girdiniz";
	cout << endl;
	*/

	/*
	//2.Yöntem (switch case ile çözüm):
	switch (gun)
	{
	case 1:
		cout << "Pazartesi";
		break;
	case 2:
		cout << "Salý";
		break;
	case 3:
		cout << "Çarþamba";
		break;
	case 4:
		cout << "Perþembe";
		break;
	case 5:
		cout << "Cuma";
		break;
	case 6:
		cout << "Cumartesi";
		break;
	case 7:
		cout << "Pazar";
		break;
	default:
		//case durumlarýnýn saðlanmamasý durumunda default çalýþýr.
		cout << "Geçersiz deðer girdiniz";
		break;
	}
	cout << endl;
	
	//3. yöntem dizi ile çözümü
	string gunler[7] = { "Pazartesi", "Salý", "Çarþamba", "Perþembe", "Cuma", "Cumartesi","Pazar" };
	//7 deðer tutabilen string bir dizi tanýmladýk
	if (gun >= 1 && gun <= 7)
		cout << gunler[gun - 1];
		//gunler dizisi 0.indisten baþlar. Bu yüzden gun deðerinin 1 eksiðini aldýk.
		//Dizi elemanlarýna ulaþmak için dizi_adý[indis deðeri] þeklinde kullanýlýr.
	else
		cout << "Geçersiz deðer girdiniz";
	cout << endl;
	//Kullanýcýnýn girdiði deðere göre gün bilgisini getirelim
	//Örn. 3 girilirse Çarþamba, 12 girilirse Cuma, 20 girilirse Cumartesi
	cout << gunler[(gun % 7)-1];
	//1 eksiðini almamýzýn sebebi dizilerin 0. indisten baþlamasýdýr.
	

	//Girilen ay bilgisine göre mevsimleri ekrana getiren program
	//12-1-2 Kýþ
	//3-4-5 Ýlkbahar
	//6-7-8 Yaz
	//9-10-11 Sonbahar
	
	int ay;
	cout << "Ay deðerini sayýsal olarak giriniz (1-12):";
	cin >> ay;
	if (ay == 12 || ay == 1 || ay == 2)
		cout << "Kýþ";
	else if (ay >= 3 && ay <= 5)
		//else if (ay == 3 || ay == 4 || ay == 5) 
		//þeklinde de yazýlabilir
		cout << "Ýlkbahar";
	else if (ay >= 6 && ay <= 8)
		cout << "Yaz";
	else if (ay >= 9 && ay <= 11)
		cout << "Sonbahar";
	else
		cout << "Hatalý deðer girildi";
	*/
		
	//Girilen doðum yýlý,ayý ve bulunduðu yýl,ay bilgisine göre yaþý hesaplayan program
	//Doðum yýlý bulunduðu yýldan büyük olamaz!
	//Doðum yýlý bulunduðu yýla eþitse doðum ayý bulunduðu aydan büyük olamaz!
	//Eðer doðum yýlý bulunduðu yýla eþitse aya göre hesaplama yapýlacaktýr.
	//Ay sonucu negatif olmamalý.Eðer ay sonucu negatif (-) çýkarsa, yil sonucunu 12 ile çarpýp ay sonucunu bu deðerden çýkarýp ay sonucunu bulalým. 
	int d_yil, b_yil, d_ayi, b_ay, yas, ay;
gityil:
	cout << "Doðum yýlýnýzý giriniz:";
	cin >> d_yil;
	cout << "Bulunduðunuz yýlý giriniz:";
	cin >> b_yil;
	//Eðer doðum yýlý bulunduðu yýldan büyükse, doðum yýlý ve bulunduðu yýl tekrar istenecek. Bu döngü d_yil b_yil dan küçük olana kadar devam edecek
	if (d_yil > b_yil)
	{
		cout << "Doðum yýlý bulunduðu yýldan büyük olamaz." << endl;
		goto gityil;
	}
gitay:
	cout << "Doðum ayýnýzý giriniz:";
	cin >> d_ayi;
	cout << "Bulunduðunuz ayý giriniz:";
	cin >> b_ay;
	
	if (d_yil == b_yil && d_ayi > b_ay)
	{
		cout << "Bulunduðu ay doðum ayýndan küçük olamaz." << endl;
		goto gitay;
	}
	yas = b_yil - d_yil;
	ay = b_ay - d_ayi;
	if (ay < 0)
	{
		yas = yas - 1; 
		ay = 12 + ay;
	}
	cout << "Yaþ:" << yas << " Ay:" << ay << endl;
	yas = b_yil - d_yil;
	ay = b_ay - d_ayi;
	ay = ay + yas * 12;
	yas = ay / 12;
	ay = ay % 12;
	cout << "Yaþ:" << yas << " Ay:" << ay << endl;
	//Ödev:
	//Elma : 1 TL, Armut : 2 TL, Muz : 4 TL, Mandalina : 0.5 TL
	//10 Elma ve üzeri %10 indirim
	//5 Armut ve üzeri %5 indirim
	//20 Muz ve üzeri %30 indirim
	//100 Mandalina ve üzeri %28 indirim
	//Elma ve Armut toplamý 15 ise 3 mandalina hediye 

} 
