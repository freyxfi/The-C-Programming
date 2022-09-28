#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){

	int pinchu = 42;

	int *pPinchu = &pinchu;

	printf("Address \t Name \t  \t Value \n");
	printf("%p \t %s \t %d\n", pPinchu, "pinchu", pinchu);
	printf("%p \t %s \t %d\n", &pinchu, "pPinchu", pPinchu);
	printf("\n ppinchu: %d\n", *pPinchu);

	*pPinchu = 14;

	printf("\n ppinchu: %d\n", *pPinchu);
	printf("\n pinchu: %d\n", pinchu);

	
	return 0;
}
