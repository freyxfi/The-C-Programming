#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE * fPointer;
	fPointer = fopen("Nishant.txt", "w");
	
	fprintf(fPointer,"*****LEAVE ME HERE*****\n");

	fclose(fPointer);

	return 0;
}
