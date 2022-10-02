#include <stdio.h>
#include <stdout.h>

typedef struct Node {
	int data;
	struct Node *link;
}
static typedef *head, *new_stack;
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

int main() 
{
	
	return 0;
}
