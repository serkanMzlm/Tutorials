/*
---------------------------------------------------------------------------------
|friend fonksiyon olarak tanimlanan sinif privat ozelliklere erisebilir         |
|buda disardan bir private ozelliklerinin degismesinde  veya göruntulenmesi     |
|saglanabilir (getler ve setler metotleri gibi)                                 |
|friend fonksiyonda kullanilicak nesnenin referans parametresi(&) olarak alinir |
---------------------------------------------------------------------------------
*/
#include <iostream> //standart girdi ve cikti fonksiyonlarin oldugu kutuphane

using namespace std; /*standart kfonksiyonlarý surekli uzun uzun cagirmak yerine
ilk basta  koda dahil ediyoruz*/

class Tarih { // sinif tanimlama
private://erisilemez kisim
    int gun,ay,yil; // ozellikler
public: // erisebilir kisim
    friend void ekrana_yaz(Tarih & ); //getler metodu yerine bu islemi bir friende  yapildi
    friend void deger_ata(Tarih&  ); //setler metodu yerine bu islemi bir friend fonksiyonda yapildi
    friend class gun;
};

void ekrana_yaz(Tarih &nesne){
cout<<nesne.gun<<"."
    <<nesne.ay<<"."
    <<nesne.yil<<endl;

}

void deger_ata(Tarih &nesne1){
    nesne1.gun = 01;
    nesne1.ay = 01;
    nesne1.yil = 2000;

}

class gun{
public:
    void goster(Tarih& nesne);
    void degistir(Tarih& nesne1);
};


void gun::goster(Tarih& nesne){
    cout<<nesne.gun<<endl;
}
void gun::degistir(Tarih&nesne1){
    cout<<"Tarih degistiriliyor..."<<endl;
    nesne1.gun=28;
    nesne1.ay=05;
    nesne1.yil=2001;
}
int main()
{
    Tarih tarih1;
    deger_ata(tarih1);
    ekrana_yaz(tarih1);
    gun gun1;
    gun1.goster(tarih1);
    gun1.degistir(tarih1);
    ekrana_yaz(tarih1);

    return 0;
}
