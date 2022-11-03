#include<stdio.h>
int main(){
	unsigned int a = 18 ; // 00010010
	unsigned int b = 10 ; // 00001010
	unsigned int c = a & b ; //00000010
	unsigned int d = a|b ; //00011010
	unsigned int e = a^b ; // 00011000
	unsigned char f = ~a ; // b yi tamamen bir 11101101
    printf ("(a & b)= %u\n(a|b)= %u\n(a^b)= %u\n ~%d = %d",c,d,e,a,f);

	//Bitler üzerinde kaydırma
	unsigned int a = 8;    // 00001000
	unsigned int b = a>>1; // 00000100
	unsigned int c = a>>2; // 00000010
	unsigned int d = a<<1; // 00010000
	unsigned int e = a<<2; // 00100000
	printf("a=%u\nb=%u\nc=%u\nd=%u\ne=%u\n",a,b,c,d,e);

	return 0;		
}
