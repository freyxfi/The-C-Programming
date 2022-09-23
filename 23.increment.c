#include <stdio.h>
#include <stdlib.h>

int main(){

	int lambo = 10;

	printf("%d\n", lambo);
	
	lambo++;

	printf("%d\n", lambo);

	lambo--;
	
	printf("%d\n", lambo);

	lambo++;
	lambo++;
	lambo++;

	printf("%d\n", lambo);
	
	int a = 5, b = 10, answer = 0;

	answer = ++a * b;

	printf("Answer %d\n", answer);

	a = 5, b = 10, answer = 0;
	answer = a++ * b;
	printf("Value of a:- %d\n",a);
	printf("Answer %d\n", answer);
	answer = a * b;
	printf("Answer %d\n", answer);
	a++;
	printf("%d\n", answer);
	printf("Value of a:- %d\n",a);
	return 0;
}
