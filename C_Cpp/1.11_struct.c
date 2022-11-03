#include<stdio.h>
#include<string.h>
struct sinemaFilm{
	char ad[30];
	char yonetmen[30];
	int yil;
};

int main(){
struct sinemaFilm film1;
struct sinemaFilm film2 = {"Collateral","Michael Mann",2004}; //Bu şekilde de atama yapılabilir.
strcpy(film1.ad,"Collateral");
strcpy(film1.yonetmen,"Michael Mann");
film1.yil = 2004;
printf("film adi : %s \n",film1.ad);
printf("film yonetmen : %s\n",film1.yonetmen);
printf("film yil :%d",film1.yil);
return 0;

}
