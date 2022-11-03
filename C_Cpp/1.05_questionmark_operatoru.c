#include<stdio.h>

int main(){
	int a = 10 ;
	(a==7) ? printf("a = 7"): printf("a != 7") ; 

	/*
	kosul anlamı vardır eger dogru ise birinci 
	kısım gercekleşir yanlış ise ikinci kısım 
	
	*/
	
	printf("\na%s=7\n",a==7?"":"!");
	
	return 0;
}
