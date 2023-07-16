#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int my_number[10];
	my_number[0] = 11;
	my_number[1] = 12;
	my_number[2] = 13;
	my_number[3] = 14;
	my_number[4] = 15;
	my_number[5] = 16;
	my_number[6] = 17;
	my_number[7] = 18;
	my_number[8] = 19;
	my_number[9] = 20;

	printf("%d\n", my_number[8]);
	printf("%d\n", my_number[7]);
	printf("%d\n", my_number[6]);

	my_number[7] = 42;

	printf("The Number at the index value of 7 is -->%d\n", my_number[7]);

	int i;

	for (i=0; i < 4; i++){
		printf("%d", my_number[i]);
	}

	return 0;
}
