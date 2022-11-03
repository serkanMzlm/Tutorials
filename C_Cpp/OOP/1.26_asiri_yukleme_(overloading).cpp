/*
overloading  ayni parametre sayilari olmasina ragmen farkli veri tiplerinde
parametre almasidir.
*/
#include <iostream>

using namespace std;

class tarih {
private:
    int gun, ay, yil;

public:
    //overloading
    tarih();
    tarih(double);
    tarih(int);
    tarih(int,int,int);
    void gettarih();

};

tarih::tarih(){
gun=10;
ay =10;
yil =2010;

}
tarih::tarih(double a){
gun=11;
ay =11;
yil =2011;

}
tarih::tarih(int a){
gun=12;
ay =12;
yil =2012;

}
tarih::tarih(int g,int a,int y){
gun = g;
ay = a;
yil = y;
}
 void tarih:: gettarih(){
    cout<<gun<<"."<<ay<<"."<<yil<<endl;
 }


int main()
{
    tarih tarih1;
    tarih tarih2(12.2);
    tarih tarih3(12);
    tarih tarih4(01,01,2020); //yazilan verileri direk degiskenlere atayacaktir
    tarih1.gettarih();
    tarih2.gettarih();
    tarih3.gettarih();
    tarih4.gettarih();
    return 0;
}
