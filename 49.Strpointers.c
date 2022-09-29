#include <stdio.h>
#include <stdlib.h>

int main(){

	char anime[30];
	char *pAnime = anime;

	fgets(pAnime, 20, stdin);
	puts(pAnime);

	return 0;
}
