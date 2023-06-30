#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){

	int i;
	int waifu[5] = {2,5,78,2,3};

	printf("Element \t Address \t\t Value\n");

	for(i = 0; i<5; i++){
		printf("waifu[%d] \t %p \t %d\n", i, &waifu[i], waifu[i]);
	}

	printf("\n Waifu \t\t %p \n", waifu);
	//derefrence 
	printf("\n Waifu \t\t %d \n", *waifu);
	printf("\n Waifu+2 \t\t %d \n", *(waifu+2));

	
	
	return 0;
}
