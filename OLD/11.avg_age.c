#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	/* group age */

	float age1, age2, age3, age4, age5, age6, age7, average;
	age1 = age2 = age3 = age7 = 19;

	age4, age5 = 20;

	printf("Enter your age :-");
	scanf("%f", &age6);  // as only one have 18 so i'm asking from the end user lol 

	average = (age1 + age2 + age3 + age4 + age5 + age6 + age7) / 7;

	printf("your group average age is :-%f \n", average);

	return 0;

}

