#include <stdio.h>
#include <stdlib.h>
#include "company.h"

int main()
{
	struct employee Vinayak;
	struct employee Sameer;
	struct employee Aagya;

	Vinayak.userID = 1;
	Sameer.userID = 2;
	Aagya.userID = 3;

	puts("Enter the First name of user 1:");
	gets(Vinayak.firstName);
	puts("Enter the First name of user 2:");
	gets(Sameer.firstName);
	puts("Enter the First name of user 3:");
	gets(Aagya.firstName);

	printf("User 1 is %d\n", Vinayak.userID);
	printf("User 2 is %d\n", Sameer.userID);
	printf("User 3 is %d\n", Aagya.userID);


	printf("User 1 Name:%s\n", Vinayak.firstName);
	printf("User 2 Name:%s\n", Sameer.firstName);
	printf("User 3 Name:%s\n", Aagya.firstName);

	return 0;
}


