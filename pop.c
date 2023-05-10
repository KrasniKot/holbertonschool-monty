#include "monty.h"

void __pop(stack_t **stack, unsigned int line)
{
    stack_t *topcpy = *stack;

    while(topcpy->next)
        topcpy = topcpy->next;

    *stack = topcpy->prev;
    free((*stack)->next);

}