#include "../inc/push_swap.h" 

int	count_nodes(t_node **p2h)
{
	t_node	*head;
	int	count;
	
	head = *p2h;
	count = 0;
	while(head)
	{
		count++;
		head = head->link;
	}
	return (count);
}
