#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){

	int i;
	int lambo[4] = {2,5,76,23};

	// have no 0 (whatever that empty space)
	
	for(i=0 ; i<4; i++){
		printf("Element %d %d\n", i, lambo[i]);
	}
	return 0;
}
