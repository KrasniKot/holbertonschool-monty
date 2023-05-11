 #include "monty.h"
/**
 * __pall - print all
 * @stack: node
 * @line: line number
 * Return: nth
*/
void __pall(stack_t **stack, unsigned int line)
{
	stack_t *stkcpy = *stack;

	(void) line;
	while (stkcpy)
	{
		printf("%d\n", stkcpy->n);
		stkcpy = stkcpy->next;
	}
}
/**
 * __pint - print an integer
 * @stack: node
 * @line: line number
 * Return: nth
*/
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
