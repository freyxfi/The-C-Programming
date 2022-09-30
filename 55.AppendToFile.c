#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE * fPointer;

	fPointer = fopen("Nishant.txt", "a");

	fprintf(fPointer, "\n -a by @NishantxST\n");

	fclose(fPointer);

	return 0;

}
