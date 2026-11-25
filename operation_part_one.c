#include "push_swap.h"

int swap_stack(t_stack **stack)
{
    t_stack *first;
    t_stack *second;

    if (!stack || !*stack || !(*stack)->next)
        return (0);
    first = *stack;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *stack = second;
    return (1);
}

int rotate_stack(t_stack **stack)
{
    t_stack *top;
    t_stack *last;

    if (!stack || !*stack || !(*stack)->next)
        return (0);
    top = *stack;
    last = top;
    while (last->next)
        last = last->next;
    *stack = top->next;
    top->next = NULL;
    last->next = top;
    return (1);
}

int reverse_rotate_stack(t_stack **stack)
{
    t_stack *last;
    t_stack *before_last;

    if (!stack || !*stack || !(*stack)->next)
        return (0);

    before_last = *stack;
    last = before_last->next;

    while (last->next)
    {
        before_last = last;
        last = last->next;
    }

    before_last->next = NULL;
    last->next = *stack;
    *stack = last;

    return (1);
}
