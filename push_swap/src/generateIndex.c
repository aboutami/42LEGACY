#include "../inc/push_swap.h"

int	generate_index(t_node **stack_a)
{
	t_node	*current;
	t_node	*temp;
	int	stack_lenght;
	int	big;
	int	tmp;
	temp = stack_a; // to edit the stack with out impacting the original
	stack_lenght= calculate_stack_lenght(stack_a);//get stack lenght 
	tmp = stack_lenght; // store value in temp to send the correct lenght later
	current = *stack_a;

	while(current)
	{
		 big = findbig(&temp)

		if(current->value == big)// if we found the big 
		{
			current->index = tmp; // we asign it the lenght
			tmp--; //we decriment the lenght 
		}
		current = current->link;//we update the position
		detach_big(&temp);//we detach the big from the list for next fing big call

	}
	
	return stack_lenght;
}
