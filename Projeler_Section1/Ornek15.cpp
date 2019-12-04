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
	srand(time(NULL)); //random fonksiyonunun farklý deðerler üretmesini saðladýk
	int matris[4][4] = { 56,23,678,231,234,21,78,26,654,33,32,67,189,35,56,21 }, min, satir , sutun;
	//matris dizisinin içindeki en küçük elemaný bulunuz.
	min = matris[0][0];
	for (satir = 0; satir < 4; satir++){
		for (sutun = 0; sutun < 4; sutun++){
			if (matris[satir][sutun] < min)
				min = matris[satir][sutun];
		}
	}
	cout << "En küçük deðer:" << min << endl;
	

	//matris dizisinin içindeki en küçük 2. elemaný bulunuz.

	//matris içerisine 20 ile 670 arasýnda rastgele deðerler atayýp bu deðerleri ekrana yazdýrýyoruz
	for (satir = 0; satir < 4; satir++)
		for (sutun = 0; sutun < 4; sutun++){
			matris[satir][sutun] = rand() % 660 + 20;
			//20 ile 679 arasýnda deðerleri arasýnda olacak. Son deðer: 660+20-1=679
			cout << matris[satir][sutun] << "\t";
			if (sutun == 3)
				cout << endl;
		}
	int min1, min2;
	//min1 en küçük deðeri, min2 2.en küçük deðeri tutuyor
	min1 = matris[0][0];
	min2 = matris[0][1];
	for (satir = 0; satir < 4; satir++) {
		for (sutun = 0; sutun < 4; sutun++) {
			if (matris[satir][sutun] < min1)
			{
				min2 = min1; 
				//min1 eski deðeri min2'nin yeni tuttuðu deðer olacak
				min1 = matris[satir][sutun];
			}
			else if (matris[satir][sutun] < min2 && matris[satir][sutun]!=min1)
			//&& matris[satir][sutun]!=min1 bu ifade min1 ve min2 deðerlerinin farklý deðer tutmasýný saðladý. Ör. matris içerisinde en küçük deðerden  birden fazla varsa min2 deðeri o deðere eþit olmayacak
			{
				min2 = matris[satir][sutun];
			}
			
		}
	}
	cout << "En küçük 1. deðer:" << min1 << endl;
	cout << "En küçük 2. deðer:" << min2 << endl;
	
	
	//4*4'lük matriste yer alan satýrlardaki ve sütunlardaki deðerlerden en büyük ve en küçük deðerleri ekrana yazdýralým
	int buyuk_satir[4], kucuk_satir[4], buyuk_sutun[4], kucuk_sutun[4];
	//Satýrlar için ilk deðer atamasý
	cout << "Ýlk deðer atamasý yapýlýyor..\n";

	cout << "Satýrdaki ilk deðer atamasý yapýlýyor.." << endl << endl;
	for (satir = 0; satir < 4; satir++)
	{
		buyuk_satir[satir] = matris[satir][0];
		kucuk_satir[satir] = matris[satir][0];
		cout << buyuk_satir[satir] << "\t" << kucuk_satir[satir] << endl;
	}
	//Sütunlar için ilk deðer atamasý
	cout << "Sütundaki ilk deðer atamasý yapýlýyor.." << endl << endl;
	for (sutun = 0; sutun < 4; sutun++)
	{
		buyuk_sutun[sutun] = matris[0][sutun];
		kucuk_sutun[sutun] = matris[0][sutun];
		cout << buyuk_sutun[sutun] << "\t" << kucuk_sutun[sutun] << endl;

	}
	//Karþýlaþtýrma iþlemi burada yapýlacak...
	for (satir = 0; satir < 4; satir++)
	{
		for (sutun = 0; sutun < 4; sutun++)
		{
			
		}
	}
	//Bir sonraki derste bu soruya devam edeceðiz..

} 