#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a;
	int b;
	int result, n, i;
	printf("Enter The Number of Terms:- ");
	scanf("%d",&n);

	a = 0;
	b = 1;

	for(i=1; i<=n; i++)
	{
		printf("%d ", a);
		result = a + b;
		a = b;
		b = result;
	}

	return 0;
}
