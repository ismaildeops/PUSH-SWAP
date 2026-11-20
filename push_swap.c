#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

int duble_cates(t_stack *head)
{
    t_stack *hea = head;
    t_stack *hea2 = head;
    hea = head->next;
    while (head)
    {
        while (hea)
        {
            if (head->value == hea->value)
                return 1;
            else
            {
                hea = hea->next;
            }
        }
        head = head->next;
        hea = head->next;
    }
    return 0;
}

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    t_stack *new_node;
    t_stack *last;
    int     i;

    stack_a = NULL;
    stack_b = NULL;
    i = 1;
    while (i < ac)
    {
        new_node = malloc(sizeof(t_stack));
        if (!new_node)
            return (1);
        new_node->value = atoi(av[i]);
        new_node->next = NULL;
        if(stack_a == NULL)
            stack_a = new_node;
        else
            last->next = new_node;
        last = new_node;
        i++;
    }
    // while (stack_a)
    // {
    //     printf("%d\n", stack_a->value);
    //     stack_a = stack_a->next;
    // }
    printf("%d", duble_cates(stack_a));
    return (0);
}