#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL));
	int matris1[5][2],matris2[5][2], i, j;
	for (i=0;i<=4;i++)
	{
		for (j=0;j<=1;j++)
		{
			matris1[i][j] = rand() % 100 + 1;
			matris2[i][j] = rand() % 100 + 1;
		}
	}
	cout << "Matris 1 | Matris 2" << endl;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			cout << i << "," << j << ":";
			cout << matris1[i][j] << " " << matris2[i][j] << "\t";
		}
		cout << endl;
	}
	//Matris 1 ve Matris 2 deðerlerinin toplamlarýný yazdýralým
	cout << "Matris 1 ve Matris 2 deðerlerinin toplamlarý" << endl;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			cout << matris1[i][j] + matris2[i][j] << "\t";
		}
		cout << endl;
	}

	//10*5 boyutlu matris içerisine 20 ile 50 arasýnda rastgele deðerler atayalým ve kullanýcýnýn girdiði sayýyla bu matrisi çarpalým
	//Matris 2,3 olsaydý ve kullanýcý 2 girseydi;
//Çýktý:
/*
	10*5 Boyutlu Matris:
	20 22 24
	21 24 25
	10*5 Boyutlu Matrisin 2 katý:
	40 44 48
	42 48 50
*/
	int matris[10][5], sayi;
	cout << "10*5 Boyutlu Matris\n";
	for (i = 0; i <= 9; i++) //satýr deðeri
	{
		for (j = 0; j <= 4; j++) //sütun deðeri
		{
			matris[i][j] = rand() % 31 + 20;
			cout << matris[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Sayý:";
	cin >> sayi;
	cout << "10*5 Boyutlu Matrisin " << sayi << " katý\n";
	for (i = 0; i <= 9 ; i++)
	{
		for (j	= 0; j  <= 4; j++)
		{
			cout << matris[i][j] * sayi << "\t";
		}
		cout << endl;
	}
	//Personel ad, soyad, departman bilgilerini tutan ve 4 personelin kaydýný kullanýcýdan alýp ekrana yazdýran programý yazýnýz.
	//const float PI = 3.14;
	string p[4][3];
	for (i = 0; i <= 3; i++) //Personel sayýsý
	{
		cout << "Personel Bilgileri - Ad | Soyad | Departman \n:";
		for (j = 0; j <= 2; j++) //Personel Bilgilerini Tutan Alan sayýsý
		{
			cin >> p[i][j];
		}
	}
	cout << "Personel Bilgileri - Ad | Soyad | Departman \n:";
	for (i = 0; i <= 3; i++) //Personel sayýsý
	{
		for (j = 0; j <= 2; j++) //Personel Bilgilerini Tutan Alan sayýsý
		{
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}
	//Dizinin içerisine ilk deðer atamasý yapalým:
	int d1[5] = { 1,2,3,4,5 };
	int d2[2][3] = { { 1, 2 , 3 }, { 4, 5, 6 } };
	int d3[2][3] = { 1, 2 , 3 , 4, 5, 6 };
}
	


