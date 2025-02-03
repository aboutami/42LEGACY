#include "../inc/push_swap.h"

void	rra(t_node **p2h_a)
{
	t_node	*last;
	t_node	*first;
	t_node	*before_last;

	if (!p2h_a || !*p2h_a || !(*p2h_a)->link)
		return ;
	first = *p2h_a;
	last = findlast(p2h_a);
	before_last = first;
	while (before_last->link->link != NULL)
		before_last = before_last->link;
	last->link = first;
	*p2h_a = last;
	before_last->link = NULL;
}

void	rrb(t_node **p2h_b)
{
	t_node	*last;
	t_node	*first;
	t_node	*before_last;

	if (!p2h_b || !*p2h_b || !(*p2h_b)->link)
		return ;
	first = *p2h_b;
	last = findlast(p2h_b);
	before_last = first;
	while (before_last->link->link != NULL)
		before_last = before_last->link;
	last->link = first;
	*p2h_b = last;
	before_last->link = NULL;
}

void	rrr(t_node **p2h_b, t_node **p2h_a)
{
	ra(p2h_a);
	rb(p2h_b);
}
