#include<stdio.h>

int toplama(int ,int);

//Degişken parametre ayarlama
int topla(int parametreSayisi,...);
int cikar(int parametreSayisi,...);

int main(){
	int value1,value2;
	
	printf("enter value = ");
	scanf("%d",&value1);
	printf("\nenter value = ");
	scanf("%d",&value2);
	int total=toplama(value1,value2);
	printf("\ncollection = %d ",total);
	topla(2,value1,value2);
	topla(4,value1,value2,value1,value2);

}

toplama(int value1,int value2 ){ //int on tanımlı oldugu icin belirtilmek zorunda degil
	int toplam = value1+value2;
	return toplam;
}


int topla(int parametreSayisi,...){
	
	
	va_list parametre;
	va_start(parametre,parametreSayisi);
	int toplam=0;
	for(int i=0;i<parametreSayisi;i++){
		toplam+=va_arg(parametre,int);
		
	}
	printf("\ntoplam = %d\n",toplam);
	va_end(parametre);
	return toplam;
}
int cikar(int parametreSayisi,...){ // bu kısımda parametrelerin ikisinide eksili aliyor 0
	va_list Parametre;
	va_start(Parametre,parametreSayisi);
	int cikarma=0;
	for(int i=0;i<parametreSayisi;i++){
		cikarma-=va_arg(Parametre,int);
	}
	printf("cikarma =%d\n",cikarma);
	va_end(Parametre);
	return cikarma;
	
	
}