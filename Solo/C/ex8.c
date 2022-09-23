// square of numbers (n**n)

#include <stdio.h>

// declare 

int square (int num);

int main() {
	int x, result;

	x = 5;

	result = square(x);
	printf("%d suares is %d\n", x, result);

	return 0;
}

// defination 
int square(int num) {
	int y;

	y = num * num;

	return(y);
}
