#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
//std isim uzayını projemize dahil ettik
int main()
{
	setlocale(LC_ALL, "Turkish");
    	//Kullanıcıdan haftanın kaçıncı günü bilgisini alalım
	//Günü ekrana getirelim. (Pazartesi haftanın 1.günü)
	//Ör. 7 dediğinde Pazar, 3 dediğinde Çarşamba ekrana yazdırılacak
	
	int gun;
	cout << "Haftanın kaçıncı günü:";
	cin >> gun;
	
	//1. yöntem (Uzun Yol-dizi ve for döngüsü kullanmadan çözüm):
	if (gun == 1)
		cout << "Pazartesi";
	else if (gun == 2)
		cout << "Salı";
	else if (gun == 3)
		cout << "Çarşamba";
	else if (gun == 4)
		cout << "Perşembe";
	else if (gun == 5)
		cout << "Cuma";
	else if (gun == 6)
		cout << "Cumartesi";
	else if (gun == 7)
		cout << "Pazar";
	else
		cout << "Geçersiz değer girdiniz";
	cout << endl;
	

	
	//2.Yöntem (switch case ile çözüm):
	switch (gun)
	{
	case 1:
		cout << "Pazartesi";
		break;
	case 2:
		cout << "Salı";
		break;
	case 3:
		cout << "Çarşamba";
		break;
	case 4:
		cout << "Perşembe";
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
		//case durumlarının sağlanmaması durumunda default çalışır.
		cout << "Geçersiz değer girdiniz";
		break;
	}
	cout << endl;
	
	//3. yöntem dizi ile çözümü
	string gunler[7] = { "Pazartesi", "Salı", "Çarşamba", "Perşembe", "Cuma", "Cumartesi","Pazar" };
	//7 değer tutabilen string bir dizi tanımladık
	if (gun >= 1 && gun <= 7)
		cout << gunler[gun - 1];
		//gunler dizisi 0.indisten başlar. Bu yüzden gun değerinin 1 eksiğini aldık.
		//Dizi elemanlarına ulaşmak için dizi_adı[indis değeri] şeklinde kullanılır.
	else
		cout << "Geçersiz değer girdiniz";
	cout << endl;
	//Kullanıcının girdiği değere göre gün bilgisini getirelim
	//Örn. 3 girilirse Çarşamba, 12 girilirse Cuma, 20 girilirse Cumartesi
	cout << gunler[(gun % 7)-1];
	//1 eksiğini almamızın sebebi dizilerin 0. indisten başlamasıdır.
	

	//Girilen ay bilgisine göre mevsimleri ekrana getiren program
	//12-1-2 Kış
	//3-4-5 İlkbahar
	//6-7-8 Yaz
	//9-10-11 Sonbahar
	
	int ay;
	cout << "Ay değerini sayısal olarak giriniz (1-12):";
	cin >> ay;
	if (ay == 12 || ay == 1 || ay == 2)
		cout << "Kış";
	else if (ay >= 3 && ay <= 5)
		//else if (ay == 3 || ay == 4 || ay == 5) 
		//şeklinde de yazılabilir
		cout << "İlkbahar";
	else if (ay >= 6 && ay <= 8)
		cout << "Yaz";
	else if (ay >= 9 && ay <= 11)
		cout << "Sonbahar";
	else
		cout << "Hatalı değer girildi";
	
		
	//Girilen doğum yılı,ayı ve bulunduğu yıl,ay bilgisine göre yaşı hesaplayan program
	//Doğum yılı bulunduğu yıldan büyük olamaz!
	//Doğum yılı bulunduğu yıla eşitse doğum ayı bulunduğu aydan büyük olamaz!
	//Eğer doğum yılı bulunduğu yıla eşitse aya göre hesaplama yapılacaktır.
	//Ay sonucu negatif olmamalı.Eğer ay sonucu negatif (-) çıkarsa, yil sonucunu 12 ile çarpıp ay sonucunu bu değerden çıkarıp ay sonucunu bulalım. 
	int d_yil, b_yil, d_ayi, b_ay, yas, ay;
gityil:
	cout << "Doğum yılınızı giriniz:";
	cin >> d_yil;
	cout << "Bulunduğunuz yılı giriniz:";
	cin >> b_yil;
	//Eğer doğum yılı bulunduğu yıldan büyükse, doğum yılı ve bulunduğu yıl tekrar istenecek. Bu döngü d_yil b_yil dan küçük olana kadar devam edecek
	if (d_yil > b_yil)
	{
		cout << "Doğum yılı bulunduğu yıldan büyük olamaz." << endl;
		goto gityil;
	}
gitay:
	cout << "Doğum ayınızı giriniz:";
	cin >> d_ayi;
	cout << "Bulunduğunuz ayı giriniz:";
	cin >> b_ay;
	
	if (d_yil == b_yil && d_ayi > b_ay)
	{
		cout << "Bulunduğu ay doğum ayından küçük olamaz." << endl;
		goto gitay;
	}
	yas = b_yil - d_yil;
	ay = b_ay - d_ayi;
	if (ay < 0)
	{
		yas = yas - 1; 
		ay = 12 + ay;
	}
	cout << "Yaş:" << yas << " Ay:" << ay << endl;
	yas = b_yil - d_yil;
	ay = b_ay - d_ayi;
	ay = ay + yas * 12;
	yas = ay / 12;
	ay = ay % 12;
	cout << "Yaş:" << yas << " Ay:" << ay << endl;
	//Ödev:
	//Elma : 1 TL, Armut : 2 TL, Muz : 4 TL, Mandalina : 0.5 TL
	//10 Elma ve üzeri %10 indirim
	//5 Armut ve üzeri %5 indirim
	//20 Muz ve üzeri %30 indirim
	//100 Mandalina ve üzeri %28 indirim
	//Elma ve Armut toplamı 15 ise 3 mandalina hediye 

} 
