#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	char passwd[7];

	printf("Enter passwd :-");
	scanf(" %s",passwd);

	if( isalpha(passwd) ){
		printf("it contain letter check");
		{ if( isupper(passwd) ){
				printf("it has a upper case letter");
				       }
		}
	}
	if ( isdigit(passwd) ) {
		printf(" has a digit");
	} else 
		printf("you have a good passwd\n");

	return 0;
}
