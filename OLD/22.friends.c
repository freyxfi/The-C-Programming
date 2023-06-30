#include <stdio.h>
#include <stdlib.h>

int main(){

	/*
	 * i have 0 friends 
	 * i have 1 friend 
	 * i have 2 friends 
	 * wtf is with this "s" ?
	 */

	int friends = 1;
	printf("I have %d friend%s\n", friends, (friends !=1) ? "s" : "");	

	return 0;
}
