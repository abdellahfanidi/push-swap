#include "push_swap.h"

void	sa(t_stack *a)
{
	t_stack current;
	t_stack next;
	int		d;
	current = *a;
	while(current && current->next)
	{
		next = current;
		current = current->next;
	}
	
	if (next && next->next)
	{
		d = next->data;
		next->data = next->next->data;
		next->next->data = d;
	}

}

void	sb(t_stack *b)
{
	t_stack current;
	t_stack next;
	int		d;
	current = *b;
	while(current && current->next)
	{
		next = current;
		current = current->next;
	}
	
	if (next && next->next)
	{
		d = next->data;
		next->data = next->next->data;
		next->next->data = d;
	}

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


