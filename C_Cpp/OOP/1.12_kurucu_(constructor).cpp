/*
constructer  sayesinde nesnemizin ilk ayarlarini yapabiliriz
ozelliklerimize bir baslangic degeri verebiliriz.
********************************
constructer :
1-class ismi ile ayni olmalidir.
2-public kisminda bulunurlar.
3-geri donus degeri yoktur.
********************************
constructer eger ayarlanmas ise  standart olarak kendisi kurulur
ve calisir.


*/
#include <iostream>

using namespace std;

class tarih {
private:
    int gun, ay, yil;

public:
    tarih();
    void gettarih();
    void settarih(int,int,int );

};

tarih::tarih(){
    gun=01;
    ay=01;
    yil=2000;
}

 void tarih:: gettarih(){
    cout<<gun<<"."<<ay<<"."<<yil<<endl;
 }

 void tarih::settarih(int gun,int ay,int yil){
   this-> gun = gun; // this kullanarak  orda bulunan gun class ait oldugunu  belirtiriz
   this-> ay = ay;
   this -> yil = yil;
 }

int main()
{
    tarih tarih1;
    tarih1.gettarih(); // constructer   calistigi icin  degerler orda bulunan degerler gorunucektir.
    tarih1.settarih(10,10,2000);
    tarih1.gettarih();
    return 0;
}
