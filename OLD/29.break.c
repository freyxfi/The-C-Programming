#include <stdio.h>
#include <stdlib.h>

int main(){

	int a;
	int howmany;
	int maxamount = 10;

	printf("Time to run:-");
	scanf(" &d", &howmany);

	for(a=1; a<=maxamount; a++){

		printf(" %d\n",a);

		if(a == howmany){
			break;
		}

	}

	return 0;
}
