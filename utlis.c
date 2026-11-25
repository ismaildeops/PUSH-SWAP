#include "push_swap.h"

int is_valid(char *str)
{
    if(str[0] == '\0')
        return 0;    
    int i = 0;
    if(str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return 0;
    }
    return 1;
}

void assign_index(t_stack *stack_a)
{
    t_stack *first;
    t_stack *second;
    first = stack_a;
    int count;
    while (first)
    {
        count = 0;
        second = stack_a;
        while (second)
        {
            if (second->value < first->value)
                count++;
            first->index = count;
            second = second->next;
        }
        first = first->next;
    }
}

