#include "../inc/push_swap.h"

int	main(int argc, char *argv[])

{
	t_node	*stack_a;
	if(argc < 3)
		return 0;
	stack_a = is_valid(argc, argv);
	if (stack_a)
		start(&stack_a);
	else if (stack_a == NULL)
		printf("error");
	


	return 0;
}
