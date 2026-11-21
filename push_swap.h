#ifndef PUSH_SWAP
# define PUSH_SWAP

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_stack
{
    int             value;
    struct s_stack  *next;
} t_stack;

void sa(t_stack **stack_a);
void ss(t_stack **stack_a, t_stack **stack_b);
void sb(t_stack **stack_b);
int is_valid(char *str);

#endif