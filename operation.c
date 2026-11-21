#include "push_swap.h"

void sa(t_stack **stack_a)
{
    t_stack *head;
    t_stack *second;
    t_stack *cuurent;
    if (!stack_a || !*stack_a || !(*stack_a)->next)
        return ;
    head = *stack_a;
    second = head->next;
    cuurent = second->next;
    second->next = head;
    head->next = cuurent;
    *stack_a = second;
}

void sb(t_stack **stack_b)
{
    t_stack *head;
    t_stack *second;
    t_stack *cuurent;
    if (!stack_b || !*stack_b || !(*stack_b)->next)
        return ;
    head = *stack_b;
    second = head->next;
    cuurent = second->next;
    second->next = head;
    head->next = cuurent;
    *stack_b = second;
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
    sa(&stack_a);
    sb(&stack_b);
}