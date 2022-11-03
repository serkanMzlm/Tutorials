#include<stdio.h>

int main(){
	int value=10;

	for(int i=0;i<=value;i++)
	{

		for(int a=0;a<i;a++)
		{
			printf("*");
		}
		printf("\n");	
	}

	
	value=0;
	while(value<5)
	{ //kosul saglandıgı sürece dongü devam eder
		printf("value = %d\n ",value);

		value++;
	}

	do
	{ //while farki once döngüye girer sonra kontrol eder
		printf("value = %d",value);
		value ++;	
	}
	while(value<5);	
	
	
	


return 0;	
}
