#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
using namespace std;
char sos[3][3] = { '1','2','3','4','5','6','7','8','9' };
//public değişken tanımlaması yaptık. Tüm fonksiyonlara sos dizisine (matrisine) erişebilir.
bool sonBitirici = false;

void pc();
void yazdir();
void oyuncu();
void kontrol();

int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL));
	do
	{
		pc();
		yazdir();
		kontrol();
		if (sonBitirici)
			break; 
		oyuncu();
	} while (true); //while (sonBitirici==false); //while(!sonBitirici);
	

}
void pc() {
	int satir, sutun, tercih;
	char t[2] = { 'S','O' }, s;
	tercih = rand() % 2 + 0; //0-1 arasında değer üretir
	s = t[tercih];
	do {
		satir = rand() % 3 + 0; //0-2 arasında değer üretir
		sutun = rand() % 3 + 0; //0-2 arasında değer üretir
	} while (sos[satir][sutun]=='S' || sos[satir][sutun] == 'O'); 
	//Amaç; o konumda S veya O değeri varsa tekrar değer üretmesini sağlamak.
	sos[satir][sutun] = s;
}
void yazdir() {
	for (int i = 0; i < 3; i++)
	{
		cout << "| ";
		for (int j = 0; j < 3; j++)
		{
			cout << sos[i][j] << " | ";
		}
		cout << endl;
	}
}

void oyuncu() {
	char konum, s;
	int satir, sutun;
	bool kontrol=true;  
	do
	{
		cout << "Konum:";
		cin >> konum;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (konum == sos[i][j] && konum != 'S' && konum != 'O') {
					//Mehmet Mert Gündüz bug'ı buldu
					//konum != 'S' && konum == 'O' olmalı
					satir = i;
					sutun = j;
					kontrol = false; //bu konuma değer girebilir
					break; //içteki (j) döngüsünü kırar
				}
			}
			if (!kontrol) //if(kontrol==false)
				break; //dıştaki (i) döngüsünü kırar
		}
	} while (kontrol);
	do
	{
		cout << "S-O:";
		cin >> s;
	} while (s!='S' && s!='O'); //S veya O değerine eşit değilse tekrar değer girsin
	sos[satir][sutun] = s;
}

void kontrol() {
	//Bu fonksiyonun amacı, S veya O yazacak bir hücrenin olmaması durumunda oyunun bitmesini sağlamak
	//1 ile 9 arasındaki değerlerin bu matriste bulunmaması durumunda gerçekleşir.
	//S veya O değerine eşit olmayan değerlerin sayısı 0 ise artık hamle yapamayız. Oyun burada sona erer
	int sayac = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (sos[i][j] != 'S' && sos[i][j] != 'O')
				//Buradaki değer S ve O değerlerine eşit değilse sayaç artar
				sayac++;
		}
	}
	if (sayac == 0)
		sonBitirici = true; //oyun bitti
}

//Yapılacaklar:
//Oyunda kazananı belirleyeceğiz.
//En son hamle yapan kişiden sonra bir fonksiyon çağrırır, yatay, dikey ve çapraz konumda SOS yazıldı mı kontrol edilir.

//En son kim hamle yaptı bu bilgiyi tutacağız
//1.Yöntem:
//Hamle sayısı belli olduğu için döngüde bir sayaç kullanılıp her hamlede bir arttırılarak sayaç değeri kimin hamle yaptığını tutabilir,
//eğer tek ise pc, çift ise kullanıcı hamle yaptı şeklinde kontrol edilebilir.
//2.Yöntem:
//Bir bool değer kullanılır. En son pc hamle yaptıysa bu değerde true, kullanıcı hamle yaptıysa false değer tutulur.
//Bu şekilde en son hamle yapan belirlenebilir. Bu kontrol bool değer yerine farklı veri türleri ile de kontrol ettirilebilir
//Diğer-Yöntemler:Bu kontrol işlemi için bu yöntemlerin dışında farklı kontrol yöntemleri de kullanılabilir.

//Bilgisayarın daha anlamlı kararlar vermesi sağlanabilir (yapay zeka). 
//Bilgisayarın 1. olarak SOS yazmaya çalışması, 2. olarak bizim SOS yazmamızı engellemeye çalışacak hamleler yapması sağlanabilir. 
