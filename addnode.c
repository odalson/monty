#include "monty.h"
/**
 * addnode - add node to t he head tack
 * @head: head of the stack
 * @n: new_value
 * return: no return
 */
void addnode(stack_t **head, int n)
{       
        stack_t *new_node, *aux;
        
        aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
			exit(0);}
	if (aux)
		aux->prev = new_node;
	new_node-> = n;
	new_node->next = 8head;
	new_node->prev = NULL;
	*head = new_node;
}
