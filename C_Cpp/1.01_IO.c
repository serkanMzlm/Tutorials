#include<stdio.h> 
#include<limits.h> // kütüphane tam sayı ve türevlerini ait sabitler
#include<float.h> // kütüphane float ve türevlerine ait sabitler 

char a[20];

char b = 65;
char c = 'C'; //Karakter ataması ASCII ile belirlenebilir. ASCII karakter sayı karşılığı yazılabilir.


int main()
{
	register int rega =10 ; // bilgiyi CPU yazar bu sayede daha hızlı cagrılır

	printf("adiniz :"); // output olarak ekran ayarlıdır
	scanf("%s",a); //Input olarak klavye auarlıdır.
	printf("isminiz  : %s\n",a);
	printf("char :%d byte \na dizini:%d byte\n",sizeof(char), sizeof a);  // sizeof(a) veya sizeof a şeklinde bellekte kapladığı alanı görürüz

	//Tip Dönüşümleri
	float sayi0= 7/3;
	float sayi1= 7/(float)3;
	float sayi2= (float)7/3;
	float sayi3= (float)(7/3);

	printf("number0= %f\n",sayi0);
	printf("number1= %f\n",sayi1);
	printf("number2= %f\n",sayi2);
	printf("number3= %f\n",sayi3);

	
	printf("int  minimum value : %d\n",INT_MIN); //int ninimum degeri
	printf("int maximum value : %d\n",INT_MAX); //int maksimum degeri
	printf("float minimum value : %.5g\n",FLT_MIN);
	printf("float maximum value : %.5g\n",FLT_MAX);
	printf("double maximum value : %.5Lg\n",DBL_MIN);
	printf("double minimum value : %.5Lg\n",DBL_MAX);
 /*
 Bir diziyi .ağırma sırasında  a[indis] yazılır. Aynı şekilde indis[a] şeklinde çağrılabilir.
 IDE arka tarafta *(a+indis) yapar. a+indis = indis+a olduğu için yerleri değiştirilebilir.
 */


	return 0;	
}
