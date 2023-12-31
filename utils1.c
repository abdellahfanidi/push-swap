#include "push_swap.h"

void	sa(t_stack *a)
{
	int data1;
	int data2;
	int pos1;
	int pos2;

	data1 = (*a)->data;
	pos1 = (*a)->position;
	data2 = (*a)->next->data;
	pos2 = (*a)->next->position;
	pop(a);
	pop(a);
	push(a,data1,pos1);
	push(a,data2,pos2);
	ft_putstr("\nsa");
}

void	sb(t_stack *b)
{
	int data1;
	int data2;
	int pos1;
	int pos2;

	data1 = (*b)->data;
	pos1 = (*b)->position;
	data2 = (*b)->next->data;
	pos2 = (*b)->next->position;
	pop(b);
	pop(b);
	push(b,data1,pos1);
	push(b,data2,pos2);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	ft_putstr("ss\n");
}

void	pa(t_stack *a, t_stack *b)
{
	push(a, (*b)->data, (*b)->position);
	pop(b);
	ft_putstr("\npa");
}

void	pb(t_stack *a, t_stack *b)
{
	push(b, (*a)->data, (*a)->position);
	pop(a);
	ft_putstr("\npb");
}


