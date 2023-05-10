#include "monty.h"

void __pall(stack_t **stack, unsigned int line)
{
    while (stack)
        *stack = (*stack)->next;

    while (stack)
    {
        printf("%d\n", (*stack)->n);
        *stack = (*stack)->prev;
    }
}