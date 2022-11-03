#include<iostream>
using namespace std;

int a = 10 ;

int main(){
	cout << "Postfix = " << a++ << endl; // önce yazar sonra degeri bir artirir (postfix)
	cout << "Prefix = " << ++a << endl;  // önce deðeri bir artirir sonra yazar (prefix)
	
	return 0;
}
