#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
	/*int pinchu = 0;

	while(pinchu <=100){
		printf("Pinchu is :- %d\n", pinchu);
		pinchu += 8;
	}
	*/

	int rows;
	int column;

	for(rows=1; rows<=10; rows++){
		for(column=1; column<=15; column++){
			printf("# ", column);
		}
	
		printf("\n");
	}


	return 0;
}
