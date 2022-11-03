#include <iostream>
/*

sabit degiskenlere kurucu fonksiyon cagrilmadan deger atanmalidir.
const ifadesini nesnelere ve metotlara getirebiliriz nesnelere gelen
const ifadesi o nesnede bulunan tum ozellikleri sabetler.
fonksiyonlarin basina const ifadesi gelirse bu programin derlenmesi
sirasinda bu kisimda herhengi bir degisiklik yapmiyicagimizi belirtiriz
bu fonksiyonlarin icinde herhangi islemler yapabiliriz sinifa ait bir
degiskenler uzerinde oynama yapamayiz.

*/
using namespace std;

class kordinat{
private:
    int x;
    const int y ;
public:
    kordinat(int,int);
    void getkordinat()const; /*bu kisimda degiskenlerimiz uzerinde bir degisiklik
    yapmiyicagimizi belirtik */


};
void kordinat::getkordinat()const{
cout <<"x : "<<x<<endl;
cout<<"y : "<<y<<endl;

}
kordinat::kordinat(int x, int y):y(y){ //kurucu fonksiyondan once yazýildigi icin haa vermez
//this kulanilmasina gerek yok program hangi degiskenden bahsettigimizi (y(y)) anliyor.
this->x = x;
//this-> y=y ; burda kurucu fonksiyon calistigi icin kulanilirsa hata verecektir
}

int main()
{
    kordinat kordinat1(10,12);
    const kordinat kordinat2(15,10);
    kordinat1.getkordinat();

    return 0;
}
