#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h> //For debugging(shall be removed)
# include <stdbool.h>
typedef struct node
{
	int	index;
	int	value;
	struct node	*link;
}	t_node;
void    push_swap(t_node  **p2h_a, t_node **p2h_b);
char    **ft_split(char *str, char delimiter);
int     ft_atoi(const char *s, int *error_flag);
t_node	*findlast(t_node **p2h);
int     finddup(t_node **p2h);
int     ft_strcmp(const char *s1, const char *s2);
t_node		*is_valid(int argc, char *argv[]);
void    havefun(t_node **p2h_a);
int	count_nodes(t_node **p2h_a);
int	is_sorted(t_node **p2h_a);
void    start(t_node **p2h_a);
int     findbig(t_node  **p2h_a);
void	easy_sort(t_node **p2h_a);
void    simple_sort(t_node **p2h_a, t_node **p2h_b);
void    sort_v(t_node **p2h_a);
int     ft_isdigit(int c);
void	push(int x, t_node **p2h);
void	pa(t_node **p2h_a, t_node **p2h_b);
void	pb(t_node **p2h_b, t_node **p2h_a);
void	sa(t_node **p2h_a);
void	sb(t_node **p2h_b);
void	ss(t_node **p2h_a, t_node **p2h_b);
void	ra(t_node **p2h_a);
void	rb(t_node **p2h_b);
void	rr(t_node **p2h_b, t_node **p2h_a);
void	rra(t_node **p2h_a);
void	rrb(t_node **p2h_b);
void	rrr(t_node **p2h_b, t_node **p2h_a);
int findsmall(t_node **p2h_a);
#endif
