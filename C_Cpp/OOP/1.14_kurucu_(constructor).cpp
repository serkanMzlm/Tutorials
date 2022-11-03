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
ornek dizilerde verdigimiz degerlere gore hangi constructer cagirdigini
gosterecek.
*/
#include <iostream>

using namespace std;

class tarih {
private:
    int gun, ay, yil;

public:
    tarih();
    tarih(int,int,int);
    void gettarih();
};
tarih::tarih(){
    cout<<"deger atanmamis  constructer..."<<endl;
    gun=1;
    ay=1;
    yil=2000;

}

tarih::tarih(int g, int a=01, int y=2000){
    cout<<"deger atamis  constructer..."<<endl;
    gun=g;
    ay=a;
    yil=y;
}

 void tarih:: gettarih(){
    cout<<gun<<"."<<ay<<"."<<yil<<endl;
 }


int main()
{
    tarih tarih1[5]={{02,02,2000},{},{01},{03,03}};

    for(int i=0;i<5;i++){
        tarih1[i].gettarih();
    }
    cout<<"-------------------------------------------"<<endl;
    cout<<"pointer kismi bundan sonrasi"<<endl;
    tarih* ptarih1 = new tarih(); //parametresis calistirilir
    tarih* ptarih2 = new tarih(12,12,2000);//parametreli calistirilir.
    cout<<"-------------------------------------------"<<endl;
    return 0;
}
