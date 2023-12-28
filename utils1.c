#include "push_swap.h"

void	sa(t_stack *a)
{
	int data1;
	int data2;

	data1 = (*a)->data;
	data2 = (*a)->next->data;
	pop(a);
	pop(a);
	push(a,data1);
	push(a,data2);
	ft_putstr("sa\n");
}

void	sb(t_stack *b)
{
	int data1;
	int data2;

	data1 = (*b)->data;
	data2 = (*b)->next->data;
	pop(b);
	pop(b);
	push(b,data1);
	push(b,data2);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	ft_putstr("ss\n");
}

void	pa(t_stack *a, t_stack *b)
{
	push(a, (*b)->data);
	pop(b);
	ft_putstr("\npa");
}

void	pb(t_stack *a, t_stack *b)
{
	push(b, (*a)->data);
	pop(a);
	ft_putstr("\npb");
}


