#include <stdio.h>
int main(){     	// while loop (loop structure) 
	int count = 1;

	while (count < 15){
		printf("Hacking......%d\n", count);
		count--;
	}

	printf("\n");
	int a = 7;
	printf("Finding User = %d ...\n\n",a);
	while (a <= 13){
		printf("a=%d\n",a);
		++a;
	}
	int b = 1;
	do {
		printf("NASA = %d\n", b);
	       b++;
	} while (a < 3);

	return 0;
}
