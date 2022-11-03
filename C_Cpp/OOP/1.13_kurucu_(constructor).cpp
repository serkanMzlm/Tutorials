/*
constructer  sayesinde nesnemizin ilk ayarlarini yapabiliriz
ozelliklerimize bir baslangic degeri verebiliriz.
********************************
constructer :
1-class ismi ile ayni olmalidir.
2-public kýsmýnda bulunurlar.
3-geri donus degeri yoktur.
********************************
constructer eger ayarlanmas ise  standart olarak kendisi kurulur
ve calisir.
icine eger deger verilirse  bu degerler  bir deger atanmaz ise onlar girilir
soldan saga dogru tek tek degerler vererek verdigimiz kisim degisir diger
kisimlar ayni sekilde kalir.

*/
#include <iostream>

using namespace std;

class tarih {
private:
    int gun, ay, yil;

public:
    tarih(int,int,int);
    void gettarih();
};

tarih::tarih(int g=01, int a=01, int y=2000){
    gun=g;
    ay=a;
    yil=y;
}

 void tarih:: gettarih(){
    cout<<gun<<"."<<ay<<"."<<yil<<endl;
 }


int main()
{
    tarih tarih1;//uc degeride ilk basta atadigimiz degerlerdir
    tarih tarih2(10); //ilk deger degisir
    tarih tarih3(10,10);//ilk iki deger degisir.
    tarih tarih4(10,10,2010);
    tarih1.gettarih(); // constructer   calistigi icin  degerler orda bulunan degerler gorunucektir.
    tarih2.gettarih();
    tarih3.gettarih();
    tarih4.gettarih();
    return 0;
}
