#include <stdio.h>
#include <stdlib.h>

int main(){
	int age;
	char gender;

	printf("How old are you:-");
	scanf("%d",&age);

	printf("Type your gender (m/f) :-");
	scanf("%c", gender);


	if (age >= 18){
		printf("Welcome to the website\n");
	}
	else
	printf("You are not old enough to visit this website\n");

	return 0;
}

