#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

	char name[10] = "Frey JST";

	char name2[11] = "Pinchu";

	printf("Hello there my name is %s\n And i'm a brother of %s\n", name, name2);
	
	name[2] = '3';

	printf("Now my name is %s\n", name); 
	
	char food[] = "Pizza";

	printf("%s is the best\n", food);

	strcpy(food, "momos");

	printf("%s is the best\n", food);


	return 0;
}
