#include<stdio.h>
void normal(void);
void statik(void);
int main(){
	printf("------------------\n");
	printf("normal varable : \n");
	printf("------------------\n");
	normal();
	normal();
	normal();
	printf("------------------\n");
	printf("static varable :\n");
	printf("------------------\n");
	statik();
	statik();
	statik();
	return 0;
}
 void normal(void){
 	int a = 0;
 	printf("%d\n",a);
	 a +=1;
 }
 void statik(void){
 	static int b = 0; // değişkenin degerini  kaybetmez
 	printf("%d\n",b);
 	b+=1;
 	
 }
