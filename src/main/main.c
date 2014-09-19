#include "ll_basic_util.h"
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int c;
	struct node *head = malloc(sizeof(struct node));
	head->next = NULL;
	c = count(head);
	printf("The size if %d", c);
	return; 
}
