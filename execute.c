#include "monty.h"

int execute(stack_t **stkorq, char *cntt, int line)
{
	instruction_t opfc[] = {
		{"push", __push},
		{"pall", __pall},
		{NULL, NULL}
		};

	int i;
	char *opcode = strtok(cntt, " \t\n");
	char *arg = strtok(NULL, " \t\n");
	stack_t *frstack;

	arcdta.opcde = opcode;
	arcdta.arg = arg;

	for (i = 0; arcdta.arg && arcdta.opcde && opfc[i].opcode_t; i++)
		if (!strcmp(opcode, opfc[i].opcode_t))
			opfc[i].f(stkorq, line);

	while (*stkorq)
	{
		frstack = *stkorq;
		*stkorq = (*stkorq)->next;
		free(frstack);
	}

	return (0);
}