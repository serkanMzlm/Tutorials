/**
stack memory
--> veriler direk  bellek icinde
yer alirlar  bu yuzden erisimi hizlidir
program derlenme asamasinda bellege yerlesirler
-->son giren ilk cikar mantigi vardir. Heap da
bu olay randomdur.



head memory
--> ise  runtime aninda kullanilir ve daginik
bir bellek goz yapisi oldugu icin erisimi daha
yavastir.


*/





#include <iostream>

using namespace std;


class A{
public:
     A(){cout<<"A yapici calisti..."<<endl;}
    ~A(){cout<<"A yikici calisti..."<<endl;}
};

class B{
public:
     B(){cout<<"B yapici calisti..."<<endl;}
    ~B(){cout<<"B yikici calisti..."<<endl;}
};


int main()
{
    B* b ;

    cout << "scope oncesi" << endl;
    {
        b = new B();//head alan ayrildi
        A a; //stalk alani oldugu icin yapici ve yikisi kendiliginden calisir.
    }
    cout << "scope sonrasi" <<endl;
    delete b;//head alani sildik
    return 0;
}
