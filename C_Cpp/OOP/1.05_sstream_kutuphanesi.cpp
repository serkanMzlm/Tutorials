#include <iostream>
#include <sstream> //strigleri  parcalama ve donusum yapmamiza yarayan kutuphane
using namespace std;

int main()
{
    string str = "1 2 3 4 5 6 ";

    stringstream nesne_adi; //burda kulanmamiz icin bir nesne tanimaldik
    nesne_adi << str; //str icindeki verileri  donderdik
    int a[6]; //sstream tek tek verileri atar
    for(int i=0;i<6;i++){
    nesne_adi >>a[i];//verileri terk tek  alip  o degeri belirtilen yere tasir
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
