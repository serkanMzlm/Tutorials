#include <iostream>
using namespace std;
class Tarih {
	private :
		int  yil;
		string  ay;
		int gun;
	public : 
		Tarih(int , string ,int);
		friend void  ekrana_yaz(Tarih yaz);
	
};
Tarih::Tarih(int yil , string ay , int  gun ){
	this -> yil = yil; // aynı değişken adları kullanıldığı için  'this pointer'  kullanıldı
	this -> ay = ay;
	this -> gun = gun;
}
void ekrana_yaz(Tarih yaz){
	cout << yaz.gun << "/" << yaz.ay << "/" << yaz.yil << endl;
}
main(){

	Tarih tarih(2020,"Aralik",23);
	ekrana_yaz(tarih);
	return 0;
}
