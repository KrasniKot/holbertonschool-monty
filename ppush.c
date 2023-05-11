#include "monty.h"
/**
 * __push - add node to the stack
 * @stack: node
 * @line: line number
 * Return: nth
*/
void __push(stack_t **stack, unsigned int line)
{
	int idx = 0;

	if (arcdta.arg && arcdta.arg[0] == 45)
		idx++;
	if (!arcdta.arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line);
		free(arcdta.contt);
		fclose(arcdta.file);
		frenos(*stack);
		exit(EXIT_FAILURE);
	}

	for (; arcdta.arg && arcdta.arg[idx]; idx++)
	{
		if (arcdta.arg[idx] < 48 || arcdta.arg[idx] > 57)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line);
			free(arcdta.contt);
			fclose(arcdta.file);
			frenos(*stack);
			exit(EXIT_FAILURE);
		}
	}

	if (arcdta.arg)
		adder(stack, atoi(arcdta.arg));
}
/**
 * adder - add a node
 * @top: node
 * @arg: argument
 * Return: nth
*/
void adder(stack_t **top, int arg)
{
	stack_t *new = malloc(sizeof(stack_t)), *top_cp = *top;

	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(arcdta.file);
		free(arcdta.contt);
		frenos(*top);
		exit(EXIT_FAILURE);
	}

	if (top_cp)
		top_cp->prev = new;

	new->n = arg;
	new->next = *top;
	new->prev = NULL;
	*top = new;
}
/**
 * __pop - delete the last node
 * @stack: node
 * @line: line number
 * Return: nth
*/
void __pop(stack_t **stack, unsigned int line)
{
	stack_t *topcpy = *stack;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		fclose(arcdta.file);
		free(arcdta.contt);
		exit(EXIT_FAILURE);
	}
	(void) line;
	while (topcpy->next)
		topcpy = topcpy->next;

	*stack = topcpy->prev;
	free((*stack)->next);

}
