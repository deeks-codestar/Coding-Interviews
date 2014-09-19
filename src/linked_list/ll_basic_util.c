#include "ll_basic_util.h"
#include<stdio.h>


int count(struct node *head)
{
	int count = 0;
	while(head != NULL)
	{
		count++;
		head = head->next;
	}
	return count;
}
