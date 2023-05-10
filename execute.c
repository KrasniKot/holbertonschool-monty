#include "monty.h"

int execute(stack_t **stkorq, char *cntt, int line)
{
	instruction_t opfc[] = {
		{"push", __push},
		{"pall", __pall},
		{"pint", __pint},
		{NULL, NULL}
		};

	int i;
	char *opcode = strtok(cntt, " \t\n");
	char *arg = strtok(NULL, " \t\n");
	stack_t *frstack;

	arcdta.arg = arg;

	for (i = 0; opfc[i].opcode_t; i++)
		if (!strcmp(opcode, opfc[i].opcode_t))
			opfc[i].f(stkorq, line);

	return (0);
}