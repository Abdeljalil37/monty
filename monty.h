#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>

void f_pint(stack_t **head, unsigned int count);
void f_pop(stack_t **head, unsigned int counter);
#endif
