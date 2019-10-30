#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	//Klavyeden girilen 5 adet sayının toplamını ve ortalamasını ekrana yazdırınız.
	int i, sayi;
	
	int toplam = 0;
	for (i = 1; i <= 5; i++) //i=i+1 //i+=1 //++i
	{
		cout << i << ".sayı:";
		cin >> sayi;
		toplam = toplam + sayi; //toplam+=sayi;
		cout << "Toplam:" << toplam << endl;
	}
	cout << "Ortalama:" << float(toplam) / 5
		<< endl;
	//Veri türünü farklı bir veri türüne dönüştürmek için veri_tipi(degisken_adi) yapısı kullanılır.
	//Bu örnekte sonucun ondalıklı (reel)sayı olması için bölünen değeri float veri türüne dönüştürdük. int/int sonucu int değer çıkar. float veya double/int sonucu float veya double çıkar.

	//Klavyeden girilen iki değerin bölümünü bulup ekrana yazdıralım
	float bolunen, sonuc, bolen;
	//bölüm sonucunun ondalıklı sayı olması için bolunen ve sonuc değerinin mutlaka float/double değer olması gerekiyor.
	//bolen değerin ondalıklı girilebilmesini sağlamak istiyorsak onu da float/double tanımlamamız gerekiyor.
	//Örn: bolen int olursa; 5 2.5 değerinin bölüm sonucunu 2.5 olarak hesaplar. bolen değerdeki .5 küsüratını atarak 2 olduğunu varsayar.
	cout << "Bölünen ve bölen değerler:";
	cin >> bolunen >> bolen;
	sonuc = bolunen / bolen;
	cout << bolunen << "/" << bolen << ":" << sonuc << endl;

	//Girilen 5 sayıdan en büyük ve en küçük sayıları ekrana yazdıralım
	int min, mak;
	//int sayi,i;
	for (i = 1; i <= 5; i++)
	{
		cout << "Bir sayı girin:";
		cin >> sayi;
		if (i == 1)
			//ilk sayı girildiğinde bu if bloğu çalışır. İlk girilen sayıyı min ve mak değerlerine eşitledik
		{
			min = sayi;
			mak = sayi;
		}
		else
		{
			//Girilen sayı 2., 3., 4. ve 5. sayı ise else bloğu çalışır
			if (sayi < min)
				//Eğer girilen sayı min değerinden küçük bir değer ise artık min değerim girilen değer olacak
				min = sayi;
			if (sayi > mak)
				//Eğer girilen sayı mak değerinden büyük bir değer ise artık mak değerim girilen değer olacak
				mak = sayi;
		}
	}
	cout << "Min:" << min << endl << "Mak:" << mak << endl;

	//0 sayısı girilene kadar girilen değerlerin çarpımını hesaplatıp ekrana yazdıralım. 0 sayısı çarpım sonucunu etkilemesin.
	//Bu soruda en mantıklı yapı do while yapısıdır. Ama biz for ile çözmeye çalışıyoruz.
	cout << "0 sayısı girilene kadar girilen sayıların çarpımını hesaplayan program" << endl;
	int carpim = 1;
	for (;;)
		//Sonsuz for döngüsü tanımladık
	{
		cout << "Sayı:";
		cin >> sayi;
		if (sayi == 0)
			//Girilen sayı 0'a eşit olduğunda döngüyü kırdık
			break;
		//break ifadesi döngüyü kırar
		carpim *= sayi; //carpim=carpim*sayi;
		//Burası girilen sayı 0 olmadığı takdirde çalışır. Sonucun 0 çıkmaması için if bloğundan sonra yazıyoruz
	}
	cout << "Çarpım sonucu:" << carpim << endl;

	//Girilen sayının bölenlerini ve bölenlerinin sayısını ekrana yazdıralım
	int bolensayisi = 0;
	//int sayi,i;
	cout << "Sayı:";
	cin >> sayi;
	for (i = 1; i <= sayi; i++)
		if (sayi%i == 0)
		{
			//Tam bölündüğünde bu blok çalışır
			cout << i << endl;
			bolensayisi++;
		}
	cout << "Bölen sayısı:" << bolensayisi << endl;
	
	//Girilen sayıların ebob, ekok değerlerini bulalım
	int sayi1, sayi2, ebob, ekok;
	//ebob:
	//ebob en küçük sayıdan daha büyük olamaz
	//Girilen sayılardan küçük olan sayıyı bulup o sayıya kadar gitmeliyiz
	cout << "2 sayı giriniz:";
	cin >> sayi1 >> sayi2;
	if (sayi1 < sayi2)
		//yer değiştirme algoritması ile çözebilirdik
	{
		for (i = sayi1; i >= 1; i--)
			if (sayi1%i == 0 && sayi2%i == 0) 
			{
				ebob = i;
				break;
			}
				
	}
	else
		for (i = sayi2; i >=1 ; i--)
			if (sayi1%i == 0 && sayi2%i == 0)
			{
				ebob = i;
				break;
			}
				
	cout << "Ebob:" << ebob << endl;

	//Ebob - Yer değiştirme algoritması ile çözümü
	int bos;
	if (sayi1 > sayi2)
	{
		//İlk girilen sayı daha büyük bir sayı ise sayı1 ve sayı2'nin yerini değiştirdik
		bos = sayi1;
		sayi1 = sayi2;
		sayi2 = bos;
	}
	//sayi1 değerinin içinde küçük olan sayıyı tutmuş olduk
	for (i = sayi1; i >= 1; i--)
		if (sayi1%i == 0 && sayi2%i == 0)
		{
			ebob = i;
			break;
		}
	cout << "Ebob:" << ebob << endl;

	//Ekok: 
	//İki sayının çarpımının ekok'a bölünmüş halidir.
	ekok = sayi1 * sayi2 / ebob;
	cout << "Ekok:" << ekok << endl;
	
	//Girilen sayının asal sayı olup olmadığını bulalım
	//Asal sayı: 1'den ve kendisinden başka böleni olmayan sayılardır
	//1,0 ve negatif sayılar asal değildir
	cout << "Bir sayı giriniz:";
	cin >> sayi;
	bool asal = true; //ilk olarak sayının asal olduğunu kabul edelim
	if (sayi <= 1)
		asal = false;
	else
	{
		for (i = 2; i < sayi; i++)
			if (sayi%i == 0)
			{
				asal = false;
				break;
			}		
	}
	if (asal)
		//Eğer asal değeri true değerine eşitse bu blok çalışır
		cout << "Sayı asaldır";
	else
		//Eğer asal değeri false değerine eşitse bu blok çalışır
		cout << "Sayı asal değildir";

	//Fonksiyonlar konusu işlendikten sonra bir sayının asal bölenlerini bulalım.
	
	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım

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
	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım
	//7 satırda yan yana 5 yıldız 
	/*
	*****
	*****
	*****
	*****
	*****
	*****
	*****

	*/
	int j;
	cout << "1.örnek:" << endl;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 5; j++)
			cout << "*";
		cout << endl;
	}	
	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım
	//6 satır boyunca her satırda artan yıldızlar 
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

	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım

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

	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım

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
	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım

	/*

	666666
	55555
	4444
	333
	22
	1

	*/
	cout << "5.örnek:" << endl;
	for (i = 6; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}

	

	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım

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

	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım

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
	


	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım
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

	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım
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



	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım
	//Girilen sayıya kadar bu işlemi geçekleştirecek.
	//Örneğin 8 girildiğinde aşağıdaki çıktıyı verecek.

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
	for (i = 8; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			cout << j;
		cout << endl;
	}


	//Ekrana aşağıdaki çıktıyı yazdırmaya çalışalım
	/*
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 17 18 19 20 21
	*/
	cout << "11.örnek:" << endl;
	int sayac=1;
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << sayac++ << " ";
			//sayac = sayac + 1;
		}
		cout << endl;
	}


	//Kullanıcının girdiği değere göre aşağıdaki çıktıyı yazdırmaya çalışalım
	//Ör: 6 girilirse aşağıdaki gibi 6 satırlık çıktı olacak
	/*
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 17 18 19 20 21
	*/

	cout << "12.örnek:" << endl;
	cout << "Satır sayısı:";
	cin >> sayi;
	sayac = 1;
	for (i = 1; i <= sayi; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << sayac++ << " ";
			//sayac = sayac + 1;
		}
		cout << endl;
	}
	//Kullanıcının girdiği değere göre aşağıdaki çıktıyı yazdırmaya çalışalım
	//Ör: 19 girilirse aşağıdaki gibi çıktı olacak
	/*
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 17 18 19
	*/

	cout << "13.örnek:" << endl;
	cout << "Sayı:";
	cin >> sayi;
	sayac = 1;
	for (i=1;;i++)
	//sonsuz for döngüsü
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


	//Fonksiyonlar konusu işlendikten sonra bir sayının asal bölenlerini fonksiyon tanımlayarak çözeceğiz.

	//Ödev:
	//Aşağıdaki 2 problemin algoritmasını, akış diyagramını ve kodlarını yazınız.
	//Problem-1:İki sayı arasındaki asal sayıları ekrana yazdıralım
	//Problem-2:Bir sayının asal bölenlerini bulalım (İçiçe for ile) 

}
