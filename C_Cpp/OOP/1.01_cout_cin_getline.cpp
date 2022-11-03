#include <iostream>

using namespace std;

string str;

int main()
{
/*
Bu kisimda  cin de girdigimiz cumlede boslugu
goren kisima kadar str icine atar  iki kelime
girdigimizde ilk kelimeden sonrayi almaz.
*/
   // cin>>str;
   // cout<<str<<endl;

//getline ise bizim gonderecegimiz bitis degerine kadarini kaydeder.
   getline(cin,str,'\n'); /*ilk  kisim nerden okuma yapilacagi ikinci kismi
okunan yerin yazilacak kisim  ucuncu kisimsa ne gorunce okuma islemi durduracagimiz
*/
    cout<<str<<endl;

    return 0;
}
