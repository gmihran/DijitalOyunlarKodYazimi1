#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	int matris[4][4] = { 56,23,678,23,234,21,78,26,654,33,21,67,189,35,21,89 };
	int min, satir, sutun;

	//Matristeki en küçük elemaný bulalým
	//int matris[4][4] = { 10,23,678,23,234,21,78,26,654,33,21,67,189,35,21,89 };
	//Ýlk deðer en küçük deðer olsaydý ihtimalini test etmek için bu tanýmlamayý yaptýk
	min = matris[0][0];
	for (satir = 0; satir < 4; satir++)
	{
		for (sutun = 0; sutun < 4; sutun++)
		{
			if (min > matris[satir][sutun])
				min = matris[satir][sutun];
		}
	}
	cout << "Min:" << min << endl;

	//1.Çözüm: Matristeki 2. en küçük deðeri bulalým
	int min_2=INT_MAX;
	//min_2 deðiþkenine integer deðiþkeninin maksimum alabileceði deðeri atadýk. 
	//Ýçerisinde 2147483647 deðerini tutar.
	//cout << min_2 << endl;
	for (satir = 0; satir < 4; satir++)
	{
		for (sutun = 0; sutun < 4; sutun++)
		{
			if (min_2 > matris[satir][sutun] && min != matris[satir][sutun])
				min_2 = matris[satir][sutun];
		}
	}
	cout << "2.Min:" << min_2 << endl;

	//2.Çözüm: Matristeki 2. en küçük deðeri bulalým
	int min1, min2;
	min1 = matris[0][0];
	min2 = matris[0][1];
	for (satir = 0; satir < 4; satir++){
		for (sutun = 0; sutun < 4; sutun++){
			if (min1 > matris[satir][sutun]){
				min2 = min1;
				min1 = matris[satir][sutun];
			}
			else if (min2 > matris[satir][sutun] && min1 != matris[satir][sutun]){
				//min1 != matris[satir][sutun] bu kontrol min1 ile min2'nin eþit bir deðer olmamasýný saðladý.
				//min2 min1'den daha büyük en küçük deðeri tutmuþ oldu. 
				//Bu kontrolü yapmasaydýk bu deðerler sonucunda min1 ve min2 21 çýkardý.
				min2 = matris[satir][sutun];
			}	
		}
	}
	cout << "1.En Küçük Deðer:" << min1 << endl;
	cout << "2.En küçük Deðer:" << min2 << endl;

	//matris içerisine 20 ile 670 arasýnda rastgele deðerler atayýp bu deðerleri ekrana yazdýralým
	srand(time(NULL));
	int i, j, rastgele[4][4];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			rastgele[i][j] = rand() % 651 + 20;
			rastgele[0][2] = 700;
			rastgele[0][3] = 700;
			rastgele[1][0] = 700;
			cout << rastgele[i][j] << "\t";
		}
		cout << endl;
	}

	//4*4'lük matriste yer alan satýrlardaki ve sütunlardaki deðerlerden en büyük ve en küçük deðerleri ekrana yazdýralým
	int satir_min[4], satir_mak[4], sutun_min[4], sutun_mak[4];
	for (i = 0; i < 4; i++)
	{
		satir_min[i] = rastgele[i][0];
		satir_mak[i] = rastgele[i][0];
		sutun_min[i] = rastgele[0][i];
		sutun_mak[i] = rastgele[0][i];
	}
	int ic, dis;
	for (dis = 0; dis < 4; dis++)
	{
		for (ic = 0; ic < 4; ic++)
		{
			if (satir_min[dis] > rastgele[dis][ic])
				satir_min[dis] = rastgele[dis][ic];

			if (satir_mak[dis] < rastgele[dis][ic])
				satir_mak[dis] = rastgele[dis][ic];

			if (sutun_min[dis] > rastgele[ic][dis])
				sutun_min[dis] = rastgele[ic][dis];

			if (sutun_mak[dis] < rastgele[ic][dis])
				sutun_mak[dis] = rastgele[ic][dis];
		}
	}
	for (i = 0; i < 4; i++)
	{
		cout << i+1 << ".satýrdaki en küçük deðer:" << satir_min[i] << endl;
		cout << i+1 << ".sütundaki en küçük deðer:" << sutun_min[i] << endl;
		cout << i+1 << ".satýrdaki en büyük deðer:" << satir_mak[i] << endl;
		cout << i+1 << ".sütundaki en büyük deðer:" << sutun_mak[i] << endl;
	}

	//Matrisin en büyük elemanýnýn bulunduðu sütunda yer alan en küçük elemaný bulalým
	
	int mak=rastgele[0][0],mak_sutun;
	mak_sutun = 0;
	for (satir = 0; satir < 4; satir++){
		for (sutun = 0; sutun < 4; sutun++){
			if (mak < rastgele[satir][sutun]) {
				mak = rastgele[satir][sutun];
				mak_sutun = sutun;
			}	
		}
	}
	min=mak;
	//min deðeri o sütundaki en büyük deðer olan mak deðerini atadýk
	for (satir = 0; satir < 4; satir++){
		if (rastgele[satir][mak_sutun] < min)
			min = rastgele[satir][mak_sutun];
	}
	cout << "Matrisin en büyük deðeri:" << mak << endl;
	cout << mak_sutun + 1 << " sütundaki en küçük deðer:" << min << endl;

	//Ýki boyutlu bir diziyi tek boyutlu bir diziye atayalým
	int dizi1[3][2] = { 1,2,3,4,5,6 }, dizi2[6], sayac = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			//dizi2[sayac] = dizi1[i][j];
			//sayac++;
			dizi2[sayac++] = dizi1[i][j];
		}
	}
	for (i = 0; i < 6; i++)
		cout << dizi2[i] << "\t";
	cout << endl;
}
