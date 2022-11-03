/*
private kisminda  bulunan degiskenlere yine ayni  ismi kullanarak set etmek istersek
programda class da bulunan  degisken oldugunu belirtmek icin "this" kulaniriz.
"this" operatoru  bir pointer operatoru oldugu için "->" kullanilir.
*/

#include <iostream>

using namespace std;

class tarih {
private:
    int gun, ay, yil;

public:
    void gettarih();
    void settarih(int,int,int );

};

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
    tarih1.settarih(10,10,2000);
    tarih1.gettarih();
    return 0;
}
