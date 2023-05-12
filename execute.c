#include "monty.h"
/**
 * execute - main function execute de opcode
 * @stkorq: node
 * @cntt: content
 * @line: current line
 * Return: 0
*/
int execute(stack_t **stkorq, char *cntt, int line)
{
	instruction_t opfc[] = {
		{"push", __push},
		{"pall", __pall},
		{"pint", __pint},
		{"pop", __pop},
		{"swap", __swap},
		{"add", __add},
		{"nop", __nop},
		{NULL, NULL}
		};

	int i;
	char *opcode = strtok(cntt, " \t\n");
	char *arg = strtok(NULL, " \t\n");

	arcdta.arg = arg;

	for (i = 0; opcode && opfc[i].opcode_t; i++)
		if (!strcmp(opcode, opfc[i].opcode_t))
		{
			opfc[i].f(stkorq, line);
			return (0);
		}

	if (opcode && !opfc[i].opcode_t)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
		frenos(*stkorq);
		free(arcdta.contt);
		fclose(arcdta.file);
		exit(EXIT_FAILURE);
	}
	return (0);
}
