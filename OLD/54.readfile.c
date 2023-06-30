#include <stdlib.h>
#include <stdio.h>

int main(){

	FILE * fPointer;

	fPointer = fopen("Nishant.txt", "r");

	char singleline[150];

	while(!feof(fPointer)){
		fgets(singleline, 150, fPointer);
		puts(singleline);
	}

	fclose(fPointer);

	return 0;

}
