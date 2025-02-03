#include "../inc/push_swap.h"

void	sa(t_node **p2h_a)
{
	t_node	*node1;
	t_node	*node2;

	if (!p2h_a ||!*p2h_a || !(*p2h_a)->link)
		return ;
	node1 = *p2h_a;
	node2 = (*p2h_a)->link;
	*p2h_a = node2;
	node1->link = node2->link;
	node2->link = node1;
}

void	sb(t_node **p2h_b)
{
	t_node	*node1;
	t_node	*node2;

	if (!p2h_b ||!*p2h_b || !(*p2h_b)->link)
		return ;
	node1 = *p2h_b;
	node2 = (*p2h_b)->link;
	*p2h_b = node2;
	node1->link = node2->link;
	node2->link = node1;
}

void	ss(t_node **p2h_a, t_node **p2h_b)
{
	sa(p2h_a);
	sb(p2h_b);
}
