#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	struct Node* next;
	int data;
}N;

N* get_node(void)				// ���A
{
	
	N* node = (N*)malloc(sizeof(N));
	node->data = 10;
	node->next = NULL;

	return node;
}

void get_node(N** head)			// ���B
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = 10;
	node->next = NULL;

	*head = node;
	return;
}

int main() 
{
	Node* head = NULL;

	head = get_node();	//head�� ��带 ����

	printf("%d\n", head->data);

	free(head);



	return 0;
}