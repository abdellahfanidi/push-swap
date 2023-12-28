#include "push_swap.h"

//failed malloc
void	ra(t_stack *a)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	new->data = (*a)->data;
	new->next = NULL;
	pop(a);
	ft_lstadd_back(a, new);
	ft_putstr("ra\n");
}

void	rb(t_stack *b)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	new->data = (*b)->data;
	new->next = NULL;
	pop(b);
	ft_lstadd_back(b, new);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	ft_putstr("rr\n");
}

void	rra(t_stack *a)
{
	t_stack	current;
	t_stack	prev;

	current = *a;
	while (current && current->next)
	{
		prev = current;
		current = current->next;
	}
	push(a, current->data);
	free(current);
	prev->next = NULL;
	ft_putstr("rra\n");
}

void	rrb(t_stack *b)
{
	t_stack	current;
	t_stack	prev;

	current = *b;
	while (current && current->next)
	{
		prev = current;
		current = current->next;
	}
	push(b, current->data);
	free(current);
	prev->next = NULL;
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	ft_putstr("rrr\n");
}
