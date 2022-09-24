#include <stdio.h>
#include <stdlib.h>

int main(){

	float grade = 0;
	float scoreEnter =0;
	float numberoftest =0;
	float average = 0;

	printf("press 0 when complete .\n\n");

	do{
		printf("Test:%.0f Average:%.2f \n", numberoftest, average);
		printf("Enter test score :-");
		scanf("%f", &scoreEnter);
		grade += scoreEnter;
		numberoftest++;
		average = grade / numberoftest;
	}while(scoreEnter != 0);

	return 0;

}


