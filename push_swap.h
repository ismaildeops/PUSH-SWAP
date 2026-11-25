#ifndef PUSH_SWAP
# define PUSH_SWAP

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_stack
{
    int             value;
    int             index;
    struct s_stack  *next;
} t_stack;

int is_valid(char *str);
int	ft_atoi(const char *nptr);

int swap_stack(t_stack **stack);
int rotate_stack(t_stack **stack);
int reverse_rotate_stack(t_stack **stack);
void assign_index(t_stack *stack_a);//
void sa(t_stack **stack_a);
void ss(t_stack **stack_a, t_stack **stack_b);
void sb(t_stack **stack_b);
void ra(t_stack **stack_a);
void rb(t_stack **stack_b);
void rr(t_stack **stack_a, t_stack **stack_b);
void pa(t_stack **stack_a, t_stack **stack_b);
void pb(t_stack **stack_a, t_stack **stack_b);
void rra(t_stack **stack_a);
void rrb(t_stack **stack_b);
void rrr(t_stack **stack_a, t_stack **stack_b);

#endif
