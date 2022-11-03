#include<stdio.h>
/*
break döngüyü kırar
continue döngüyü atlar
return fonksiyondan çıkar
*/
int main(){
	printf("**********************************\n");
	printf("              break           \n");
	printf("**********************************\n");
	for(int deger1=0;deger1<=10;deger1++)
	{
		if(deger1==5)
		break; //donguyu kirar 
		printf("entered value = %d\n",deger1);
	}
	printf("**********************************\n");
	printf("            continue           \n");
	printf("**********************************\n");
	for(int deger2=0;deger2<=10;deger2++)
	{
		if(deger2==5)
		{
			continue ; //sadece  5 degerini atlar ve basa sarar.
		}
		printf("entered value = %d\n",deger2);
	}
	printf("**********************************");
	
	return 0;
}
