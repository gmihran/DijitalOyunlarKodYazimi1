#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main() {
  setlocale(LC_ALL, "Turkish");
  int i=0,j=0;
  cout << "i =" << i << endl;
  i++; //i=i+1;
  cout << "i =" << i << endl;
  cout << "i++ =" << i++ << endl;
  //Önce i değerini ekrana yazdır, sonra i değerini 1 arttır

  cout << "i =" << i << endl;
  ++i; //i=i+1;
  cout << "i =" << i << endl;
  cout << "++i =" << ++i << endl; 
  //Önce i değerini arttır, sonra i değerini ekrana yazdır
  cout << "i =" << i << endl;
  i+=1; //i=i+1;
  cout << "i =" << i << endl;
  i-=1; //i=i-1; //i--; //--i;
  cout << "i =" << i << endl;
  i*=3; 
  cout << "i =" << i << endl;
  i/=4;
  cout << "i =" << i << endl;
  cout << "j =" << j << endl;
  j=i++;
  //Önce j değerine i değerini ata, sonra i değerini 1 arttır
  cout << "i =" << i << endl;
  cout << "j =" << j << endl;
  j=++i;
  //Önce i değerini 1 arttır, sonra j değerine i değerini ata
  cout << "i =" << i << endl;
  cout << "j =" << j << endl;
  
   //1 ile 100 arasındaki tüm tam sayıları ekrana yazdıralım
   cout << "1-100 arasındaki tam sayılar:"<< endl;
   for (i=1;i<=100;i++) //i=i+1
    cout << i << endl;
  //1 ile 100 arasındaki tek sayıları ekrana yazdıralım
  cout << "1-100 arasındaki tek sayılar:"<< endl;
  for (i=1;i<=100;i+=2) //i=i+2
    cout << i << endl;
  //0 ile 100 arasındaki çift sayıları ekrana yazdıralım
  cout << "0-100 arasındaki çift sayılar:"<< endl;
  for (i=0;i<=100;i+=2)
    cout << i << endl;

  //For döngüsünün çalışabilmesi için koşulun (şartın) doğru olması gerekir.

  /*
  //Sonsuz döngü ve Ölü döngü

  //Ölü döngü
  for (i=1;i<0;i++)
    //Bu döngü şart (koşul) doğru olmadığı için hiçbir zaman çalışmaz
    cout << i << endl;
  //Sonsuz döngü
  for (i=1;i==1;)
    //Bu döngü sonsuza kadar çalışır
    cout << i ;
    //Programda sonsuz ve ölü döngüden kaçınmalıyız
    */

  //0 ile 100 arasında olan sayılardan tek olan sayıları ekrana yazdıralım
  cout << "0 ile 100 arasında olan sayılardan tek sayılar" << endl;
  for (i=0;i<=100;i++)
  //i değeri 101 olduğu an 101<=100 şartı sağlanmadığı için döngü sona erer
    if (i%2!=0) //if (i%2==1)
      cout << i << endl;
  cout << "Döngü sona erdi... Döngü bittikten sonraki i değeri:" << i << endl;
  //i değişkeni 101 değerini tutar

  //1-100 arasında 3'e veya 5'e tam bölünebilen sayıları ekrana yazdıralım
  cout << "1-100 arasında 3'e veya 5'e tam bölünebilen sayılar" << endl;
  for (i=1;i<=100;i++)
    if (i%3==0 || i%5==0)
      cout << i << endl;
  //1-100 arasında 3'e veya 5'e tam bölünebilen, ama 15'e tam bölünemeyen sayıları ekrana yazdıralım
  cout << "1-100 arasında 3'e veya 5'e tam bölünebilen ama 15'e tam bölünemeyen sayılar" << endl;
  for (i=1;i<=100;i++)
    if ((i%3==0 || i%5==0) && i%15!=0)
      cout << i << endl;
  
  
  //Klavyeden girilen kelimeyi alt alta 10 kere ekrana yazdırınız.
  string kelime;
  cout << "Kelime:";
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
  //iki sayı birbirine eşitse else durumu çalışır
    cout << x; //cout << y;

  
  //Klavyeden girilen sayının faktöriyelini ekrana yazdırınız.
  //5!=1*2*3*4*5=120
  //3!=3*2*1=6
  int sayi,fakt=1;
  //Çarpmada etkisiz eleman 1 olduğu için fakt değişkenine 1 değerini atadık
  cout << "Sayı:";
  cin >> sayi;
  for (i=1;i<=sayi;i++)
    fakt*=i; //fakt=fakt*i;
  cout << sayi << "!=" << fakt << endl;

  //Klavyeden girilen 5 adet sayının toplamını ve ortalamasını ekrana yazdırınız.
  int s,t=0;
  //Toplamada etkisiz eleman 0 olduğu için t değerine 0 atarız
  for (i=1;i<=5;i++)
  {
    cout << i << ".sayı:";
    cin >> s;
    t+=s; //t=t+s;
  }
  cout << "Toplam:" << t << endl;
  cout << "Ortalama:" << t/5 << endl;
  }