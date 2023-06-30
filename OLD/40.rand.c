#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

	int i;
	int diceroll;

	for(i = 0; i<=20; i++){

		diceroll = ( rand()%6 ) + 1;
		printf("%d\n", diceroll);
	}
	return 0;

}
