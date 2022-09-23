#include <stdio.h>
#include <stdlib.h>

int main(){

	char answer;

	printf("Do you like girls ? (y/n)\n");
	scanf(" %c",&answer);
	
	if((answer == 'y') || (answer == 'n')){

		printf("NICE\n");

	}else {
		printf("GAY\n");

	}

	return 0;

}
