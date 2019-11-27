#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	int sayilar[5];
	//Ýçinde 5 tane tam sayý deðeri tutabilen sayilar dizisi tanýmlandý
	sayilar[0] = 2; //0.indise 2 deðerini atadýk
	sayilar[1] = 3;
	cout << sayilar[0] << endl;
	cout << sayilar[1] << endl;
	sayilar[2] = 4;
	cout << sayilar[2] << endl;
	//Ýndis deðeri 0 sayýsýndan baþlar. Bu yüzden alabileceði maksimum indis deðeri 4'tür.

	//Kullanýcýnýn girdiði 5 deðeri (deðer istediðimiz döngü bittikten sonra)alt alta ekrana yazdýralým
	//int sayilar[5];
	int i;
	for (i = 0; i <= 4; i++) //indis deðeri sýfýrdan baþladýðý için döngüyü sýfýrdan baþlattýk
	{
		cout << i + 1 << ". deðer:";
		cin >> sayilar[i];
	}
	cout << "Tüm sayýlar" << endl;
	for (i = 0; i < 5; i++)
		//Kullanýcýnýn girdiði tüm deðerler alt alta ekrana yazdýrýlýyor
		cout << sayilar[i] << endl;

	//Kullanýcýnýn girdiði deðerlerden sadece çift sayýlarý ekrana yazdýralým
	//5%2==1 tek, 4%2==0 çift
	cout << "Çift sayýlar" << endl;
	for (i = 0; i <= 4; i++)
		if (sayilar[i] % 2 == 0)
			cout << sayilar[i] << endl;
		
	//Kullanýcýnýn girdiði deðerlerden çift sayýlarýn toplamlarýný ve tek sayýlarýn toplamlarýný ekrana yazdýralým
	int ttoplam = 0, ctoplam = 0;
	for (i = 0; i <= 4; i++)
		if (sayilar[i] % 2 == 0)
			ctoplam += sayilar[i]; //ctoplam = ctoplam + sayilar[i];
		else
			ttoplam += sayilar[i];
	cout << "Çiftlerin toplamý:" << ctoplam << endl;
	cout << "Teklerin toplamý:" << ttoplam << endl;

	//Klavyeden girilen 5 deðerden en büyük ve en küçük sayýyý, pozitif ve negatif sayýlarýn miktarýný ve ortalamasýný ekrana yazdýralým
	//Bu soruda ortalamayý hesaplamak için toplam deðerine de ihtiyacýmýz vardýr. 
	//Ör : Klavyeden 2,3,-4,1,-3 girilirse;
	//Çýktý: 
	//En büyük sayý: 3 
	//En küçük sayý: -4
	//Pozitif: 3 tane sayý vardýr. Ortalama: 2
	//Negatif: 2 tane sayý vardýr. Ortalama: -3.5
	int dizi[5], min, mak, ptoplam=0, ntoplam=0, pmiktar=0, nmiktar=0;
	for (i = 0; i <= 4; i++) 
	{
		cout << i + 1 << ". deðer:";
		cin >> dizi[i];
	}
	mak = dizi[0];
	min = dizi[0];
	for (int deger : dizi)
	{
		//cout << deger;
		if (mak < deger)
			mak = deger;
		if (min > deger)
			min = deger;
		if (deger > 0)
		{
			ptoplam += deger;
			pmiktar++;
		}
		else if (deger < 0)
		{
			ntoplam += deger;
			nmiktar++;
		}
	}
	cout << "Mak:" << mak << "\nMin:" << min << endl;
	cout << "Pozitif Miktar:" << pmiktar << "\nOrtalama:" << float(ptoplam) / pmiktar << endl;
	//Sonucun ondalýklý çýkmasýný istiyorsak; bölünen deðer float yapýlmalýdýr.
	//Bölüm sonucunun float yapýlmasý geç bir eylemdir. Sonuç int çýkar. Sonrasýnda int deðeri float yapmamýz yeterli olmaz.
	//Ör : float(5/2)=2 sonucunu verir float(5)/2=2.5 sonucunu verir.
	cout << "Negatif Miktar:" << nmiktar << "\nOrtalama:" << float(ntoplam) / nmiktar << endl;


	//Boyutunu kullanýcýnýn belirleyeceði tam sayý deðerleri tutan bir dizi oluþturarak bu dizinin içine rastgele sayýlar ekleyelim
	//Random sayý aralýðý: 1 - 10 arasýnda
	//Ör: Kaç deðer tutalým?: 4
	//Sayýlar: 3 4 2 6 
	int miktar, random[50];
git:
	cout << "Kaç deðer tutalým? :";
	cin >> miktar;
	if (miktar > 50 || miktar<1)
	{
		cout << "1 ile 50 arasýnda deðer girebilirsiniz. Tekrar deneyiniz...";
		goto git;
	}
	for (i = 0; i < miktar; i++) 
	{
		random[i] = rand() % 10 + 1;
	}

	//for (int deger : random)
	//	cout << deger << endl;
	for (i = 0; i < miktar; i++)
		cout << random[i] << endl;

	//Kullanýcýdan 2 tane deðer isteyelim. Rastgele üretilen deðerler arasýnda olup olmadýðýna bakalým.
	int s1, s2;
	cout << "2 sayý girin:";
	cin >> s1 >> s2;
	for (i = 0; i < miktar; i++)
	{
		if (s1 == random[i] || s2 == random[i])
			cout << "Deðer aralýðýnda\n";
	}
	//Ödev: C++ 11 ile gelen yenilikler araþtýrýlýp word veya pdf olarak bana online.beykoz üzerinden teslim edilecek. 	

}
