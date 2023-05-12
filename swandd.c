#include "monty.h"
/**
 * __swap - swaps the last two nodes
 * @stack: node
 * @line: line number
 * Return: nth
*/
void __swap(stack_t **stack, unsigned int line)
{
	stack_t *topcpy = *stack;
	int i;

	for (i = 1; topcpy && topcpy->next; i++)
		topcpy = topcpy->next;

	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		fclose(arcdta.file);
		frenos(*stack);
		free(arcdta.contt);
		exit(EXIT_FAILURE);
	}

	topcpy = *stack;
	i = topcpy->n;
	topcpy->n = topcpy->next->n;
	topcpy->next->n = i;

}
/**
 * __add - adds the last two nodes
 * @stack: node
 * @line: line number
 * Return: nth
*/
void __add(stack_t **stack, unsigned int line)
{
	stack_t *topcpy = *stack;

	(void) line;
	topcpy->next->n += topcpy->n;
	*stack = topcpy->next;
	free(topcpy);
}
/**
 * __nop - does nth
 * @stack: node
 * @line: line number
 * Return: nth
*/
void __nop(stack_t **stack, unsigned int line)
{
	(void) stack;
	(void) line;
}
