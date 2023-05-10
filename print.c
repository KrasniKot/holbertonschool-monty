#include "monty.h"

void __pall(stack_t **stack, unsigned int line)
{
	stack_t *stkcpy = *stack;

	while(stkcpy)
	{
		printf("%d\n", stkcpy->n);
		stkcpy = stkcpy->next;
	}
}

void __pint(stack_t **stack, unsigned int line)
{
	stack_t *stkcpy = *stack;

	while (stkcpy && stkcpy->next)
		stkcpy = stkcpy->next;

	if (stkcpy)
		printf("%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
}