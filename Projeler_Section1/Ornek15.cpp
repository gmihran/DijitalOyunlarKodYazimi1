#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
#include <random>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL)); //random fonksiyonunun farklı değerler üretmesini sağladık
	int matris[4][4] = { 56,23,678,231,234,21,78,26,654,33,32,67,189,35,56,21 }, min, satir , sutun;
	//matris dizisinin içindeki en küçük elemanı bulunuz.
	min = matris[0][0];
	for (satir = 0; satir < 4; satir++){
		for (sutun = 0; sutun < 4; sutun++){
			if (matris[satir][sutun] < min)
				min = matris[satir][sutun];
		}
	}
	cout << "En küçük değer:" << min << endl;
	
	//matris dizisinin içindeki en küçük 2. elemanı bulunuz.
	//matris içerisine 20 ile 670 arasında rastgele değerler atayıp bu değerleri ekrana yazdırıyoruz
	for (satir = 0; satir < 4; satir++)
		for (sutun = 0; sutun < 4; sutun++){
			matris[satir][sutun] = rand() % 660 + 20;
			//20 ile 679 arasında değerleri arasında olacak. Son değer: 660+20-1=679
			cout << matris[satir][sutun] << "\t";
			if (sutun == 3)
				cout << endl;
		}
	int min1, min2;
	//min1 en küçük değeri, min2 2.en küçük değeri tutuyor
	min1 = matris[0][0];
	min2 = matris[0][1];
	for (satir = 0; satir < 4; satir++) {
		for (sutun = 0; sutun < 4; sutun++) {
			if (matris[satir][sutun] < min1)
			{
				min2 = min1; 
				//min1 eski değeri min2'nin yeni tuttuğu değer olacak
				min1 = matris[satir][sutun];
			}
			else if (matris[satir][sutun] < min2 && matris[satir][sutun]!=min1)
			//&& matris[satir][sutun]!=min1 bu ifade min1 ve min2 değerlerinin farklı değer tutmasını sağladı. 
			//Ör. matris içerisinde en küçük değerden  birden fazla varsa min2 değeri o değere eşit olmayacak
			{
				min2 = matris[satir][sutun];
			}
			
		}
	}
	cout << "En küçük 1. değer:" << min1 << endl;
	cout << "En küçük 2. değer:" << min2 << endl;
	
	
	//4*4'lük matriste yer alan satırlardaki ve sütunlardaki değerlerden en büyük ve en küçük değerleri ekrana yazdıralım
	int buyuk_satir[4], kucuk_satir[4], buyuk_sutun[4], kucuk_sutun[4];
	cout << "İlk değer ataması yapılıyor..\n";
	//Satırlar için ilk değer ataması
	cout << "Satırdaki ilk değer ataması yapılıyor.." << endl << endl;
	for (satir = 0; satir < 4; satir++)
	{
		buyuk_satir[satir] = matris[satir][0];
		kucuk_satir[satir] = matris[satir][0];
		cout << buyuk_satir[satir] << "\t" << kucuk_satir[satir] << endl;
	}
	//Sütunlar için ilk değer ataması
	cout << "Sütundaki ilk değer ataması yapılıyor.." << endl << endl;
	for (sutun = 0; sutun < 4; sutun++)
	{
		buyuk_sutun[sutun] = matris[0][sutun];
		kucuk_sutun[sutun] = matris[0][sutun];
		cout << buyuk_sutun[sutun] << "\t" << kucuk_sutun[sutun] << endl;

	}
	//int maksimum = INT_MIN;
	//int minimum = INT_MAX;
	cout << "INT_MAX:" << INT_MAX << " INT_MIN:" << INT_MIN << endl;
	//Karşılaştırma işlemi burada yapılacak...
	int disari, iceri;
	for (disari = 0; disari < 4; disari++)
	{
		for (iceri = 0; iceri < 4; iceri++)
		{
			if (buyuk_sutun[disari] < matris[iceri][disari])
				buyuk_sutun[disari] = matris[iceri][disari];

			if (kucuk_sutun[disari] > matris[iceri][disari])
				kucuk_sutun[disari] = matris[iceri][disari];

			if (buyuk_satir[disari] < matris[disari][iceri])
				buyuk_satir[disari] = matris[disari][iceri];

			if (kucuk_satir[disari] > matris[disari][iceri])
				kucuk_satir[disari] = matris[disari][iceri];
		}
	}


	//Matrisin en büyük elemanının bulunduğu sütunda yer alan en küçük elemanı bulalım

} 
