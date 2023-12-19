#include "push_swap.h"

void	sa(stack *a)
{
	int		d;

	if (*a && (*a)->next)
	{
		d = (*a)->data;
		(*a)->data = (*a)->next->data;
		(*a)->next->data = d;
	}

	ft_putstr("sa\n");
}

void	sb(stack *b)
{
	int		d;

	if (*b && (*b)->next)
	{
		d = (*b)->data;
		(*b)->data = (*b)->next->data;
		(*b)->next->data = d;
	}

	ft_putstr("sb\n");
}

void	ss(stack *a, stack *b)
{
	sa(a);
	sb(b);
	ft_putstr("ss\n");
}

void	pa(stack *a, stack b)
{
	push(a, b->data);
	ft_putstr("pa\n");
}

void	pb(stack a, stack *b)
{
	push(b, a->data);
	ft_putstr("pb\n");
}

