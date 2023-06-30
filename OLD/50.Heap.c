#include <stdio.h>
#include <stdlib.h>

int main(){

	int * points;
	
	points = (int *) malloc(5 * sizeof(int));
	
	printf("%d\n", points);
	printf("%d\n", sizeof(points));

	free(points);

	return 0;
}
