#include "monty.h"
archdta arcdta = {NULL, NULL, NULL, NULL};
/**
 * main - main function
 * @ac: counter arguments
 * @av: arguments
 * Return: 0
*/
int main(int ac, char **av)
{
	int getchk = 1, line = 0;
	size_t size = 0;
	FILE *ofle;
	stack_t *stkorq = NULL;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	ofle = fopen(av[1], "r");
	if (!ofle)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	arcdta.file = ofle;

	while (getchk > 0)
	{
		arcdta.contt = NULL;
		getchk = getline(&arcdta.contt, &size, ofle);
		line++;
		if (getchk > 0)
			execute(&stkorq, arcdta.contt, line);
		free(arcdta.contt);
	}

	fclose(ofle);
	frenos(stkorq);
	return (0);
}

/**
 * frenos - frees an linked list.
 * @stkorq: node.
*/
void frenos(stack_t *stkorq)
{
	stack_t *frestk = stkorq;

	while (stkorq)
	{
		frestk = frestk->next;
		free(stkorq);
		stkorq = frestk;
	}

}
