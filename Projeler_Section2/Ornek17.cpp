#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
void topla();
void topla(int s1, int s2);
void topla(int s1, int s2, int s3);
void topla(double a, double b, double c);
int toplam(int s1, int s2);
double toplam(double s1, double s2);

int main()
{
	int sayi1, sayi2, t;
	double sayi3=4.3;
	setlocale(LC_ALL, "turkish");
	//topla();
	topla(3,4);
	//cout << "2 sayý giriniz:";
	//cin >> sayi1 >> sayi2;
	topla(sayi1, sayi2);
	topla(sayi1, sayi2, 5);
	topla(4.2, 5.3, 5.6);

	topla(sayi1, sayi2, int(sayi3));


	t=toplam(3, 4);
	cout <<"Toplam:" << t << endl;

	cout << "Toplam:" << toplam(3, 4) << endl;

	int kare = pow(4, 2); //Kendisinde var olan bir fonksiyonu çaðýrdýk. Biz oluþturmadýk
	cout << kare << endl;
	int karekok = sqrt(16); //Kendisinde var olan bir fonksiyonu çaðýrdýk. Biz oluþturmadýk
	cout << karekok << endl;
	cout << toplam(5.2, 4.1) << endl;
	cout << toplam(5, 2) << endl;
	cout << toplam(5.0,4.2) << endl;
	system("pause"); //console ekranýný bir tuþa basýncaya kadar bekletir
	return 1;
}

//Kullanýcýnýn girdiði deðerleri toplayýp ekrana yazdýran fonksiyon
void topla() {
	int s1, s2;
	cout << "Ýki sayý giriniz:";
	cin >> s1 >> s2;
	cout <<"Toplam:" << s1 + s2 << endl;
}

void topla(int s1, int s2) {
	cout << "Toplam:" << s1 + s2 << endl;
}

void topla(int s1, int s2, int s3) {
	cout << "Toplam:" << s1 + s2 + s3 << endl;
}

void topla(double a, double b, double c) {
	cout << a + b + c << endl;
}

//Ýki sayýnýn toplam deðerini geri döndüren fonksiyon
int toplam(int s1, int s2) {
	return s1 + s2;
}

double toplam(double s1, double s2) {
	return s1 + s2;
}
