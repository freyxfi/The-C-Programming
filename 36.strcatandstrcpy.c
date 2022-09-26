#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

	char nxst[1000] = "Hello ";
	char a = 'N';
	char b = 's';
	char c = '7';

	printf("%c\n", toupper(b));
	printf("%c\n", tolower(a));
	printf("%c\n", toupper(c));
	printf("%c\n", toupper(a));


	strcat(nxst, "Frey ");
	strcat(nxst, "you ");
	strcat(nxst, "are ");
	strcat(nxst, "single ");
	printf("%s \n", nxst);

	strcpy(nxst, "Frey is in a Realtionship ");
	printf("%s \n", nxst);
	
	return 0;
}
	
	


