#include<stdio.h>
#ifndef LINKED_LIST_BASICS_H
#define LINKED_LIST_BASICS_H

struct node
{
	int data;
	struct node *next;
};

int count(struct node* head);

#endif
