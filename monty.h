#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>

void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int counter);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
void f_queue(stack_t **head, unsigned int counter);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);


#endif
