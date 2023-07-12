#include <stdio.h>
#include <stdlib.h>


struct node{
       int data;
	struct node *link;
};

int main(){
	struct node *head = NULL; 
	head = (struct node *)malloc(sizeof(struct node));

	head->data = 45;
	head->link = NULL;

	printf("Value in the node =>%d\n",head->data);

	return 0;
}
