#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	int j = 63;
	int *p = NULL;

	p = &j;

	printf("The address of j is %x\n", &j);
	printf("p contains address  %x\n", p);
	printf("The Value of j is %d\n", j);
	printf("p is pointing to the value %d\n", *p);
	printf("And that's the pointer for you in C\n");

	return 0;
}
