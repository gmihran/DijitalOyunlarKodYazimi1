
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
	
	int gun;
	cout << "Haftanýn kaçýncý günü:";
	cin >> gun;
	
	//1.Yöntem: (if else ile çözümü)
	//If switch case yapýsýna göre daha yavaþtýr. if koþulu doðru olana kadar tüm if'ler tek tek kontrol edilir.
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
		//if'lerin hiçbiri doðru deðilse else çalýþýr.
		cout << "Geçersiz deðer";
	cout << endl;
	

	//2.Yöntem (switch case ile çözümü)
	//if else yapýsýna göre daha hýzlýdýr. Direk doðru olan case çalýþýr, tek tek case'leri kontrol etmez.
	switch (gun)
	{
	case 1:
		cout << "Pazartesi";
		break;
		//break swich case bloðunu kýrar. Eðer gun deðeri 1'e eþitse ve break kullanmamýþsak break ifadesini görene kadar diðer case'ler de çalýþýr.
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
		//Case'lerin hiçbiri doðru deðilse default çalýþýr.
		cout << "Geçersiz deðer";
		break;
	}
	cout << endl;
	

	//3. Yöntem: (dizi ile çözümü)
	string  gunler[7] = { "Pazartesi", "Salý", "Çarþamba", "Perþembe", "Cuma", "Cumartesi", "Pazar" };
	//7 eleman tutan bir string dizi tanýmladýk
	
	if (gun >= 1 && gun <= 7)
		cout << gunler[gun - 1];
		//Dizilerde indis deðeri 0'dan baþlar. Bu yüzden gun deðerinden 1 çýkardýk
	else
		cout << "Geçersiz deðer";
	cout << endl;
	// Kullanýcýnýn girdiði deðere göre gün bilgisini getirelim
	//Örn. 3 girilirse Çarþamba, 12 girilirse Cuma, 20 girilirse Cumartesi
	cout << gunler[gun % 7 - 1] << endl;
	//Ýndis deðeri 0'dan baþladýðý için 1 eksiðini aldýk
	

	//Girilen ay bilgisine göre mevsimleri ekrana getiren program
	//12-1-2 Kýþ
	//3-4-5 Ýlkbahar
	//6-7-8 Yaz
	//9-10-11 Sonbahar
	
	//veya koþulu için || (AltGr+<>) sembolü kullanýlýr
	//ve koþulu için && (Shift+6) sembolü kullanýlýr
	int ay;
gitay1:
	cout << "Ay deðerini sayýsal olarak giriniz:";
	cin >> ay;
	if (ay == 12 || ay == 1 || ay == 2)
		cout << "Kýþ";
	else if (ay >= 3 && ay <= 5)
	//else if (ay==3 || ay==4 || ay==5)
	
	//bu þekilde de yazabilirdik
		cout << "Ýlkbahar";
	else if (ay >= 6 && ay <= 8)
		cout << "Yaz";
	else if (ay >= 9 && ay <= 11)
		cout << "Sonbahar";
	else
	{
		cout << "Geçersiz deðer girdiniz"<<endl;
		goto gitay1;
	}
	cout << endl;
	//Girilen doðum yýlý,ayý ve bulunduðu yýl,ay bilgisine göre yaþý hesaplayan program
	//Doðum yýlý bulunduðu yýldan büyük olamaz!
	//Doðum yýlý bulunduðu yýla eþitse doðum ayý bulunduðu aydan büyük olamaz!
	//Eðer doðum yýlý bulunduðu yýla eþitse aya göre hesaplama yapýlacaktýr.
	//Ay sonucu negatif olmamalý.Eðer ay sonucu negatif (-) çýkarsa, 
	//1.yöntem:yil sonucunu 12 ile çarpýp ay sonucunu bu deðerden çýkarýp ay sonucunu bulalým. 
	//2.yöntem: ay bilgisine 12 ekleyip, yýldan 1 çýkartabiliriz
	//Örn; doðum yýlý 2009, bulunduðu yýl 2019, doðum ayý 1, bulunduðu ay 12 deðerleri girilirse; Çýktý: "10 yaþ 11 ay"
	//Örn; doðum yýlý 2009, bulunduðu yýl 2019, doðum ayý 12, bulunduðu ay 1 deðerleri girilirse; Çýktý: "9 yaþ 1 ay"
	//Örn; doðum yýlý 2019, bulunduðu yýl 2019, doðum ayý 1, bulunduðu ay 12 deðerleri girilirse; Çýktý: "0 yaþ 11 ay"
	//Örn; doðum yýlý 2019, bulunduðu yýl 2019, doðum ayý 12, bulunduðu ay 1 deðerleri girilirse; Çýktý: "Hatalý giriþ", ay bilgisi tekrar istenecek
	//Örn; doðum yýlý 2020, bulunduðu yýl 2019, Çýktý: "Hatalý giriþ", yýl bilgisi tekrar istenecek
	int b_yil, d_yil, b_ay, d_ay, yas, aylik;
gityil:
	cout << "Bulunduðun yýl:";
	cin >> b_yil;
	cout << "Doðum yýlý:";
	cin >> d_yil;
	if (d_yil > b_yil)
	{
		cout << "Hatalý giriþ" << endl;
		goto gityil;
	}
gitay:
	cout << "Bulunduðun ay:";
	cin >> b_ay;
	cout << "Doðum ayý:";
	cin >> d_ay;
	if (b_yil==d_yil && d_ay > b_ay)
	{
		cout << "Hatalý giriþ" << endl;
		goto gitay;
	}
	yas = b_yil - d_yil;
	aylik = b_ay - d_ay;
	if (aylik < 0)
	{
		yas = yas - 1;
		aylik = aylik + 12;
	}
	cout << yas << " yaþ " << aylik << " aylik" << endl;

}
