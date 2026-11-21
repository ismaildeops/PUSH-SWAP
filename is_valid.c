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