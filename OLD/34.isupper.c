#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(){

	int pinchu = 'g';

		if( isalpha(pinchu) ) {

			if( isupper(pinchu) ) {
				printf("%c is a upper case \n", pinchu); 
			}else{
				printf("%c is a lower case\n", pinchu);

			}
		}else {
			if( isdigit(pinchu) ) {
				printf("%c is a digit\n", pinchu);
			}else {
				printf("it is something out of the scope\n");

			}
		}
	return 0;

}
