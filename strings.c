#include "monty.h"

/**
 * __pchar - prints the top ascii value to the stdin.
 * @stack: pointer to node.
 * @line: number of line.
 */
void __pchar(stack_t **stack, unsigned int line)
{
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
		fclose(arcdta.file);
		free(arcdta.contt);
		frenos(*stack);
		exit(EXIT_FAILURE);
	}
	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
		fclose(arcdta.file);
		free(arcdta.contt);
		frenos(*stack);
		exit(EXIT_FAILURE);
	}
	putchar((*stack)->n);
	putchar(10);
}
