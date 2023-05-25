#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX_LINE_LENGTH 1024

/**struct stack_s - doubly linked list representation of a stack (or queue)
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
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(stack_t **stack,int value, unsigned int line_number);
void pall(stack_t **stack);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(void);
void monty_run(const char *file_path);
void process_line(char *line, unsigned int line_number, stack_t **stack);
bool is_number(const char *str);
void malloc_error(void);
void emptyStack_error (unsigned int line_number);
void push_arg_error(unsigned int line_number);
void swap_error(unsigned int line_number);
void add_stack_error(unsigned int line_number);
void pop_error(unsigned int line_number);
void error_arguments(void);
void int_error(unsigned int line);
void Instruction_error(char *instruction, unsigned int line);
void open_error(const char *filename);
#endif

