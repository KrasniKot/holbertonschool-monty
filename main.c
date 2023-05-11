#include "monty.h"
archdta arcdta = {NULL, NULL, NULL};

int main(int ac, char **av)
{
	int getchk = 1, line;
	size_t size = 0;
	FILE *ofle;
	stack_t *stkorq = NULL, *frestk;

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

	for (line = 0; getchk > 0; line++)
	{
		arcdta.contt = NULL;
		getchk = getline(&arcdta.contt, &size, ofle);
		if (getchk > 0)
			execute(&stkorq, arcdta.contt, line);
		free(arcdta.contt);
	}

	fclose(ofle);
	frestk = stkorq;
	while (stkorq)
	{
		frestk = frestk->next;
		free(stkorq);
		stkorq = frestk;
	}
	return (0);
}