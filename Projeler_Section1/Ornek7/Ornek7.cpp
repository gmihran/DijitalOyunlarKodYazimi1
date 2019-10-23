#include <iostream>
#include <locale.h>
using namespace std;
int main() {
  setlocale(LC_ALL, "Turkish");
  //Klavyeden girilen 5 adet sayýnýn toplamýný ve ortalamasýný ekrana yazdýrýnýz.
  int i,sayi,toplam=0;
  /*
  for (i=1;i<=5;i++) //i=i+1 //i+=1 //++i
  {
    cout << i << ".sayý:";
    cin >> sayi;
    toplam=toplam+sayi; //toplam+=sayi;
    cout << "Toplam:" << toplam << endl;
  }
  cout << "Ortalama:" << float(toplam)/5
 << endl;
  //Veri türünü farklý bir veri türüne dönüþtürmek için veri_tipi(degisken_adi) yapýsý kullanýlýr.
  //Bu örnekte sonucun ondalýklý (reel)sayý olmasý için bölünen deðeri float veri türüne dönüþtürdük. int/int sonucu int deðer çýkar. float veya double/int sonucu float veya double çýkar.
 
  //Klavyeden girilen iki deðerin bölümünü bulup ekrana yazdýralým
  float bolunen,sonuc,bolen;
  //bölüm sonucunun ondalýklý sayý olmasý için bolunen ve sonuc deðerinin mutlaka float/double deðer olmasý gerekiyor.
  //bolen deðerin ondalýklý girilebilmesini saðlamak istiyorsak onu da float/double tanýmlamamýz gerekiyor.
  //Örn: bolen int olursa; 5 2.5 deðerinin bölüm sonucunu 2.5 olarak hesaplar. bolen deðerdeki .5 küsüratýný atarak 2 olduðunu varsayar.
  cout << "Bölünen ve bölen deðerler:";
  cin >> bolunen >> bolen;
  sonuc=bolunen/bolen;
  cout << bolunen << "/" << bolen << ":" << sonuc << endl;
  
  //Girilen 5 sayýdan en büyük ve en küçük sayýlarý ekrana yazdýralým
  int min,mak;
  //int sayi,i;
  for (i=1;i<=5;i++)
  {
    cout << "Bir sayý girin:";
    cin >> sayi;
    if (i==1)
    //ilk sayý girildiðinde bu if bloðu çalýþýr. Ýlk girilen sayýyý min ve mak deðerlerine eþitledik
    {
      min=sayi;
      mak=sayi;
    }
    else
    {
      //Girilen sayý 2., 3., 4. ve 5. sayý ise else bloðu çalýþýr
      if (sayi<min)
      //Eðer girilen sayý min deðerinden küçük bir deðer ise artýk min deðerim girilen deðer olacak
        min=sayi;
      if (sayi>mak)
      //Eðer girilen sayý mak deðerinden büyük bir deðer ise artýk mak deðerim girilen deðer olacak
        mak=sayi;
    }
  }
  cout << "Min:" << min << endl << "Mak:" << mak << endl;
  */
  //0 sayýsý girilene kadar girilen deðerlerin çarpýmýný hesaplatýp ekrana yazdýralým. 0 sayýsý çarpým sonucunu etkilemesin.
  //Bu soruda en mantýklý yapý do while yapýsýdýr. Ama biz for ile çözmeye çalýþýyoruz.
  int carpim=1;
  for (;;)
  //Sonsuz for döngüsü tanýmladýk
  {
    cout << "Sayý:";
    cin >> sayi;
    if (sayi==0)
    //Girilen sayý 0'a eþit olduðunda döngüyü kýrdýk
      break;
      //break ifadesi döngüyü kýrar
    carpim*=sayi; //carpim=carpim*sayi;
    //Burasý girilen sayý 0 olmadýðý takdirde çalýþýr. Sonucun 0 çýkmamasý için if bloðundan sonra yazýyoruz
  }
  cout << "Çarpým sonucu:" << carpim << endl;
  
}