#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float avgprofit;
	int mango = 10;
	int sales = 59;
	int daysworked = 7;

	avgprofit = ((float)mango * (float)sales) / (float)daysworked;

	printf("Total avg :- $%.2f\n", avgprofit);

	return 0;

}
