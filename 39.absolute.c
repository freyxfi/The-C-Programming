#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

	int year1;
	int year2;
	int age;
	
	printf("%f\n", pow(5,3));	
	printf("%f\n", sqrt(4));	

	printf("Enter a year \n");
	scanf(" %d", &year1);

	printf("Enter another year \n");
	scanf(" %d", &year2);

	age = year1 - year2;

	printf("you are %d years old bro\n", age);
	age  = abs(age);
	printf("you are %d years old bro\n", age);
	

	return 0;
}
