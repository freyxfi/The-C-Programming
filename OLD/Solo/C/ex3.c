#include <stdio.h>
int main(){
	int cake_to_eat = 100;

	cake_to_eat = cake_to_eat++;

	printf("%d cakes\n",cake_to_eat);

	return 0;
}
