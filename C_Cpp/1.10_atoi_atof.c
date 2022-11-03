#include<stdio.h>
#include<stdlib.h> // atoi ve atof kütüphanesi
int main(){
	char* sayiStr0 = "256";
	char* sayiStr1 = "125.34";
	int sayi0 = atoi(sayiStr0); //string  int cevirir.
	float sayi1 = atof(sayiStr1); //string float cevirir.
	printf("number 0 = %d\nnumber 1 = %.2f",sayi0,sayi1);
	return 0;

	
}
