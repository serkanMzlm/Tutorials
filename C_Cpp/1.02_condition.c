#include<stdio.h>
//if-else if - else
//switch-case-default

int main(){
	int value = 5 ;
	if(value<2){ // eger ifden sonra tek satır varsa "{" gerek yoktur
		printf(" <2 ");
		
	}
	else if(value<5){
		printf(" <5 ");
	}
	else{
		printf(" 5=> ");
	}


	switch(value){
		case 0: printf("value entered 0");
		break;
		case 1: printf("value entered 1");
		break;
		case 3: printf("value entered 2");
		break;
		default :
			printf("value entered %d",value);
			break;
	}
		
   return 0;
	
}
