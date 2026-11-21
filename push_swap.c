#include "push_swap.h"

int duble_cates(t_stack *head)
{
    while (head)
    {
        int value = head->value;
        t_stack *current = head->next;
        while (current)
        {
            if(current->value == value)
                return 1;
            current = current->next;
        }
        head = head->next;
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
        if(is_valid(av[i]) == 1)
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
        else
        {
            write(2,"Error\n",6);
            //free_nodes
            return (-1);
        }
    }
    // sa(&stack_a);
    if(duble_cates(stack_a) == 0)
    {
        while (stack_a)
        {
            printf("%d\n", stack_a->value);
            stack_a = stack_a->next;
        }
    }
    else
    {
        write(2,"Error\n",6);
        return (-1);
    }
    return (0);
}



// av[1] = "2 1 3 4";
/*
sa,sb,ss, change first two
pa,pb, move top one b to a and a to b
ra,rb,rr, top one 
rra,rrb,rrr last one 
*/