#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char username = 'B'; // yeah why not 
	switch(username){
		case 'A' : printf("Fuxxy is donkey\n");
			       break;
		case 'B' : printf("WTFDude\n");
						break;
		case 'C' : printf("Ok calm down\n");
				    break;
		case 'D' : printf("Legend Spotted\n");
				    break;
		case 'E' : printf("Who is he again ?\n");
				   break;
		default : printf("You don't have a username\n");
	}

	return 0;
}
