#include<stdio.h>

int main(){
    int a = 10;
    int *b ; //pointer adresi bildirildi 
	b = &a ;//  a nin bellek adresi b atandi
    printf("a = %d\n",a);
    printf("a bellek adresi = %p\n",a); //& isareti bize bellekteki adresini gösterir
	printf("b = %d\n",*b); // b bir bellek adresi oldugundan basına  * koyarak o bellek 
	// adresinde bulunan degeri cagırabiliriz
	printf("b bellek adresi %p",a);
	return 0;
}
