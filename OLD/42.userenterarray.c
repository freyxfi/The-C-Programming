#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(){

	int i;
	int lambo[5];
	int totallambo = 0;


	for(i=0; i<5; i++){
		printf("how many lambo you bought ?:- %d\n", i+1);
		scanf(" %d", &lambo[i]);
	}

	for(i = 0; i<5; i++){
		totallambo += lambo[i];
	}

	int avg = totallambo / 5;
	printf("you bought %d lambo as an average of %d\n", totallambo, avg);

	return 0;
}
