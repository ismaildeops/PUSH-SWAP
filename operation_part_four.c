#include "push_swap.h"

void rra(t_stack **stack_a)
{
    if (reverse_rotate_stack(stack_a))
        write(1, "rra\n", 4);
}

void rrb(t_stack **stack_b)
{
    if (reverse_rotate_stack(stack_b))
        write(1, "rrb\n", 4);
}

void rrr(t_stack **stack_a, t_stack **stack_b)
{
    int a;
    int b;

    a = reverse_rotate_stack(stack_a);
    b = reverse_rotate_stack(stack_b);

    if (a || b)
        write(1, "rrr\n", 4);
}
