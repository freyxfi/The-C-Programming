#include <stdio.h>
#include <stdlib.h>

int main(){

	float score1;
	float score2;
	float score3;

	float avg;

	printf("Enter your first score:-");
	scanf("%f",&score1);
	scanf("%f",&score2);
	scanf("%f",&score3);

	avg = (score1 + score2 + score3) / 3;

	printf("average :- %.2f\n", avg);

	if (avg >= 90){
		printf("Your grade is A\n");
	} else if (avg >= 80){
		printf("Your grade is B\n");
	} else if (avg >= 70){
		printf("Your grade is C\n");
	} else if (avg >= 60){
		printf("Your grade is D\n");
	} else {
		printf("Don't worry you are going to rule\n");
	}

	return 0;
}
