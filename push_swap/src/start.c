#include "../inc/push_swap.h"




void	start(t_node **p2h_a)
{
	t_node	*current;
	t_node	*stack_b;
	int	stack_case;

	current = *p2h_a;
	stack_case = count_nodes(p2h_a);
	stack_b = NULL;
	printf("UNSORTED\n");
	while(current)
	{
		printf("%d\n", current->value);
		current = current->link;
	}
	if(is_sorted(p2h_a))
		printf("Stack sorted, no need for operations\n");
	else if(stack_case == 2)
		sa(p2h_a);
	else if(stack_case == 3)
		easy_sort(p2h_a);
	else
		push_swap(p2h_a, &stack_b);
	//else if(stack_case == 4)
		//simple_sort(p2h_a, &stack_b);
	//else if(stack_case == 5)
	//	sort_v(p2h_a);
	//else if(stack_case > 5)
	//	havefun(p2h_a);
	
	current = *p2h_a;
	printf("\nSORTED\n");
	while(current)
        {
                printf("%d\n", current->value);
                current = current->link;
        }
		
}
