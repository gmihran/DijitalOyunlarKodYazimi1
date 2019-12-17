#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
using namespace std;
char sos[3][3] = { '1','2','3','4','5','6','7','8','9' };
//public deðiþken tanýmlamasý yaptýk. Tüm fonksiyonlara sos dizisine (matrisine) eriþebilir.
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
	tercih = rand() % 2 + 0; //0-1 arasýnda deðer üretir
	s = t[tercih];
	do {
		satir = rand() % 3 + 0; //0-2 arasýnda deðer üretir
		sutun = rand() % 3 + 0; //0-2 arasýnda deðer üretir
	} while (sos[satir][sutun]=='S' || sos[satir][sutun] == 'O'); //Amaç; o konumda S veya O deðeri varsa tekrar deðer üretmesini saðlamak.
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
					//Mehmet Mert Gündüz bug'ý buldu
					//konum != 'S' && konum == 'O' olmalý
					satir = i;
					sutun = j;
					kontrol = false; //bu konuma deðer girebilir
					break; //içteki (j) döngüsünü kýrar
				}
			}
			if (!kontrol) //if(kontrol==false)
				break; //dýþtaki (i) döngüsünü kýrar
		}
	} while (kontrol);
	do
	{
		cout << "S-O:";
		cin >> s;
	} while (s!='S' && s!='O'); //S veya O deðerine eþit deðilse tekrar deðer girsin
	sos[satir][sutun] = s;
}

void kontrol() {
	//Bu fonksiyonun amacý, S veya O yazacak bir hücrenin olmamasý durumunda oyunun bitmesini saðlamak
	//1 ile 9 arasýndaki deðerlerin bu matriste bulunmamasý durumunda gerçekleþir.
	//S veya O deðerine eþit olmayan deðerlerin sayýsý 0 ise artýk hamle yapamayýz. Oyun burada sona erer
	int sayac = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (sos[i][j] != 'S' && sos[i][j] != 'O')
				//Buradaki deðer S ve O deðerlerine eþit deðilse sayaç artar
				sayac++;
		}
	}
	if (sayac == 0)
		sonBitirici = true; //oyun bitti
}

//Yapýlacaklar:
//Oyunda kazananý belirleyeceðiz.
//En son hamle yapan kiþiden sonra bir fonksiyon çaðrýrýr, yatay, dikey ve çapraz konumda SOS yazýldý mý kontrol edilir.

//En son kim hamle yaptý bu bilgiyi tutacaðýz
//1.Yöntem:
//Hamle sayýsý belli olduðu için döngüde bir sayaç kullanýlýp her hamlede bir arttýrýlarak sayaç deðeri kimin hamle yaptýðýný tutabilir,
//eðer tek ise pc, çift ise kullanýcý hamle yaptý þeklinde kontrol edilebilir.
//2.Yöntem:
//Bir bool deðer kullanýlýr. En son pc hamle yaptýysa bu deðerde true, kullanýcý hamle yaptýysa false deðer tutulur.
//Bu þekilde en son hamle yapan belirlenebilir. Bu kontrol bool deðer yerine farklý veri türleri ile de kontrol ettirilebilir
//Diðer-Yöntemler:Bu kontrol iþlemi için bu yöntemlerin dýþýnda farklý kontrol yöntemleri de kullanýlabilir.

//Bilgisayarýn daha anlamlý kararlar vermesi saðlanabilir (yapay zeka). 
//Bilgisayarýn 1. olarak SOS yazmaya çalýþmasý, 2. olarak bizim SOS yazmamýzý engellemeye çalýþacak hamleler yapmasý saðlanabilir. 