#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *link;
} node;

static node *head, *new_stack;

void stackInit() {
	head = malloc(sizeof(node));
	head->data = 0;
	head->link = NULL;
}

void push(int n) {
	new_stack = malloc(sizeof(node));
	new_stack->data = n;
	new_stack->link = head->link;
	head->link = new_stack;
}

int pop() {
	node *tmp = head;
	head = head->link;
	free(tmp);
	return head->data;
}

void calcprint() {
	node *n = new_stack;
	while(n != NULL) {
		printf("%d ", n->data);
		n = n->link;
	}
	printf("\n");
}


int main() 
{
	stackInit();	
	return 0;
}
