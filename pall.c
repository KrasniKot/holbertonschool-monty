#include "monty.h"

void __pall(stack_t **stack, unsigned int line)
{
	while (stack)
		*stack = (*stack)->next;

	while (stack)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->prev;
	}
}

void __pint(stack_t **stack, unsigned int line)
{
	printf("in pint\n");
	while (stack)
		*stack = (*stack)->next;

	if (stack)
		printf("pint: %d\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
}