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

#endif
