#include "pch.h"
#include <iostream>
#include <random>
#include <time.h>
using namespace std;
void yazdir();
void pc();
void kullanici();
void kontrol();

char sos[3][3] = { '1','2','3','4','5','6','7','8','9' }; //public 2 boyutlu dizi (matris)
bool k; //public deðiþken 

int main()
{
	srand(time(NULL));
    //Kullanýcý ve bilgisayar arasýnda oynanacak
	//Bilgisayar boþ olan noktalara rastgele S-O yerleþtirecek (random)
	//Eðer daha önce bir deðer girilmiþse bu deðerler deðiþtirilemez
	//Tüm alanlar dolduðunda oyun biter
	do{
	pc();
	yazdir();
	kontrol();
	if (k)
		break;
	kullanici();	
	} while (!k); //while(k==false);

}
void yazdir() {
	for (int i = 0; i < 3; i++) {
		cout << "| ";
		for (int j = 0; j < 3; j++) {
			cout << sos[i][j] << " | ";
		}
		cout << endl << "-------------" << endl;
	}
}
void pc() {
	//Random konum
	char random[2] = { 'S','O' };
	//Random S-O
	int so = rand() % 2 + 0; //0-1 arasýnda deðer üretir
	char tercih = random[so];
	//yukardaki iþlemler yapay zeka mantýðýna dönüþtürülebilir
	int satir, sutun;
	do {
		satir = rand() % 3 + 0;
		sutun = rand() % 3 + 0; //1-9 arasýnda deðer üretir
	} while (sos[satir][sutun] == 'S' || sos[satir][sutun] == 'O');
	sos[satir][sutun] = tercih;
}
void kullanici() {
	char tercih;
	char secim;
	bool kontrol = true;
	int satir, sutun;
	do{
		cout << "Tercihiniz:";
		cin >> tercih;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++)
			{
				if (sos[i][j] == tercih) {
					satir = i;
					sutun = j;
					kontrol = false;
					break;
				}
			}
			if (kontrol == false)
				break;
		}
	} while (kontrol);
	do{
		cout << "S-O :";
		cin >> secim;
	} while (secim != 'S' && secim != 'O');
	sos[satir][sutun] = secim;
}
void kontrol() {
	//Oyun bitti mi bitmedi mi kontrol gerçekleþtireceðiz
	k=false; //oyun bitmedi
	int sayac = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			if (sos[i][j] != 'S' && sos[i][j] != 'O') {
				sayac++;
			}
		}
	}
	if (sayac == 0) {
		k = true; //oyun bitti
	}
}

//Yapýlacaklar:
//oyunda kazananý belirleyeceðiz.
//En son kim hamle yaptý bu bilgiyi tut
//main içerisindeki do-while döngüsü for döngüsüne dönüþtürülüp (1-9 arasýnda) eðer tek ise pc, çift ise kullanýcý hamle yaptý diye kontrol edilebilir
//En son hamle yapan kiþiden sonra bir fonksiyon çaðrýrýr, yatay, dikey ve çapraz konumda SOS yazýldý mý kontrol edilir.
//bilgisayarýn daha anlamlý karar vermesini saðlayacaðýz (yapay zeka). 