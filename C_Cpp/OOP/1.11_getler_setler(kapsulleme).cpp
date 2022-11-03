/*
---------------------------------------------------------------
private kýsmýnda ki deðiþkenlerin deðerlini deðiþtirmek için
kullanýlan metotlardýr.
get => deðiþken deðerini okumak istersek get metodunu
set => deðiþkenin deðerini deðiþþtirmek istersek kullaniriz
buna kapsüllemedenir
----------------------------------------------------------------
*/
#include <iostream>
using namespace std;

class tarih{
private: //dýþardan eriþim izin vermez
    int gun;
    int ay;
    int yil;
public: //dýþardan eriþime izin verir
    void setTarih(int , int , int ); //private kýsmýnda bulunan deðiþkenleri degerlerini deðiþtirir
    void getTarih(); //ekrana yazma fonksiyonunun prototipi
};

void tarih :: setTarih(int g,int a,int y){

    gun = g;
    ay = a;
    yil = y;

}
void tarih :: getTarih(){
    cout<<"gun.ay.yil"<<endl;
    cout<<gun<<".";
    cout <<ay<<".";
    cout<<yil<<endl;

}



int main()
{
    tarih tarih1;
    tarih1.setTarih(12,06,2020);
    tarih1.getTarih();
    return 0;
}
