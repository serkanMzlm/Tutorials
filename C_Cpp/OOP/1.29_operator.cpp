#include<iostream>

using namespace std;

class sayi{
private:
    int x ;
public:
    void getsayi();
    sayi(int);
    sayi operator + ( sayi& );
};

void sayi::getsayi(){
cout<<"x : "<<x<<endl;
}

sayi sayi::operator+( sayi& nesne)
{
 int x = this->x+nesne.x;
return sayi(x);
}

sayi::sayi(int _x){
x = _x;
}

int main(){

sayi sayi1(10);
sayi1.getsayi();
sayi sayi2(2);
sayi1.getsayi();
cout<<"-----------------------"<<endl;
sayi sayi3 = sayi2+sayi1;
sayi3.getsayi();




return 0;
}
