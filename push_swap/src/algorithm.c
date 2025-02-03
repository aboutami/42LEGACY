#include "../inc/push_swap.h"

void	push_swap(t_node  **p2h_a, t_node **p2h_b)
{
	t_node	*stack_a = *p2h_a;
	t_node	*stack_b = *p2h_b;
	int	stack_lenght;
	
	stack_lenght =  generateIndex(&stack_a);
	


	if(top_selection_price(stack_a) > bottom_selection_price)
		while(stack_a->index != bottom_selection->index )
			rra(stack_a);

	
}
