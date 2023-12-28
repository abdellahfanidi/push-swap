#include "push_swap.h"

static void	check_iii(t_stack *a)
{
	t_stack	current;

	current = (*a)->next;
	if ((*a)->data < current->data && current->data > current->next->data)
	{
		if ((*a)->data > current->next->data)
			rra(a);
		else
		{
			rra(a);
			sa(a);
		}
		return ;
	}
	if ((*a)->data > current->data && current->data < current->next->data)
	{
		if ((*a)->data > current->next->data)
			ra(a);
		else
			sa(a);
		return ;
	}
}

void	solve_iii(t_stack *a)
{
	t_stack current;

	current = (*a)->next;
	if ((*a)->data > current->data && !current->next)
	{
		sa(a);
		return ;
	}
	if ((*a)->data > current->data && current->data > current->next->data)
	{
		sa(a);
		ra(a);
		ra(a);
		return ;
	}
	check_iii(a);
}