#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
int main() {
  //Problem-1 Gladyatör:
  
  //kuvvet= Kendisinden küçük 2'nin kuvveti
  //Formül= (sayi-kuvvet)*2+1
  float kisisayisi, kok;
  //Osman Erdem çözümü:
  
  int sayi,i,kat2=1;
  cout<<"kişi:";
  cin>>sayi;

  for(i=0;;i++)
  {
    kat2=2*kat2;
    if(kat2==sayi)
    {
    break;
    }
  else if(kat2>sayi)
  {
  kat2=kat2/2;
  break;
  }
  }
  sayi=sayi-kat2;
  sayi=sayi*2+1;

  cout<<sayi << endl;

  //Seyfullah Çapkın çözümü:
  //int sayi;
  int kare=2,sonuc=1;
  cout<<"Lütfen bir sayi giriniz:";
  cin>>sayi;
  for(;;){
    kare=kare*2;
    if(kare>sayi){
      kare=kare/2;
      break;
    }
  }
  for(int i=0;i<(sayi-kare);i++){
    sonuc=sonuc+2;
  }
  cout << sonuc << endl;

//Kullanıcıdan bir değer isteyiniz. Eğer bu değer 1’den büyük değilse bu şarta uyana kadar (kullanıcı 1’den büyük sayı girene kadar) kullanıcıdan tekrar değer istenmesini sağlayınız. 
//Bu girdiği değer kadar kullanıcıdan tekrar sayı isteyiniz. Bu girilen sayılar arasındaki en küçük, en büyük değerleri ve bu sayıların toplamlarını ekrana yazdıracak olan programı C veya C++ dili ile kodlayınız. 
  //int i,sayi;
  int s,mak,min,toplam=0;
git:
  cout << "Bir sayı giriniz:";
  cin >> s;
  if (s<=1) 
    goto git;
  for (i=1;i<=s;i++)
  {
      cout << i << ".sayı:";
      cin >> sayi;
      if (i==1)
      {
        mak=sayi;
        min=sayi;
      }
      else 
      {
        if (mak<sayi)
          mak=sayi;
        if (min>sayi)
          min=sayi;

      }
      toplam+=sayi;
      
  }
  cout << "Mak:" << mak << endl;
  cout << "Min:" << min << endl;
  cout << "Sayıların toplamı:" << toplam << endl;
  
  //Problem-2:
  //1 ile 100 arasında rastgele üretilen sayıyı tahmin edelim
  //Hak:3
  //int i;
  int random,tahmin;
  srand(time(NULL));
  random=rand()%100+1;
  for (i=1;i<=3;i++)
  {
    cout << "Tahmin:";
    cin >> tahmin;
    if (tahmin==random)
    {
      cout << "Tebrikler" << endl;
      break;
    }
    else if (tahmin>random)
      cout << "Tahmininiz sayıdan büyük" << endl;
    else
      cout << "Tahmininiz sayıdan küçük" << endl;
  }
  if (tahmin!=random)
    cout << "Bilemediniz. Sayı:" << random << endl;

  //Problem-3: Kullanıcının girdiği sayıyı bilgisayara tahmin ettirelim
  //Sayı aralığı:1-100
  //int sayi,min,mak,random;
  int sayac=0;
  min=1;
  mak=100;
gitsayi:
  cout << "Sayı:";
  cin >> sayi;
  if (sayi<1 || sayi>100)
    goto gitsayi;
  srand(time(NULL));
  for (;;)
  {
    random=rand()%(mak-min+1)+min;
    cout << random << endl;
    sayac++;
    if (random<sayi)
      min=random+1;
    else if (random>sayi)
      mak=random-1;
    else
      break;
  }
  cout << "Tahmin sayısı:" << sayac << endl;


  //Problem-4: Kullanıcının düşündüğü sayıyı bilgisayara tahmin ettirelim
  //Kullanıcı yukarı,aşağı,doğru bildiğine dair geri dönüşlerde bulunacak
  //int sayi,min,mak,random,sayac;
  int durum;
  sayac=0;
  min=1;
  mak=100;
  srand(time(NULL));
  for (;;)
  {
    random=rand()%(mak-min+1)+min;
    cout << random << endl;
    sayac++;

    cout << "Tahmin doğru mu?\n";
  gitdurum:
    cout << "0-aşağı 1-yukarı  2-doğru :";
    cin >> durum;
    if (durum<0 || durum>2)
      goto gitdurum;
    if (durum==1)
      min=random+1;
    else if (durum==0)
      mak=random-1;
    else
    {
      break;
    }
      
  }
  cout << "Tahmin sayısı:" << sayac << endl;

  //Problem-5:Kullanıcının girdiği sayıyı bilgisayara (kısa bir yolla) tahmin ettirelim
  //int sayi,min,mak,random,sayac,durum;
  min=1;
  sayac=0;
  mak=100;
  srand(time(NULL));
  for (;;)
  {
    random=(mak+min)/2;
    cout << random << endl;
    sayac++;

    cout << "Tahmin doğru mu?\n";
  gitdurum2:
    cout << "0-aşağı 1-yukarı  2-doğru :";
    cin >> durum;
    
    if (durum<0 || durum>2)
      goto gitdurum2;
    if (durum==1)
      min=random;
    else if (durum==0)
      mak=random;
    else
    {
      break;
    }
    if ((mak-min)<=1)
      break;
    
  }
  cout << "Tahmin sayısı:" << sayac << endl;
  

  //İki oyuncunun eşit miktarda parası var. 
  //tura gelirse 1., yazı gelirse 2.kazanır.
  //Ortaya konulan para her zaman 1. oyuncudan alınıyor
  //Eğer 1. oyuncu kazanırsa ortaya bir sonraki turda 1 lira koyacak
  //Eğer 2. oyuncu kazanırsa 1. oyuncu bir önceki turun 2 katı para koyacak
  //Eğer 1.oyuncu tekrar kazanırsa para 1 lira olur.
  //int random;
  int para1,para2;
  cout << "Para:";
  cin >> para1;
  para2=para1;
  srand(time(NULL));
  
  //Son değer: İki değerin toplamı -1
  //rand()%b+a;
  //İlk değer: a
  //Son değer: a+b-1
  
  //0-tura 1-yazı
  int n=1;
  for (;;)
  { 
    cout<<"("<<para1<<","<<para2<<","<<n<<")"<<endl;
    random=rand()%2+0;
    cout << random<<endl; 
    para1-=n;
       
    if(para1<0){
      cout<<"1.Oyuncu kaybetti." << endl;
      break;
    }
    if (random==0){    
      para1+=n;
      n=1;           
    }else if(random==1){
      para2+=n;
      n=n*2;          
    }
    
  }
  

  //İki oyuncunun eşit miktarda parası var. 
  //tura gelirse 2., yazı gelirse 1.kazanır.
  //Ortaya konulan para dışarıdan alınıyor
  //Eğer yazı gelirse ortaya bir sonraki turda 1 lira koyacak ve parayı 1.oyuncu alacak
  //Eğer tura gelirse bir önceki turun 2 katı para koyacak ve parayı 2.oyuncu alacak
  //Eğer 2 oyuncudan birinin hiç parası kalmazsa oyun sona erecek.
  //int random,para1,para2,n;
  cout << "Para:";
  cin >> para1;
  para2=para1;
  srand(time(NULL));
  
  //Son değer: İki değerin toplamı -1
  //rand()%b+a;
  //İlk değer: a
  //Son değer: a+b-1
  
  //0-tura 1-yazı
  n=1;
  for (;;)
  { 
    cout<<"("<<para1<<","<<para2<<","<<n<<")"<<endl;
    random=rand()%2+0;
    cout << random<<endl; 
    
       
    if(para1<=0){
      cout<<"1.Oyuncu kaybetti.";
      break;
    }
    else if (para2<=0)
    {
    cout<<"2.Oyuncu kaybetti.";
      break;
    }  
    if (random==0){    
      para1-=n;
      para2+=n;
      n=n*2;         
    }else if(random==1){
      para1+=n;
      para2-=n;
      n=1;         
    }
    
  }
}