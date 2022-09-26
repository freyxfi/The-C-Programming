#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	char DogName[50];
	char DogFood[40];
	char sentance[75] = "";

	puts("what's the dog name:-");
	gets(DogName);

	puts("What does it eats ?");
	gets(DogFood);

	strcat(sentance, DogName);
	strcat(sentance, " Loves to eat ");
	strcat(sentance, DogFood);

	puts(sentance);


	return 0;
}
