#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int x, int y);

int main(){

	char name[10] = "Hello";
	int x,y,r;
	x = 12; 
	y = 15;
	r = sum(x,y);
	printf("%s\n",name);
	
	printf("%d\n",r);


	return 0;
}

int sum(int x, int y){
	x +=y;
	return x;
}
