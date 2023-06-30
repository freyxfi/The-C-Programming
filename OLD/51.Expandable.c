#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, howmany;
	int total;
	float average = 0.0;
	int * pointsarray;

	printf("How many numbers do you want to average?\n");
	scanf(" %d", &howmany);

	pointsarray = (int *) malloc(howmany * sizeof(int));

	printf("Enter them :\n");

	for(i=0; i<howmany ; i++){
		scanf(" %d", &pointsarray[i]);
		total += pointsarray[i];
	}

	average = (float)total / (float)howmany;

	printf("Average is %f", average);

	return 0;

}
