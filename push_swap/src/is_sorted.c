#include "../inc/push_swap.h"

int     is_sorted(t_node        **node)
{
        t_node  *current;
        current = *node;
        while(current && current->link)
        {
                if(current->value > current->link->value)
                        return(0);
                current = current->link;
        }
        return 1;//if is srted;
}
