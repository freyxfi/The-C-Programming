#include <stdio.h>
#include <stdlib.h>


int main(){
	int age;
	char gender;

	printf("What is your age:-");
	scanf(" %d", &age);

	printf("What is your gender(m/f) :-");
	scanf(" %c", &gender);

	if (age > 18){
		printf("Welcome to the website\n");

		if(gender == 'm'){
			printf("Dude :)\n");
		}

			if(gender == 'f'){
				printf("Fucking bitch\n");
			}
	}

	if (age < 18){
		printf("You are just a kid\n");
	}

	return 0;
}

