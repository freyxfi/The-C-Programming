#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){

	int lambo = '$';

	if( isalpha(lambo)) {
		printf("%c is a latter\n", lambo);
	}else {

		if (isdigit(lambo)) {
			printf("%c is a digit now\n", lambo);
		}else{

			printf("%c This is out of Earth\n", lambo);
	}
	}
	return 0;
}
