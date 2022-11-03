#include<stdio.h>

int main(){
	int a = 0 ;
	tekrar:
	a++;
	printf("a = %d\n",a);
	if(a<10)
	goto tekrar; //gidilemsini istenilen yer yazılır
	
	
	return 0;
}
