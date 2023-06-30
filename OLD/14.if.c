#include <stdio.h>
#include <stdlib.h>

int main(){

	int a = 10;
	int b = 11;
	int money = 1000;
	int age = 19;

	if (age > 18){
		printf("Yeah you are welcome to the club sir!\n");
	}
	
	if(age < 18){
		printf("Fuck off from here pal\n");
	}

	if(money > 500){
		printf("Welcome to the Party\n");
	}

	if (money < 500){
		printf("Who The fuck are you again ?\n");
	}

	if ((age < 18) || (money > 800)){
		printf("welcome to the party rich man\n");
	}

	if(a > b){
		printf("a is greater then b\n");
	}

	if(a < b){
		printf("yoyo\n");
	}

	if(4>2){
		printf("Easy pisy\n");
	}

	else if (5 > 2){
		printf("yyyyyyyyyyyyyyyyyyyyyy?\n");
	}

else
	printf("stfu\n");

	return 0;
}
