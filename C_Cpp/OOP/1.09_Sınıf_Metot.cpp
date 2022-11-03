#include "iostream" //standart fonksiyonların oldugu kütüphane
using namespace std; // std içindiki tüm fonksiyonları  programa dahil ediyoruz 

class sinif { //sınıf tanımı  
	public : //dışardan erişilebilir alan 
		int x,y;
		void degerler(int X , int Y)
	{
		x = X; // alınan degerleri atama yapılıyor  
		y = Y;
	}
		void goster(){ // x ve y degerleri ekranda gösteren fonksiyon
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;	
	}
};
int main ()
{
	sinif nesne; //nesne tanımlıyoruz 
	nesne.degerler(5,7);
	nesne.goster();
	
	return 0;
}
