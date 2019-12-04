#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	int sayilar[2][4];
	sayilar[0][0] = 10;
	sayilar[0][1] = 8;
	cout << sayilar[0][0] << endl << sayilar[0][1] << endl;
	cout << "Sayı:";
	cin >> sayilar[0][2];
	cout << sayilar[0][2] << endl;

	//İki matrisin toplamını hesaplayan programı yazınız.
	//Matrisler 5*2 boyutunda ve içerisinde 1 ile 100 arasında rastgele sayı tutmalarını sağlayalım.
	srand(time(NULL));
	int matris1[5][2], matris2[5][2], i, j;
	cout << "1. matris:\n";
	for (i = 0; i <= 4; i++) //satırlar
	{
		for (j = 0; j <= 1; j++) //sütunlar
		{
			matris1[i][j] = rand() % 100 + 1;
			cout << i << "," << j << ":" << matris1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "2.matris:\n";
	for (i = 0; i <= 4; i++) //satırlar
	{
		for (j = 0; j <= 1; j++) //sütunlar
		{
			matris2[i][j] = rand() % 100 + 1;
			cout << i << "," << j << ":" << matris2[i][j] << "\t";
		}
		cout << endl;
	}
	//matris1 ve matris2 Toplamları
	cout << "İki matrisin toplamı\n";
	for (i = 0; i <= 4; i++) //satırlar
	{
		for (j = 0; j <= 1; j++) //sütunlar
		{
			cout << matris1[i][j]+matris2[i][j] << " ";
		}
		cout << endl;
	}


	//10*5 boyutlu matris içerisine 20 ile 50 arasında rastgele değerler atayalım ve kullanıcının girdiği sayıyla bu matrisi çarpalım
	//Matris 2,3 olsaydı ve kullanıcı 2 girseydi;
//Çıktı:
/*
	10*5 Boyutlu Matris:
	20 22 24
	21 24 25
	10*5 Boyutlu Matrisin 2 katı:
	40 44 48
	42 48 50
*/
	int matris[10][5], sayi;
	cout << "10*5 Boyutlu Matris:\n";
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			matris[i][j] = rand() % 31 + 20;
			cout << matris[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Sayı:";
	cin >> sayi;
	cout << "10 * 5 Boyutlu Matrisin " << sayi <<  " katı:\n";
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << matris[i][j] * sayi << "\t";
		}
		cout << endl;
	}

	//Personel ad, soyad, departman bilgilerini tutan ve 4 personelin kaydını kullanıcıdan alıp ekrana yazdıran programı yazınız.
	
	//Dizinin içerisine ilk değer ataması yapalım:
}

