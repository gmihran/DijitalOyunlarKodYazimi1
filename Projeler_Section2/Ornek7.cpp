#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	//Klavyeden girilen 5 adet sayýnýn toplamýný ve ortalamasýný ekrana yazdýrýnýz.
	
	int i, sayi, toplam=0;
	
	for (i = 1; i <= 5; i++)
	{
		cout << i << ".sayý:";
		cin >> sayi;
		toplam = toplam + sayi; //toplam += sayi;
	}
	cout << "Toplam:" << toplam << endl;
	cout << "Ortalama:" << float(toplam) / 5 << endl;
	
	//Veri türünü farklý bir veri türüne dönüþtürmek için veri_tipi(degisken_adi) yapýsý kullanýlýr.
	//Bu örnekte sonucun ondalýklý (reel)sayý olmasý için bölünen deðeri float veri türüne dönüþtürdük. int/int sonucu int deðer çýkar. float veya double/int sonucu float veya double çýkar.
	//Klavyeden girilen iki deðerin bölümünü bulup ekrana yazdýralým
	int bolunen, bolen;
	
	float bolum;
	cout << "Bölünen sayý:";
	cin >> bolunen;
	cout << "Bölen sayý:";
	cin >> bolen;
	bolum = float(bolunen) / bolen;
	cout << bolunen << "/" << bolen << "=" << bolum << endl;
	 	 

	//Girilen 5 sayýdan en büyük ve en küçük sayýlarý ekrana yazdýralým
	int s,min,mak;
	
	for (i = 1; i <= 5; i++)
	{
		cout << i << ".sayý:";
		cin >> s;
		if (i == 1)
		{
			//Klavyeden girilen ilk deðeri mak ve min deðerlerine eþitledik
			min = s;
			mak = s;
		}
		else
		{
			if (min > s)
				min = s;
			if (mak < s)
				mak = s;
		}
	}
	cout << "Min:" << min << endl << "Mak:" << mak << endl;
	

	//0 sayýsý girilene kadar girilen deðerlerin çarpýmýný hesaplatýp ekrana yazdýralým. 0 sayýsý çarpým sonucunu etkilemesin.
	//Bu soruda en mantýklý yapý do while yapýsýdýr. Ama biz for ile çözmeye çalýþýyoruz.
	//int sayi;
	
	int carpim = 1;
	//Çarpmada etkisiz eleman 1 olduðu için çarpýmlarýn sonucunu tutacak olan deðiþkene 1 atadýk
	cout << "O sayýsý girilene kadar girilen deðerlerin çarpýmýný veren program" << endl;
	for (;;)
	{
		//Bu döngü sonsuz döngüdür.
		//Bu döngüyü break ile kýrmalýyýz
		cout << "Sayý:";
		cin >> sayi;
		if (sayi == 0)
			break;
		carpim = carpim * sayi; //carpim *= sayi;
		cout << "Çarpým:" << carpim << endl;
	}
	cout << "Çarpým:" << carpim << endl;
	

	//Girilen sayýnýn bölenlerini ve bölenlerinin sayýsýný ekrana yazdýralým
	//Ör:20 girilirse -> 1 2 4 5 10 20 Bölen sayýsý:6
	//Ör:3 girilirse -> 1 3 Bölen sayýsý: 2
	//Ör:4 girilirse -> 1 2 4 Bölen sayýsý: 3
	
	//int sayi;
	int miktar = 0;
	cout << "Girilen sayýnýn bölenlerini ve bölenlerinin sayýsýný hesaplayan program" << endl;
	cout << "Sayý:";
	cin >> sayi;
	for (i = 1; i <= sayi; i++)
		if (sayi%i == 0)
		{
			cout << i << endl;
			miktar += 1; //miktar++; //++miktar; 
						 //miktar=miktar+1;
		}
	cout << "Bölen sayýsý:" << miktar << endl;
	
	//Girilen sayýlarýn ebob, ekok deðerlerini bulalým

	//ebob:
	//Girilen sayýlardan küçük olan sayýyý bulup o sayýya kadar gitmeliyiz
	//Ör: 10 20 girilirse; ebob: 10
	//Ör: 5 3 girilirse; ebob: 1
	//Ör: 9 15 girilirse; ebob: 3
	
	int s1, s2, ebob;
	cout << "Girilen 2 sayýnýn Ebob ve Ekok deðerlerini bulan program" << endl;
	//int i;
	cout << "Ýki sayý giriniz:";
	cin >> s1 >> s2;

	/*
	//ebob - 1.çözüm:
	
	if (s1 < s2)
	{
		for (i = s1; i >= 1; i--)
		{
			//Ýki sayý ayný anda i deðerine bölünüyorsa ebob bu sayýdýr ve bölündüðü anda döngü kýrýlmalýdýr
			//1'den baþlatýp s1'e kadar giden bir for döngüsü yazsaydýk, o zaman döngüyü break ile kýrmayýp en büyük böleni bulmaya çalýþacaktýk.
			if (s1%i == 0 && s2%i == 0)
			{
				ebob = i;
				break;
			}
		}
	}
	else
	//s2 s1'den küçükse veya eþitse else çalýþýr
	{
		for (i = s2; i >= 1; i--)
		{
			if (s1%i == 0 && s2%i == 0)
			{
				ebob = i;
				break;
			}
		}
	}
	cout << "Ebob:" << ebob << endl;
	*/

	//Ebob - Yer deðiþtirme algoritmasý ile çözümü
	//Amaç : s1 deðerinde küçük olan deðeri tutup, for döngüsünde s1 deðerini kullanmak
	int bos;
	if (s1 > s2)
	{
		bos = s1;
		//s1 deðerini geçici olarak bos deðiþkeninde tuttuk
		s1 = s2;
		s2 = bos;
		//s1 ve s2'nin yerini deðiþtirdik
	}
	for (i = s1; i >= 1; i--)
		if (s1%i == 0 && s2%i == 0)
		{
			ebob = i;
			break;
		}
	cout << "Ebob:" << ebob << endl;
	
	//Ekok:
	int ekok;
	ekok = s1 * s2 / ebob;
	cout << "Ekok:" << ekok << endl;


	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým

	/*
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	
	*/

	for (i = 1; i <= 20; i++)
	{
		cout << i << " ";
		if (i % 5 == 0)
			cout << endl;
	}

	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým
	//7 satýrda yan yana 5 yýldýz 
	/*

	*****
	*****
	*****
	*****
	*****
	*****
	*****
	
	*/
	cout << "1.örnek:" << endl;
	int j;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 5; j++)
			cout << "*";
			//Önce içteki döngü tamamlanýr, sonra dýþtaki döngüye geçer
		cout << endl;
	}
		

	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým
	//6 satýr boyunca her satýrda artan yýldýzlar 
	/*
	
	*
	**
	***
	****
	*****
	******

	*/
	cout << "2.örnek:" << endl;
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}



	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým
	
	/*

	1
	12
	123
	1234
	12345
	123456
	1234567
	12345678
	
	*/
	cout << "3.örnek:" << endl;
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= i; j++)
			cout << j;
		cout << endl;
	}


	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým
	
	/*
	
	1
	22
	333
	4444
	55555
	666666
	7777777
	88888888
	999999999
	10101010101010101010
	
	*/
	cout << "4.örnek:" << endl;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}

	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým

	/*
	
	666666
	55555
	4444
	333
	22
	1
	
	*/
	cout << "5.örnek:" << endl;
	for (i = 6; i >=1; i--)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}
	//cout << "i=" << i << " j=" << j << endl;

	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým

	/*

	1
	22
	333
	4444
	55555
	666666
	666666
	55555
	4444
	333
	22
	1
	
	*/

	cout << "6.örnek:" << endl;
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}
	for (i = 6; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}

	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým

	/*

	
	666666
	55555
	4444
	333
	22
	1
	1
	22
	333
	4444
	55555
	666666

	*/


	cout << "7.örnek:" << endl;
	for (i = 6; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}

	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým
	/*

	1 1
	2 22
	3 333
	4 4444
	5 55555
	6 666666


	*/
	cout << "8.örnek:" << endl;
	for (i = 1; i <= 6; i++)
	{
		cout << i << " ";
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;

	}

	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým
	/*
	
	1 1
	2 12
	3 123
	4 1234
	5 12345
	
	*/
	cout << "9.örnek:" << endl;
	for (i = 1; i <= 5; i++)
	{
		cout << i << " ";
		for (j = 1; j <= i; j++)
			cout << j;
		cout << endl;

	}


	
	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým
	//Girilen sayýya kadar bu iþlemi geçekleþtirecek.
	//Örneðin 8 girildiðinde aþaðýdaki çýktýyý verecek.

	/*

	12345678
	1234567
	123456
	12345
	1234
	123
	12
	1
	*/

	cout << "10.örnek:" << endl;
	//int sayi, i, j;
	
	cout << "Sayý:";
	cin >> sayi;
	for (i = sayi; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			cout << j;
		cout << endl;
	}
	

	//Ekrana aþaðýdaki çýktýyý yazdýrmaya çalýþalým
	/*

	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 17 18 19 20 21

	*/
	cout << "11.örnek:" << endl;
	int sayac = 1;
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
			cout << sayac++ << " ";
		cout << endl;
	}

	//Kullanýcýnýn girdiði deðere göre aþaðýdaki çýktýyý yazdýrmaya çalýþalým
	//Ör: 6 girilirse aþaðýdaki gibi 6 satýrlýk çýktý olacak
	/*

	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 17 18 19 20 21

	*/
	
	cout << "12.örnek:" << endl;
	cout << "Sayý:";
	cin >> sayi;
	sayac = 1;
	for (i = 1; i <= sayi; i++)
	{
		for (j = 1; j <= i; j++)
			cout << sayac++ << " ";
		cout << endl;
	}

	//Kullanýcýnýn girdiði deðere göre aþaðýdaki çýktýyý yazdýrmaya çalýþalým
	//Ör: 19 girilirse aþaðýdaki gibi çýktý olacak
	/*

	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 17 18 19

	*/
	
	cout << "13.örnek:" << endl;
	cout << "Sayý:";
	cin >> sayi;
	sayac = 1;
	for (i = 1; ; i++)
	//sonsuz döngü
	{
		for (j = 1; j <= i; j++)
		{
			cout << sayac << " ";
			if (sayac == sayi)
				break;
			sayac++;
		}
		cout << endl;
		if (sayac >= sayi)
			break;
		
	}


	//Girilen sayýnýn asal olup olmadýðýný bulalým
	//Asal sayý: 1 ve kendisinden baþka böleni olmayan sayýlardýr.
	//1 ve negatif sayýlar asal sayý deðillerdir
	//2 ile kendisine kadar olan sayýlara tam bölünüyorsa asal deðildir.
	
	bool asal = true;
	//sayýnýn asal olduðunu kabul edelim
	cout << "Sayý:";
	cin >> sayi;
	if (sayi <= 1)
		asal = false; //sayý asal deðildir
	else
		for (i = 2; i <= int(sayi/2); i++)
		//Bir sayý yarýsýndan daha büyük sayýya bölünemez. Bu yüzden bu sayýnýn yarýsýndan daha büyük olan sayýlara bölünüp bölünemediðine bakmamýza gerek yok
			if (sayi%i == 0)
			{
				asal = false;
				//sayý asal deðildir
				break;
				//Bölünebiliyorsa diðer sayýlara bakmaya gerek yoktur
				//Asal olmadýðýný ispat ettik
			}
	if (asal) //asal true ise çalýþýr (bool deðer olduðu için)
		cout << "Asaldýr" << endl;
	else //asal false ise çalýþýr (bool deðer olduðu için)
		cout << "Asal deðildir" << endl;

	//Fonksiyonlar konusu iþlendikten sonra bir sayýnýn asal bölenlerini fonksiyon tanýmlayarak çözeceðiz.

	//Ödev:
	//Aþaðýdaki 2 problemin algoritmasýný, akýþ diyagramýný ve kodlarýný yazýnýz.
	//Problem-1:Ýki sayý arasýndaki asal sayýlarý ekrana yazdýralým
	//Problem-2:Bir sayýnýn asal bölenlerini bulalým (Ýçiçe for ile) 



	

}

