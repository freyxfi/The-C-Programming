#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE * fPointer;

	fPointer = fopen("Append.txt", "w+");
	
	fputs("I am going to play GTAV\n", fPointer);

	/* Damn i have to play GTAVI not GTAV */
	// Let me change that 
	
	fseek(fPointer, 19, SEEK_SET);

	fputs(" GTAVI", fPointer);

	fclose(fPointer);

	return 0;

}
	

