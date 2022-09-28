#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){

	int pinchu = 42;

	printf("Address \t Name \t  \t Value \n");
	printf("%p \t %s \t %d\n", &pinchu, "pinchu", pinchu);
	
	int * pPinchu = &pinchu;

	printf("%p \t %s \t %d\n", pPinchu, "pinchu", pinchu);

	printf("%p \t %s \t %p\n", &pinchu, pPinchu, pPinchu);
	
	printf("%p \t %s \t %d\n", &pinchu, "pPinchu", pPinchu);
	
	return 0;
}
