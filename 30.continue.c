#include <stdio.h>
#include <stdlib.h>

int main(){

	int user = 1;

	do{
		if(user == 6 || user ==7){
			user++;
			continue;
		}

		printf("%d is avilable\n", user);
		user++;

	}while(user <= 10);

	return 0;
}


