#include "monty.h"

/**
 * sub - subtracts the top elements of the stack.
 * @stack: node.
 * @line: current line.
 */
void __sub(stack_t **stack, unsigned int line)
{
	stack_t *topcpy = *stack;
	int i;

	for (i = 1; topcpy && topcpy->next; i++)
		topcpy = topcpy->next;

	if (i < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		fclose(arcdta.file);
		frenos(*stack);
		free(arcdta.contt);
		exit(EXIT_FAILURE);
	}

	(void) line;
	topcpy = *stack;
	topcpy->next->n -= topcpy->n;
	*stack = topcpy->next;
	free(topcpy);
}

/**
 * div - divides the top elements of the stack.
 * @stack: node.
 * @line: current line.
 */
void __div(stack_t **stack, unsigned int line)
{
	stack_t *topcpy = *stack;
	int i;

	for (i = 1; topcpy && topcpy->next; i++)
		topcpy = topcpy->next;

	if (i < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line);
		fclose(arcdta.file);
		frenos(*stack);
		free(arcdta.contt);
		exit(EXIT_FAILURE);
	}

	(void) line;
	topcpy = *stack;
	if (!topcpy->)
	{
		fprintf(stderr, "L%d: division by zero\n", line);
		fclose(arcdta.file);
		frenos(*stack);
		free(arcdta.contt);
		exit(EXIT_FAILURE);
	}
	topcpy->next->n /= topcpy->n;
	*stack = topcpy->next;
	free(topcpy);
}
