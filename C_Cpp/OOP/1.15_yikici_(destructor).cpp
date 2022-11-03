/*
destructor olusturmus oldugumuz nesnelerin sistem tarafindan isi bitince kaldirilmasidir
constructor ortadan kaldirilmasidir kisaca
1- sinifimizin ismi ile ayni olmalidir
2- basinda "~" olmasi lazimdir.
3- sadece parametresiz  olur
4- sadece 1 tane tanimlanir
NOT : normal durumlarda program zaten bu fonksiyonu kendisi calistirip  nesneleri kaldirili-
yordur. Kullanma amacimiz  pointer olarak cagirdigimiz yerleri sistem sonlanana kadar sisteme geri
vermemesi biz kendimiz ayarlayarak bu kisimlari kaldirabiliriz

yikicilarda ilk giren son cikar mantigi ile calisir.

*/
#include <iostream>

using namespace std;

class tarih {
private:
    int gun, ay,*pyil;

public:
    tarih(); //yapici fonksiyonumuz
    ~tarih(); //yikici fonksiyonumuz
    void gettarih();
};
tarih::tarih(){
    cout<<"constructor calisti ..."<<endl;
    gun=1;
    ay=1;
    pyil=new int(2000);


}

tarih::~tarih(){
cout<<"destructor calisti ..."<<endl;
delete pyil;
}

 void tarih:: gettarih(){
    cout<<gun<<"."<<ay<<"."<<*pyil<<endl; // pointer adresinde ki degeri gostermek icin "*" kullanilir
    cout<<&gun<<"."<<&ay<<"."<<pyil<<endl; // degiskenlerin bellek adreslerini gorebilmek icin "&" kullanilir
 }


int main()
{
    tarih tarih1[5]={};

    for(int i=0;i<5;i++){
        tarih1[i].gettarih();
    }

    return 0;
}
