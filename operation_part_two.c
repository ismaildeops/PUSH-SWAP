#include "push_swap.h"

void sa(t_stack **stack_a)
{
    if (swap_stack(stack_a))
        write(1, "sa\n", 3);
}

void sb(t_stack **stack_b)
{
    if (swap_stack(stack_b))
        write(1, "sb\n", 3);
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
    int a;
    int b;

    a = swap_stack(stack_a);
    b = swap_stack(stack_b);
    if (a || b)
        write(1, "ss\n", 3);
}

void ra(t_stack **stack_a)
{
    if (rotate_stack(stack_a))
        write(1, "ra\n", 3);
}

