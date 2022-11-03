#include <iostream>

using namespace std;
class tarih{
private: //diger kisimlara kapalidir
    int x;
public: //her yerden erisimsaglanir
    void setdeger(int x){
        this->x = x;
    }
    void getdeger(){
        cout<<x<<endl;
    }
//protected: bu kisimda kalitim  ile aktardigi yerlerin bu kisma erisimi acik diger yerlerin kapali
};

int main()
{
    tarih tarih1;
    tarih1.setdeger(10);
    tarih1.getdeger();

    return 0;
}
