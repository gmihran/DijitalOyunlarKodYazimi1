//https://repl.it/languages/cpp platformunda çalıştık
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main() {
  setlocale(LC_ALL, "Turkish");
  int i=0,j=0,toplam=0;
  cout << "i =" << i << endl;
  cout << "i++ =" << i++ << endl;
  //Önce i değerini yazdır, sonra i değerini 1 arttır
  cout << "i =" << i << endl;
  cout << "++i =" << ++i << endl;
  //Önce i değerini arttır, sonra i değerini yazdır
  cout << "i =" << i << endl;
  toplam=i=i+1; //toplam=++i;
  cout << "toplam=i=i+1" << endl;
  cout <<"Toplam =" << toplam << endl;
  cout << "i =" << i << endl;
  toplam=++i; //toplam=i=i+1;
  //Önce i değeri 1 arttır, sonra toplam değişkenine ata
  cout << "toplam=++i" << endl;
  cout <<"Toplam =" << toplam << endl;
  cout << "i =" << i << endl;
  toplam=i++;
  //Önce i değerini toplam değişkenine ata, sonra i değerini 1 arttır
  cout << "toplam=i++" << endl;
  cout <<"Toplam =" << toplam << endl;
  cout << "i =" << i << endl;
  i+=1; //++i;
  cout << "i =" << i << endl;
  i*=2;
  cout << "i =" << i << endl;
  i/=2;
  cout << "i =" << i << endl;
  i-=5;
  cout << "i =" << i << endl;
  i--; //--i;
  cout << "i =" << i << endl;
  cout <<"Toplam =" << toplam << endl;
  toplam=i--;
  cout <<"Toplam =" << toplam << endl;
  cout << "i =" << i << endl;
  cout << "--i =" << --i << endl;;
  cout << "i =" << i << endl;
  //1 ile 100 arasındaki tüm tam sayıları ekrana yazdıralım
  cout << "1 ile 100 arasındaki tüm sayılar" << endl;
  for (i=1;i<=100;i+=1)
    cout << i << endl;
  //1 ile 100 arasındaki tek sayıları ekrana yazdıralım
  cout << "1 ile 100 arasındaki tek sayılar" << endl;
  for (i=1;i<=100;i+=2)
    cout << i << endl;
  //0 ile 100 arasındaki çift sayıları ekrana yazdıralım
  cout << "0 ile 100 arasındaki çift sayılar" << endl;
  for (i=0;i<=100;i=i+2)
    cout << i << endl;
  /*
  for (i=0;i>1;i++) 
    //Ölü döngü, hiçbir zaman çalışmaz
    //Şart doğru ise ve doğru olduğu sürece çalışır
    cout << i;
  for (i=0;i==0;)
    //Sonsuz döngü
    //Sonsuza kadar ekrana 0 yazdırır
    cout <<i;
  //Sonsuz ve ölü döngüden kaçınmalıyız.
  */

  //0 ile 100 arasında olan sayılardan tek olan sayıları ekrana yazdıralım
  cout << "0-100 arasındaki tek sayılar" << endl;
  for (i=0;i<=100;i++)
    if (i%2!=0)
      cout << i << endl;
  //1-100 arasında 3'e veya 5'e tam bölünebilen sayıları ekrana yazdıralım
  cout << "1-100 arasında 3'e veya 5'e tam bölünebilen sayılar" << endl;
  for (i=1;i<=100;i++)
    if (i%3==0 || i%5==0)
      cout << i << endl; 
  //Klavyeden girilen kelimeyi alt alta 10 kere ekrana yazdırınız.
  /*
  string kelime;
  cout << "Kelime giriniz:";
  cin >> kelime;
  for (i=1;i<=10;i++)
    cout << kelime << endl;
  //Girilen iki sayı arasındaki sayıları ekrana yazdıralım
  //1. girilen sayı büyükse büyükten küçüğe, 1. girilen sayı küçükse küçükten büyüğe yazdıralım
  int x,y;
  cout << "İki sayı giriniz:";
  cin >> x >> y;
  if (x>y)
    for (i=x;i>=y;i--)
      cout << i << endl;
  else if (x<y)
    for (i=x;i<=y;i++)
      cout << i << endl;
  else
    //sayılar birbirine eşitse else çalışır
    cout << x << endl; //cout << y << endl;
  
  //Klavyeden girilen sayının faktöriyelini ekrana yazdırınız.
  //5!=1*2*3*4*5=120
  //3!=3*2*1=6
  int sayi,fakt=1;
  //Çarpmada etkisiz eleman 1 olduğu için fakt değişkenine 1 değerini verdik
  cout << "Bir sayı giriniz:";
  cin >> sayi;
  for (i=1;i<=sayi;i++)
    fakt*=i; //fakt=fakt*i;
  cout << sayi << "!=" << fakt << endl;
  */
  //Klavyeden girilen 5 adet sayının toplamını ve ortalamasını ekrana yazdırınız.
  int s,t=0;
  //Toplamada etkisiz eleman 0 olduğu için t değişkenine 0 değerini verdik
  for (i=1;i<=5;i++)
  {
    cout << i << ".Sayı :";
    cin >> s;
    t+=s; //t=t+s;
  }
  cout << "Toplam=" << t << endl;
  cout << "Ortalama=" << t/5 << endl;
}