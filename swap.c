#include "monty.h"

void __swap(stack_t **stack, unsigned int line)
{
    stack_t *topcpy = *stack;
    int i = 0;

    while(topcpy)
    {
        topcpy = topcpy->next;
        i++;
    }

    if (i < 2)
    {
        fprintf(stderr, "L%d: can't add, stack too short", line);
        fclose(arcdta.file);
        exit(EXIT_FAILURE);
    }

    if (topcpy == *stack)
        printf("They're the same\n");
    else
        printf("They're not the same\n");

    topcpy = *stack;

    if (topcpy == *stack)
        printf("They're the same\n");
    else
        printf("They're not the same\n");

}