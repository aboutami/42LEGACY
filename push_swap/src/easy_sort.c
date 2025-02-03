#include "../inc/push_swap.h"

void	easy_sort(t_node **p2h_a)
{
	t_node	*top;
	int	big;
	

	top = *p2h_a;
	big = findbig(p2h_a);
	while(!is_sorted(p2h_a))
	{
		if(top->value == big)
		{
			ra(p2h_a);
			printf("ra\n");
		}
		else if(top->value > top->link->value)
		{
			sa(p2h_a);
			printf("sa\n");
		}

		else if (top->link->value == big)
		{
			rra(p2h_a);
			printf("rra");
		}
		top = *p2h_a;


	}

}
