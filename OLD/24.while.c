#include <stdio.h>
#include <stdlib.h>

int main(){

	int day = 1;
	float amount = 0.1;

	while(day <=30){
		printf("Day :- %d \t And amount you got:- %.2f\n", day,amount);

		amount *=2;
		day++;
	}
	return 0;
}
