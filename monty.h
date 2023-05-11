#ifndef nnn
#define nnn

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode_t: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode_t;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct ardta - contains the file data and allocated variables.
 * @file: file.
 * @contt: content.
 * @arg: argument.
*/
typedef struct ardta
{
	FILE *file;
	char *contt;
	char *opcde;
	char *arg;
} archdta;
extern archdta arcdta;

int execute(stack_t **stkorq, char *cntt, int line);
void __push(stack_t **stack, unsigned int line);
void adder(stack_t **top, int arg);
void __pall(stack_t **stack, unsigned int line);
void __pint(stack_t **stack, unsigned int line);
void __pop(stack_t **stack, unsigned int line);
void __swap(stack_t **stack, unsigned int line);
void __add(stack_t **stack, unsigned int line);
void __nop(stack_t **stack, unsigned int line);
void frenos(stack_t *stkorq);

#endif
