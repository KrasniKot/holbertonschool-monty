#include "monty.h"

void __swap(stack_t **stack, unsigned int line)
{
    stack_t *topcpy = *stack;
    int i = 0;

    while(topcpy && topcpy->next)
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

    topcpy = *stack;
    i = topcpy->n;
    topcpy->n = topcpy->next->n;
    topcpy->next->n = i;

}

void __add(stack_t **stack, unsigned int line)
{
    stack_t *topcpy = *stack;

    topcpy->next->n += topcpy->n;
    *stack = topcpy->next;
    free(topcpy);
}

void __nop(stack_t **stack, unsigned int line)
{
    void(stack);
    void(line);
}