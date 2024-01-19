#include "monty.h"
/**
 * f_rotr - rotates the atsck to the bottom
 * @head: stack head
 * @counter: line_number
 * return: no return
 */
void f_rotr(stack_t **head, _attribute_((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
