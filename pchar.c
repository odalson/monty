#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack
 * followed by a new line
 * @head: stack head
 * @counter: line number
 * return: no return
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;
	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: cant pchar, stack empty\n", counter );
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h-> > 127 || h->n < 0 )
	{
		fprintf(stderr, "L%d: cant pchar, value out of range\n", counter );
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
