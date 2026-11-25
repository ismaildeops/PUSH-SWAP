#include "push_swap.h"


void rb(t_stack **stack_b)
{
    if (rotate_stack(stack_b))
        write(1, "rb\n", 3);
}

void rr(t_stack **stack_a, t_stack **stack_b)
{
    int a;
    int b;

    a = rotate_stack(stack_a);
    b = rotate_stack(stack_b);
    if (a || b)
        write(1, "rr\n", 3);
}

void pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *top_b;

    if (!stack_a || !stack_b || !*stack_b)
        return ;

    top_b = *stack_b;
    *stack_b = top_b->next;
    top_b->next = *stack_a;
    *stack_a = top_b;

    write(1, "pa\n", 3);
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *top_a;

    if (!stack_b || !stack_a || !*stack_a)
        return ;

    top_a = *stack_a;
    *stack_a = top_a->next;
    top_a->next = *stack_b;
    *stack_b = top_a;

    write(1, "pb\n", 3);
}

