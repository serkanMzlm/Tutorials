#include<stdio.h>
#include<string.h>
int main(){
	char word1[20]= "serkan" ;
	char word2[20]= "mazlum" ;
	printf("wort1 : %s\nword2 : %s\n",word1,word2);
	strcat(word1,word2); // ikinçiyi birincinin sonuna ekler
	printf("word1 : %s\nword2 : %s\n",word1,word2);
	strcpy(word2,word1); // ikinçiyi birinciye kopyalar
	printf("word1 : %s\nword2 : %s\n",word1,word2);
	 int deger = strcmp(word1,word2); // iki kelimeyi karşilaştırır 
	if(deger==0)
	printf("equal");
	else
	printf("not equal");
	printf("\n");
	char* siple =strchr(word1,'m'); // m harfini arar ve ondan sonraki kısmı yazar 
	char* mixed =strrchr(word1,'m'); // sondan m harfini arar  ve oraya kadar olan kısmı yazar
	puts(siple);//ekrana  yazma
	puts(mixed);
	return 0;
	
	
	
}
