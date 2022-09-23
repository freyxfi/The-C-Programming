#include <stdio.h>
#include <stdlib.h>

int main(){

	char lastname[20];
	printf("Enter your last name\n:-");
	scanf(" %s", lastname);

	(lastname[0] < 'P') ? printf("u r in blue team\n") : printf("U r in Red Team\n");
	
	return 0;
}	
