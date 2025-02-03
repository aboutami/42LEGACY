#include "../inc/push_swap.h"

int     findsmall(t_node  **p2h_a)
{
        t_node  *current;
        int     tmp;

        current = *p2h_a;
        tmp = current->value;
        while(current->link)
        {
                if(current->link->value < tmp)
                        tmp = current->link->value;
                current = current->link;
        }
        return tmp;
}
