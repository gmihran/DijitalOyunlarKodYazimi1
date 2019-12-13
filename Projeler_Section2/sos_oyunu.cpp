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
bool k; //public değişken 
//public tanımlanan tüm değişkenler bütün fonksiyonlar tarafından kullanılabilir.

int main()
{
	srand(time(NULL));
    	//Kullanıcı ve bilgisayar arasında oynanacak
	//Bilgisayar boş olan noktalara rastgele S-O yerleştirecek (random)
	//Eğer daha önce bir değer girilmişse bu değerler değiştirilemez
	//Tüm alanlar dolduğunda oyun biter
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
	int so = rand() % 2 + 0; //0-1 arasında değer üretir
	char tercih = random[so];
	//yukardaki işlemler yapay zeka mantığına dönüştürülebilir
	int satir, sutun;
	do {
		satir = rand() % 3 + 0;
		sutun = rand() % 3 + 0; //1-9 arasında değer üretir
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
	//Oyun bitti mi bitmedi mi kontrol gerçekleştireceğiz
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
