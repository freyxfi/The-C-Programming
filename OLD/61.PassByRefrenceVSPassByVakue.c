#include <stdio.h>
#include <stdlib.h>

void passbyvalue(int i);
void passbyaddress(int *i);

int main(){

	int lambo = 20;

	passbyvalue(lambo);
	printf("passing by value lambo is :- %d\n", lambo);

	passbyaddress(&lambo);
	printf("passing by address lambo is :- %d\n", lambo);


	return 0;

}

void passbyvalue(int i){
	i = 69;
	return;
}

void passbyaddress(int *i){
	*i = 42;
	return;
}


